#include "cove_server.h"
#include "cove_privateserver.h"
#include "cove_secureserver.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication Cove_Client_Server(argc, argv);

    cove_server *server = new cove_server();
    bool conSuccessful = server->listen(QHostAddress::Any, 4200);

    cove_privateserver *pserver = new cove_privateserver();
    conSuccessful = pserver->listen(QHostAddress::Any, 4201);

    cove_secureserver *sserver = new cove_secureserver();
    conSuccessful = sserver->listen(QHostAddress::Any, 4202);

    if(!conSuccessful)
    {
        qFatal("Could not listen on port 4200.");
    }
    else{
        qDebug() << "Ready";
    }

    return Cove_Client_Server.exec();
}
