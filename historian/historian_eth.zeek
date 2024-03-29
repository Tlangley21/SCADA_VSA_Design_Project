# Store this file in /opt/zeek/share/zeek/site in VM

# Disable default behavior of generating conn logs for all traffic
redef log_conn = F;

# Enable conn logging specifically for Ethernet traffic
event zeek_init()
    {
    Log::create_stream(Conn::LOG, [$columns=Conn::default_fields]);
    }

event zeek_done()
    {
    Log::remove_stream(Conn::LOG);
    }

event connection_state_remove(c: connection)
    {
    if (c$id$orig_h in set(10.0.0.0/8) || c$id$resp_h in set(10.0.0.0/8))
        {
        Log::write(Conn::LOG, c);
        }
    }