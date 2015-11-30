#include "cove_server.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication Cove_Client_Server(argc, argv);

    cove_server *server = new cove_server();
    bool conSuccessful = server->listen(QHostAddress::Any, 4200);

    if(!conSuccessful)
    {
        qFatal("Could not listen on port 4200.");
    }
    else{
        qDebug() << "Ready";
    }

    return Cove_Client_Server.exec();
}
