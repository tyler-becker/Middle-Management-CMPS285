#ifndef COVE_SERVER_H
#define COVE_SERVER_H

#include <QStringList>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QSet>

class cove_server : public QTcpServer
{
    Q_OBJECT

public:
    cove_server(QObject *parent=0);

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

#endif // COVE_SERVER_H
