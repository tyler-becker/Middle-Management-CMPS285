#include "cove_securechat.h"
#include "ui_cove_securechat.h"
#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_securechatlogin.h"
#include "ui_cove_securechatlogin.h"

#include "QString"
#include "QEvent"
#include "QKeyEvent"
#include "QDebug"

cove_securechatlogin::cove_securechatlogin(QWidget *parent) : QDialog(parent), ui(new Ui::cove_securechatlogin)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->label_invalidRoomUsername->hide();
    ui->label_invalidRoomPassword->hide();
    ui->pushButton_EnterRoom->setEnabled(false);
    connect(ui->lineEdit_RoomName, SIGNAL(textChanged(const QString&)), this, SLOT(enableEnterRoomButton()));
    connect(ui->lineEdit_RoomPassword, SIGNAL(textChanged(const QString&)), this, SLOT(enableEnterRoomButton()));
}

cove_securechatlogin::~cove_securechatlogin()
{
    delete ui;
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
void cove_securechatlogin::enter()
{
    if(validRoomNameAndRoomPassword()){
        newSecureChatWindow = new cove_securechat(this);
        newSecureChatWindow->show();
        this->hide();
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
    newCoveMenuWindow = new cove_menu(this);
    this->hide();
}
