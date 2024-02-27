@load base/protocols/usb
@load base/protocols/conn

# This file logs every USB and Ethernet connection/disconnection

# Define the interface you want to monitor
const interface = "eth0";

# Event handler for when a USB device is connected
event usb_connect(c: connection, usb: USB::Info)
    {
    local json = {
        "event": "usb_connect",
        "timestamp": network_time(),
        "device_id": c$id$resp_h,
        "vendor": usb$vendor,
        "product": usb$product,
        "connection_type": "usb"
    };

    Log::write(JSON::LOG, json);
    }

# Event handler for when a USB device is disconnected
event usb_disconnect(c: connection, usb: USB::Info)
    {
    local json = {
        "event": "usb_disconnect",
        "timestamp": network_time(),
        "device_id": c$id$resp_h,
        "vendor": usb$vendor,
        "product": usb$product,
        "connection_type": "usb"
    };

    Log::write(JSON::LOG, json);
    }

# Event handler for logging Ethernet connections
event log_ethernet(c: connection)
    {
    local json = {
        "event": "ethernet_connection",
        "timestamp": network_time(),
        "src_ip": c$id$orig_h,
        "dest_ip": c$id$resp_h,
        "connection_type": "ethernet"
    };

    Log::write(JSON::LOG, json);
    }

# Main script entry point
event zeek_init()
    {
    # Activate USB and Conn protocol analyzers
    USB::enable();
    Log::create_stream(JSON::LOG, [$columns=JSON::LOG_COLS]);

    # Start capturing packets on the specified interface
    local eth0 = find_interface(interface);
    if ( eth0 == "" )
        {
        print fmt("Interface %s not found, using default interface.", interface);
        }
    else
        {
        print fmt("Using interface %s for USB and Ethernet monitoring.", interface);
        }
    }
