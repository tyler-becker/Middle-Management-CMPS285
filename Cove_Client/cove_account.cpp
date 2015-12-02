#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_account.h"
#include "ui_cove_account.h"

#include "QMessageBox"

cove_account::cove_account(QWidget *parent) : QDialog(parent), ui(new Ui::cove_account)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowFlags(this->windowFlags() & Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);

    ui->label_UsernameAleardyExists->hide();
    ui->pushButton_ChangeUsername->setEnabled(false);
    ui->lineEdit_ChangeUsername->setFocus();
    connect(ui->lineEdit_ChangeUsername, SIGNAL(textChanged(const QString&)), this, SLOT(enableUsernameChangeButton()));
}

cove_account::~cove_account()
{
    delete ui;
}

void cove_account::closeEvent(QCloseEvent *event)
{
    cove_menu covemenu;
    this->hide();
    covemenu.setCurrUsername(getCurrUsername());
    covemenu.exec();
    QWidget::closeEvent(event);
}

QString cove_account::getCurrUsername() const
{
    return currUsername;
}

void cove_account::setCurrUsername(const QString &value)
{
    currUsername = value;
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
            ui->label_UsernameAleardyExists->show();
            ui->lineEdit_ChangeUsername->clear();
            ui->lineEdit_ChangeUsername->setFocus();
        }
        else{
            QMessageBox::information(this, tr("Cove Client"), tr("Username successfully changed!"));
            cove_menu covemenu;
            setCurrUsername(newUsername);
            covemenu.setCurrUsername(getCurrUsername());
            this->hide();
            covemenu.exec();
        }

    }
    dbConnectionClose();
    ui->lineEdit_ChangeUsername->clear();
    ui->lineEdit_ChangeUsername->setFocus();
}

void cove_account::on_pushButton_Back_clicked()
{
    cove_menu covemenu;
    covemenu.setCurrUsername(getCurrUsername());
    this->hide();
    covemenu.exec();

    //newCoveMenuWindow = new cove_menu(this);
    //this->hide();
}
