import psycopg2
import time
from datetime import datetime

# Database connection parameters
db_params = {
    'dbname': 'scada',
    'user': 'ryanclarke',
    'password': 'your_password',
    'host': 'localhost',
    'port': '5432'
}

def insert_sensor_data(sensor_data):
    try:
        conn = psycopg2.connect(**db_params)
        cursor = conn.cursor()
        timestamp = datetime.now()
        cursor.execute("INSERT INTO scada_system.sensor_data (timestamp, measurement_value) VALUES (%s, %s)", (timestamp, sensor_data))
        conn.commit()
        cursor.close()
        conn.close()
    except psycopg2.Error as e:
        print("Error inserting data:", e)

def main():
    # Main loop to read sensor data continuously
    while True:
        try:
            # Read sensor data here
            sensor_data = read_sensor_data()
            # Insert sensor data into database
            insert_sensor_data(sensor_data)
            # Sleep for one second
            time.sleep(1)
        except KeyboardInterrupt:
            break

if __name__ == "__main__":
    main()