#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_madeaccount.h"
#include "ui_cove_madeaccount.h"

cove_madeaccount::cove_madeaccount(QWidget *parent) : QDialog(parent), ui(new Ui::cove_madeaccount)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowFlags(this->windowFlags() & Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
}

cove_madeaccount::~cove_madeaccount()
{
    delete ui;
}

void cove_madeaccount::on_pushButton_Continue_clicked()
{
    newCoveLoginWindow = new cove_login(this);
    newCoveLoginWindow->show();
}
