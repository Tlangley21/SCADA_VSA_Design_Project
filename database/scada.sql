-- SQL Schema for the system's PostgreSQL Database

CREATE SCHEMA scada;

-- Creating the SensorData table
CREATE TABLE scada.sensor_data (
    entry_id SERIAL PRIMARY KEY,
    sensor_id INT,
    sensor_name VARCHAR(100) NOT NULL,
    sensor_type VARCHAR(50),
    time_stamp TIMESTAMP WITH TIME ZONE DEFAULT CURRENT_TIMESTAMP,
    measured_value FLOAT NOT NULL,
    unit VARCHAR(50)
    -- Add additional columns as needed
);

-- Add a record to the table
-- INSERT INTO SensorData (ID, SensorID, Timestamp, Value)
-- VALUES (1, 1001, '2024-02-02 12:30:00', 23.5);

-- Return all records from SensorID = 1001
-- SELECT * FROM SensorData WHERE SensorID = 1001;
