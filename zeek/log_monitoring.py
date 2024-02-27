import json
from datetime import datetime

# Function to parse JSON logs from Zeek
def parse_logs(log_file):
    with open(log_file, 'r') as file:
        for line in file:
            log_entry = json.loads(line)
            print(f"[{datetime.fromtimestamp(log_entry['timestamp'])}] {log_entry}")

# Main function
def main():
    log_file = '/path/to/zeek/logs/current/conn.log'  # Adjust path to your Zeek JSON log file
    parse_logs(log_file)

if __name__ == "__main__":
    main()