-- Currently running as postgres user via psql in VM 

CREATE DATABASE [IF NOT EXISTS] historian;

CREATE TABLE [IF NOT EXISTS] connection_logs(
    id serial PRIMARY KEY,
    time_stamp TEXT,
    uid TEXT,
    original_host TEXT,
    response_host TEXT,
    original_port TEXT,
    response_port TEXT,
    protocol TEXT,
    conn_state TEXT
);

SELECT * FROM connection_logs;