#include "ntpclient.h"
#include <QDataStream>
#include <QDebug>

// Include the appropriate network byte order conversion header
#if defined(Q_OS_WIN)
#include <winsock2.h>  // For Windows
#include <Ws2tcpip.h>
#elif defined(Q_OS_UNIX)
#include <arpa/inet.h> // For Unix-like systems (Linux, macOS)
#endif

NtpClient::NtpClient(QObject *parent) : QObject(parent), socket(new QUdpSocket(this))
{
    connect(socket, &QUdpSocket::readyRead, this, &NtpClient::readReply);
}

void NtpClient::queryTime()
{
    QByteArray data(48, 0);
    data[0] = 0b00100011; // Basic NTP header

    // Use one of Google's NTP servers
    QString server = "time.google.com";
    socket->connectToHost(server, 123);
    socket->write(data);
}

void NtpClient::readReply()
{
    QByteArray buffer;
    while (socket->hasPendingDatagrams()) {
        buffer.resize(socket->pendingDatagramSize());
        socket->readDatagram(buffer.data(), buffer.size());
    }

    if (buffer.size() < 48) return; // Basic validation

    // Extract the transmit timestamp (ignoring the rest)
    quint32 seconds;
    QDataStream stream(&buffer, QIODevice::ReadOnly);
    stream.skipRawData(40); // Skip to the transmit timestamp part
    stream >> seconds;

    // Use ntohl to correct the endianness before converting NTP time to Unix epoch
    seconds = ntohl(seconds);

    QDateTime time = QDateTime::fromSecsSinceEpoch(seconds - 2208988800UL);
    emit timeReceived(time);
}
