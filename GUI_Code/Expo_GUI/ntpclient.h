#ifndef NTPCLIENT_H
#define NTPCLIENT_H

#include <QObject>
#include <QUdpSocket>
#include <QDateTime>

class NtpClient : public QObject
{
    Q_OBJECT

public:
    explicit NtpClient(QObject *parent = nullptr);
    void queryTime(); // Function to query the time from the NTP server

signals:
    void timeReceived(const QDateTime &time); // Signal emitted when time is received

private slots:
    void readReply(); // Slot to handle the reply from the NTP server

private:
    QUdpSocket *socket; // UDP socket for network communication
};

#endif // NTPCLIENT_H
