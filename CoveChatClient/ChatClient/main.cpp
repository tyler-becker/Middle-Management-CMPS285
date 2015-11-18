#include "chatlogin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChatLogin w;
    w.show();

    return a.exec();
}
