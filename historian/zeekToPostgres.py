# Store this file in /home/ryanclarke in VM

import json
import subprocess

with open('/opt/zeek/logs/current/conn.log', 'r') as file:
    log_content = ''.join(file.readlines())
    log_lines = log_content.splitlines()
    for line in log_lines:
        if line.strip():
            data = json.loads(line)

            ts_value = data["ts"]
            readable_ts = subprocess.check_output(['date', '-d', '@' + str(ts_value)])
            print("Timestamp:", readable_ts.decode('utf-8').strip())
            print("UID:", data["uid"])
            print("Original Host:", data["id.orig_h"])
            print("Original Port:", data["id.orig_p"])
            print("Response Host:", data["id.resp_h"])
            print("Response Port:", data["id.resp_p"])
            print("Protocol:", data["proto"])
            print("Connection State:", data["conn_state"])
            # print("Local Origin:", data["local_orig"])
            # print("Local Response:", data["local_resp"])
            # print("Missed Bytes:", data["missed_bytes"])
            # print("History:", data["history"])
            # print("Original Packets:", data["orig_pkts"])
            # print("Original IP Bytes:", data["orig_ip_bytes"])
            # print("Response Packets:", data["resp_pkts"])
            # print("Response IP Bytes:", data["resp_ip_bytes"])
            print()

# TODO: connect to PostgreSQL DB once ethernet connection is tested