# client.py file on raspberry pi ssh

import socket

HOST = '192.168.1.101' # ethernet static ip address
PORT = 12345

s = socket.socket
with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST, PORT))
    s.sendall(b'Hello, server!')
    data = s.recv(1024)

print('Received:', data.decode())
