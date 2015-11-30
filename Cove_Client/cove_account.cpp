#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_account.h"
#include "ui_cove_account.h"

#include "QMessageBox"

cove_account::cove_account(QWidget *parent) : QDialog(parent), ui(new Ui::cove_account)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->pushButton_ChangeUsername->setEnabled(false);
    ui->pushButton_ChangePassword->setEnabled(false);
    connect(ui->lineEdit_ChangeUsername, SIGNAL(textChanged(const QString&)), this, SLOT(enableUsernameChangeButton()));
    connect(ui->lineEdit_ChangePassword, SIGNAL(textChanged(const QString&)), this, SLOT(enablePasswordChangeButton()));
}

cove_account::~cove_account()
{
    delete ui;
}

bool cove_account::validNewUsername()
{
    QRegExp numbers("[0-9]");
    QRegExp letters("[a-zA-Z]");
    QRegExp others("\\W");
    QString newUsername = ui->lineEdit_ChangeUsername->text();

    if(newUsername.length() < 3){
        return false;
    }
    else if(!newUsername.contains(numbers) && !newUsername.contains(letters)){
        return false;
    }
    else if(newUsername.contains(numbers) && !newUsername.contains(letters)){
        return false;
    }
    else if(newUsername.contains(others) && newUsername.contains(letters)){
        return false;
    }
    else{
        return true;
    }
}

void cove_account::enableUsernameChangeButton()
{
    if(validNewUsername()){
        ui->pushButton_ChangeUsername->setEnabled(true);
    }
    else{
        ui->pushButton_ChangeUsername->setEnabled(false);
    }
}

void cove_account::on_pushButton_ChangeUsername_clicked()
{
    QString newUsername = ui->lineEdit_ChangeUsername->text();

    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from userdata where username = '"+newUsername+"'")){
        int count = 0;
        while(query.next()){
            count++;
        }
        if(count == 1){

        }
        else{
            QMessageBox::information(this, tr("Cove Client"), tr("Username successfully changed!"));
        }

    }
    dbConnectionClose();
    ui->lineEdit_ChangeUsername->clear();
    ui->lineEdit_ChangeUsername->setFocus();
}

bool cove_account::validNewPassword()
{
    QRegExp numbers("[0-9]");
    QRegExp letters("[a-zA-Z]");
    QRegExp others("\\W");
    QString newPassword = ui->lineEdit_ChangePassword->text();

    if(newPassword.length() < 3){
        return false;
    }
    else if(!newPassword.contains(numbers) && !newPassword.contains(letters)){
        return false;
    }
    else if(newPassword.contains(numbers) && !newPassword.contains(letters)){
        return false;
    }
    else if(newPassword.contains(others) && newPassword.contains(letters)){
        return false;
    }
    else{
        return true;
    }
}

void cove_account::enablePasswordChangeButton()
{
    if(validNewPassword()){
        ui->pushButton_ChangePassword->setEnabled(true);
    }
    else{
        ui->pushButton_ChangePassword->setEnabled(false);
    }
}

void cove_account::on_pushButton_ChangePassword_clicked()
{
    QString newPassword = ui->lineEdit_ChangePassword->text();

    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from userdata where password = '"+newPassword+"'")){
        int count = 0;
        while(query.next()){
            count++;
        }
        if(count == 1){

        }
        else{
            QMessageBox::information(this, tr("Cove Client"), tr("Password successfully changed!"));
        }

    }
    dbConnectionClose();
    ui->lineEdit_ChangePassword->clear();
    ui->lineEdit_ChangePassword->setFocus();
}
void cove_account::on_pushButton_Back_clicked()
{
    newCoveMenuWindow = new cove_menu(this);
    this->hide();
}
