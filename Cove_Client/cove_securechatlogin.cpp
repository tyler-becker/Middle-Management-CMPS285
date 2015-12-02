#include "cove_securechat.h"
#include "ui_cove_securechat.h"
#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_securechatlogin.h"
#include "ui_cove_securechatlogin.h"

#include "QString"
#include "QEvent"
#include "QKeyEvent"
//#include "QTcpSocket"

cove_securechatlogin::cove_securechatlogin(QWidget *parent) : QDialog(parent), ui(new Ui::cove_securechatlogin)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowFlags(this->windowFlags() & Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);

    ui->label_invalidRoomUsername->hide();
    ui->label_invalidRoomPassword->hide();
    ui->pushButton_EnterRoom->setEnabled(false);
    connect(ui->lineEdit_RoomName, SIGNAL(textChanged(const QString&)), this, SLOT(enableEnterRoomButton()));
    connect(ui->lineEdit_RoomPassword, SIGNAL(textChanged(const QString&)), this, SLOT(enableEnterRoomButton()));

    //socket->disconnectFromHost();
}

cove_securechatlogin::~cove_securechatlogin()
{
    delete ui;
}

void cove_securechatlogin::closeEvent(QCloseEvent *event)
{
    //socket->disconnectFromHost();
    cove_menu covemenu;
    this->hide();
    covemenu.setCurrUsername(getCurrUsername());
    covemenu.exec();
    QWidget::closeEvent(event);
}

void cove_securechatlogin::clearRoomEnter()
{
    ui->lineEdit_RoomName->clear();
    ui->lineEdit_RoomPassword->clear();
}

void cove_securechatlogin::on_pushButton_EnterRoom_clicked()
{
    enter();
}

QString cove_securechatlogin::getCurrRoomname() const
{
    return currRoomname;
}

void cove_securechatlogin::setCurrRoomname(const QString &value)
{
    currRoomname = value;
}

QString cove_securechatlogin::getCurrUsername() const
{
    return currUsername;
}

void cove_securechatlogin::setCurrUsername(const QString &value)
{
    currUsername = value;
}

void cove_securechatlogin::enter()
{
    QString currRoomname = ui->lineEdit_RoomName->text();

    if(validRoomNameAndRoomPassword()){
        cove_securechat securechat;
        securechat.setCurrRoomname(currRoomname);
        securechat.setCurrUsername(getCurrUsername());
        this->hide();
        securechat.exec();

        //newSecureChatWindow = new cove_securechat(this);
        //newSecureChatWindow->show();
        //this->hide();
    }
    else{
        ui->label_invalidRoomPassword->show();
        ui->lineEdit_RoomPassword->clear();
        return;
    }
    clearRoomEnter();
    ui->label_invalidRoomPassword->hide();
}

void cove_securechatlogin::enableEnterRoomButton()
{
    if(!ui->lineEdit_RoomPassword->text().isEmpty()){
        ui->pushButton_EnterRoom->setEnabled(true);
    }
    else if(validRoomNameAndRoomPassword()){
        ui->pushButton_EnterRoom->setEnabled(true);
    }
    else{
        ui->pushButton_EnterRoom->setEnabled(false);
    }
}

bool cove_securechatlogin::validRoomNameAndRoomPassword()
{
    QString inputRoomName = ui->lineEdit_RoomName->text();
    QString inputRoomPassword = ui->lineEdit_RoomPassword->text();

    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from privatechatdata where roomname = '"+inputRoomName+"' and roompassword = '"+inputRoomPassword+"'")){
        int count = 0;
        while(query.next()){
            count++;
        }
        if(count == 1){
            return true;
        }
        else{
            return false;
        }
    }
    dbConnectionClose();
}

void cove_securechatlogin::on_pushButton_Back_clicked()
{
    cove_menu covemenu;
    covemenu.setCurrUsername(getCurrUsername());
    this->hide();
    covemenu.exec();

    //newCoveMenuWindow = new cove_menu(this);
    //this->hide();
}
