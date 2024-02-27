FROM zeek/zeek:latest

RUN mkdir -p /usr/local/zeek

# Copy Zeek script into the container
COPY usb_eth_monitoring.zeek /usr/local/zeek/scripts/
COPY local.zeek /usr/local/zeek/

# Start Zeek using ZeekControl when the container starts
CMD ["zeekctl", "deploy", "&&", "tail", "-f", "/dev/null"]
