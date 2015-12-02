#ifndef COVE_SECURESERVER_H
#define COVE_SECURESERVER_H

#include <QStringList>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QSet>

class cove_secureserver : public QTcpServer
{
    Q_OBJECT

public:
    cove_secureserver(QObject *parent=0);

private slots:
    void readyRead();
    void disconnected();
    void sendUserList();

protected:
    void incomingConnection(int socketfd);

private:
    QSet<QTcpSocket*> clients;
    QMap<QTcpSocket*,QString> users;

};

#endif // COVE_PRIVATESERVER_H
