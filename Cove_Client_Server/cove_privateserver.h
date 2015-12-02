#ifndef COVE_PRIVATESERVER_H
#define COVE_PRIVATESERVER_H

#include <QStringList>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QSet>

class cove_privateserver : public QTcpServer
{
    Q_OBJECT

public:
    cove_privateserver(QObject *parent=0);

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
