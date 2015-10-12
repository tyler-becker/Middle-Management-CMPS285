#include "cove_login.h"
#include "cove_account.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //initializes and displays the Cove_Client "main" (login) window
    QApplication Cove_Client(argc, argv);
    cove_login w;
    w.show();

    return Cove_Client.exec();
}
