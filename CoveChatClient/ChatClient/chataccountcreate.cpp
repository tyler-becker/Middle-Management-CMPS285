#include "chataccountcreate.h"
#include "ui_chataccountcreate.h"
#include "chatmenu.h"
#include "ui_chatmenu.h"
#include "chatlogin.h"
#include "ui_chatlogin.h"

ChatAccountCreate::ChatAccountCreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatAccountCreate)
{
    ui->setupUi(this);
}

ChatAccountCreate::~ChatAccountCreate()
{
    delete ui;
}

void ChatAccountCreate::on_pushButton_CreateAcc_clicked()
{

}

void ChatAccountCreate::on_pushButton_Cancel_clicked()
{
    newChatLoginWindow= new ChatLogin(this);
    this->close();
}
