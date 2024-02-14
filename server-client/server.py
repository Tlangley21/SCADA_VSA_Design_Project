# server.py file on laptop server terminal

import socket

HOST = '0.0.0.0' 
PORT = 12345      

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen(1)
    print("Server is listening for connections...")
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        while True:
            data = conn.recv(1024)
            if not data:
                break
            print('Received:', data.decode())
            conn.sendall(b'Received: ' + data)
