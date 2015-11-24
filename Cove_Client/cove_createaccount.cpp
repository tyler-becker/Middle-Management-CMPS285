#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_madeaccount.h"
#include "ui_cove_madeaccount.h"
#include "cove_createaccount.h"
#include "ui_cove_createaccount.h"

#include "QString"
#include "QRegExp"
#include "QMessageBox"

cove_createaccount::cove_createaccount(QWidget *parent) : QWidget(parent), ui(new Ui::cove_createaccount)
{
    ui->setupUi(this);
    ui->pushButton_CreateAccount->setEnabled(false);
    ui->label_UsernameAleardyExists->hide();
    ui->lineEdit_Username->setFocus();
    connect(ui->lineEdit_Username, SIGNAL(textChanged(const QString&)), this, SLOT(enableCreateAccountButton()));
    connect(ui->lineEdit_Password, SIGNAL(textChanged(const QString&)), this, SLOT(enableCreateAccountButton()));
    connect(ui->lineEdit_ConfirmPassword, SIGNAL(textChanged(const QString&)), this, SLOT(enableCreateAccountButton()));
}

cove_createaccount::~cove_createaccount()
{
    delete ui;
}

void cove_createaccount::createAccount()
{
    QString username, password;
    username = ui->lineEdit_Username->text();
    password = ui->lineEdit_Password->text();

    dbConnectionOpen();
    QSqlQuery query;
    query.prepare("insert into userdata(username, password) values(:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.exec();
    dbConnectionClose();
 }

void cove_createaccount::enableCreateAccountButton()
{
    if(validUsername() && validPassword()){
        ui->pushButton_CreateAccount->setEnabled(true);
    }
    else{
        ui->pushButton_CreateAccount->setEnabled(false);
    }
}

bool cove_createaccount::validUsername()
{
    QRegExp numbers("[0-9]");
    QRegExp letters("[a-zA-Z]");
    QRegExp others("\\W");

    //********************
    //QString Username = "";
    //********************

    QString Username = ui->lineEdit_Username->text();

    if(Username.length() < 3){
        return false;
    }
    else if(!Username.contains(numbers) && !Username.contains(letters)){
        return false;
    }
    else if(Username.contains(numbers) && !Username.contains(letters)){
        return false;
    }
    else if(Username.contains(others) && Username.contains(letters)){
        return false;
    }
    else{
        return true;
    }
}

bool cove_createaccount::validPassword()
{
    QRegExp numbers("[0-9]");
    QRegExp letters("[a-zA-Z]");
    QRegExp others("\\W");

    QString Password = ui->lineEdit_Password->text();
    QString conPassword = ui->lineEdit_ConfirmPassword->text();

    if(Password.length() < 3 || conPassword.length() < 3){
        return false;
    }
    else if((!Password.contains(numbers) && !Password.contains(letters)) || (!conPassword.contains(numbers) && !conPassword.contains(letters))){
        return false;
    }
    else if((Password.contains(numbers) && !Password.contains(letters)) || (conPassword.contains(numbers) && !conPassword.contains(letters))){
        return false;
    }
    else if((Password.contains(others) && Password.contains(letters)) || (conPassword.contains(others) && conPassword.contains(letters))){
        return false;
    }
     else if(Password.isEmpty() || conPassword.isEmpty()){
        return false;
    }
    else if(Password != conPassword){
        return false;
    }
    else{
        return true;
    }
}

void cove_createaccount::on_pushButton_CreateAccount_clicked()
{
    QString Username = ui->lineEdit_Username->text();

    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from userdata where username = '"+Username+"'")){
        int count = 0;
        while(query.next()){
            count++;
        }
        if(count == 1){
            ui->label_UsernameAleardyExists->show();
            ui->lineEdit_Username->clear();
            ui->lineEdit_Username->setFocus();
        }
        else{
            ui->label_UsernameAleardyExists->hide();
            createAccount();
            QMessageBox::information(this, tr("Cove Client"), tr("Account successfully created!"));
            //newCoveMadeAccountWindow = new cove_madeaccount(this);
            //newCoveMadeAccountWindow->show();
            this->hide();
        }

    }
    dbConnectionClose();
}

void cove_createaccount::on_pushButton_Cancel_clicked()
{
    newCoveLoginWindow = new cove_login(this);
    this->hide();
}
