#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_account.h"
#include "ui_cove_account.h"

cove_account::cove_account(QWidget *parent) : QWidget(parent), ui(new Ui::cove_account)
{
    ui->setupUi(this);
}

cove_account::~cove_account()
{
    delete ui;
}

//displays login window
void cove_account::on_pushButton_CreateAccount2_clicked()
{
    newCoveLoginWindow = new cove_login(this);
    this->hide();
}

//displays login window
void cove_account::on_pushButton_Back_clicked()
{
    newCoveLoginWindow = new cove_login(this);
    this->hide();
}
