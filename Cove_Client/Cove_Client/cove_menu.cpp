#include "cove_account.h"
#include "ui_cove_account.h"
#include "cove_chat.h"
#include "ui_cove_chat.h"
#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_menu.h"
#include "ui_cove_menu.h"

cove_menu::cove_menu(QWidget *parent) : QWidget(parent), ui(new Ui::cove_menu)
{
    ui->setupUi(this);
}

cove_menu::~cove_menu()
{
    delete ui;
}

//displays login window
void cove_menu::on_pushButton_Back_clicked()
{
    newCoveLoginWindow = new cove_login(this);
    this->hide();
}

//displays chat window
void cove_menu::on_pushButton_GeneralChat_clicked()
{
    newCoveChatWindow = new cove_chat(this);
    newCoveChatWindow->show();
    //this->hide();
}

void cove_menu::on_pushButton_SecureChat_clicked()
{
    newCoveChatWindow = new cove_chat(this);
    newCoveChatWindow->show();
}

void cove_menu::on_pushButton_PrivateChat_clicked()
{
    newCoveChatWindow = new cove_chat(this);
    newCoveChatWindow->show();
}
