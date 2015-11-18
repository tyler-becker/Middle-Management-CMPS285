#include "chatmenu.h"
#include "ui_chatmenu.h"
#include "chataccountcreate.h"
#include "ui_chataccountcreate.h"
#include "chatclient.h"
#include "ui_chatclient.h"
#include "chatlogin.h"
#include "ui_chatlogin.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QString>

ChatMenu::ChatMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatMenu)
{
    ui->setupUi(this);
}

ChatMenu::~ChatMenu()
{
    delete ui;
}

void ChatMenu::on_pushButton_MenuBack_clicked()
{
    newChatLoginWindow=new ChatLogin(this);
    newChatLoginWindow->show();
    this->hide();
}

void ChatMenu::on_pushButton_Private_clicked()
{

   newChatClientWindow=new ChatClient(this);
   newChatClientWindow->show();
   newChatClientWindow->setWindowTitle("Private Chat");
}

void ChatMenu::on_pushButton_Game_clicked()
{

    newChatClientWindow=new ChatClient(this);
    newChatClientWindow->show();
    newChatClientWindow->setWindowTitle("Game Chat");
}

void ChatMenu::on_pushButton_General_clicked()
{

    newChatClientWindow=new ChatClient(this);
    newChatClientWindow->show();
    newChatClientWindow->setWindowTitle("General Chat");
}




void ChatMenu::on_pushButton_Create_clicked()
{
    newChatClientWindow=new ChatClient(this);
    newChatClientWindow->show();
}
