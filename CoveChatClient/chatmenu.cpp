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
//#include <QTabWidget>

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
}

void ChatMenu::on_pushButton_Private_clicked()
{

   newChatClientWindow=new ChatClient(this);
   newChatClientWindow->show();
   newChatClientWindow->setWindowTitle("Private Chat");
   newChatClientWindow->ui->pushButton_Send->setStyleSheet("QPushButton{color:white;background-color: black;border-color:white;}");
   newChatClientWindow->ui->lineEdit_Message->setStyleSheet("QLineEdit{color:white;background-color: black;border-color:white;}");
   newChatClientWindow->ui->textEdit_Display->setStyleSheet("QTextEdit{color:white;background-color: black;border-color:white;}");
   newChatClientWindow->ui->listWidget_Userlist->setStyleSheet("QListWidget{color:white;background-color: black;border-color:white;}");
   QPixmap pix("/home/chrome/Qt/ChatClient/private.png");
   newChatClientWindow->ui->label_Private->setPixmap(pix);
  // newChatClientWindow->ui->tabWidget->insertTab(index, widget, "Description");

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
