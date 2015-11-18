#ifndef CHATLOGIN_H
#define CHATLOGIN_H

#include <QMainWindow>
//#include <QtSql>
#include <QtDebug>
//#include <QFileInfo>
#include "chataccountcreate.h"

class ChatClient;
class ChatMenu;
class ChatAccountCreate;

namespace Ui{
    class ChatLogin;
}

class ChatLogin : public QMainWindow
{
    Q_OBJECT
/*
public:
    void connClose();
    bool connOpen();
*/

public:
    explicit ChatLogin(QWidget *parent = 0);
    ~ChatLogin();

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_CreateAccount_clicked();

private:
    Ui::ChatLogin *ui;
    //Login window buttons

    ChatMenu*newChatMenuWindow;
    ChatAccountCreate*newChatAccountCreate;

    //QSqlDatabase userdb;


};

#endif // CHATLOGIN_H
