#include "cove_generalchat.h"
#include "ui_cove_generalchat.h"
#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_createaccount.h"
#include "ui_cove_createaccount.h"
#include "cove_login.h"
#include "ui_cove_login.h"

#include "QPixmap"
#include "QString"
#include "QEvent"
#include "QKeyEvent"

cove_login::cove_login(QWidget *parent) : QDialog(parent), ui(new Ui::cove_login)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowFlags(this->windowFlags() & Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);

    ui->lineEdit_Username->installEventFilter(this);
    ui->lineEdit_Password->installEventFilter(this);
    ui->label_InvalidUsername->hide();
    ui->label_InvalidPassword->hide();

    QPixmap pix("E:/School/General CMPS/Qt Projects/Cove_Client/SmallDino.PNG");
    ui->label_LoginLogo->setPixmap(pix);

    ui->pushButton_LogIn->setEnabled(false);
    connect(ui->lineEdit_Username, SIGNAL(textChanged(const QString&)), this, SLOT(enableLoginButton()));
    connect(ui->lineEdit_Password, SIGNAL(textChanged(const QString&)), this, SLOT(enableLoginButton()));
}

cove_login::~cove_login()
{
    delete ui;
}

void cove_login::closeEvent(QCloseEvent *event)
{
    this->close();
    QWidget::closeEvent(event);
}

bool cove_login::eventFilter(QObject *object, QEvent *event)
{
    if((object == ui->lineEdit_Username || object == ui->lineEdit_Password) && event->type() == QEvent::KeyPress){
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

        if(!ui->lineEdit_Username->text().isEmpty() && !ui->lineEdit_Password->text().isEmpty()){
            switch(keyEvent->key()){
                case Qt::Key_Enter:
                    login();
                    return true;
                case Qt::Key_Return:
                    login();
                    return true;
            }
        }
       return false;
    }
    else{
        return QObject::eventFilter(object, event);
    }
}

void cove_login::on_pushButton_LogIn_clicked()
{
    login();
}

void cove_login::on_pushButton_CreateAccount_clicked()
{
    cove_createaccount createaccount;
    this->hide();
    createaccount.exec();
    //clearLogin();
    //newCoveAccountWindow = new cove_createaccount(this);
    //newCoveAccountWindow->show();

    //ui->label_InvalidPassword->hide();
}

void cove_login::login()
{
    QString Username = ui->lineEdit_Username->text();

    if(validUsernameAndPassword()){
        cove_menu covemenu;
        covemenu.setCurrUsername(Username);
        this->hide();
        covemenu.exec();

        //cove_generalchat covegeneralchat;
        //covegeneralchat.setCurrUsername(Username);
        //this->hide();
        //covegeneralchat.exec();

        //newCoveMenuWindow = new cove_menu(this);
        //newCoveMenuWindow->show();
    }
    else{
        ui->label_InvalidPassword->show();
        ui->lineEdit_Password->clear();
        ui->lineEdit_Password->setFocus();
        return;
    }
    clearLogin();
    ui->label_InvalidPassword->hide();
}

void cove_login::clearLogin()
{
    ui->lineEdit_Username->clear();
    ui->lineEdit_Password->clear();
}

void cove_login::enableLoginButton()
{

    if(!ui->lineEdit_Password->text().isEmpty()){
        ui->pushButton_LogIn->setEnabled(true);
    }
    else if(validUsernameAndPassword()){
        ui->pushButton_LogIn->setEnabled(true);
    }
    else{
        ui->pushButton_LogIn->setEnabled(false);
    }
}

bool cove_login::validUsernameAndPassword()
{
    QString inputUsername = ui->lineEdit_Username->text();
    QString inputPassword = ui->lineEdit_Password->text();


    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from userdata where username = '"+inputUsername+"' and password = '"+inputPassword+"'")){
        int count = 0;
        while(query.next()){
            count++;
        }
        if(count == 1){
            //setUsername(inputUsername);
            return true;
        }
        else{
            return false;
        }
    }
    dbConnectionClose();
    return 0;
}

QString cove_login::getUsername() const
{
    return Username;
}

void cove_login::setUsername(const QString &value)
{
    Username = value;
}

