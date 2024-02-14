# client.py file on raspberry pi ssh

import socket

HOST = '10.0.0.174' # ethernet ipv4 of laptop
PORT = 12345

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b'Hello, server!')
    data = s.recv(1024)

print('Received:', data.decode())
