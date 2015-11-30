#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_generalchat.h"
#include "ui_cove_generalchat.h"
#include "cove_createchat.h"
#include "ui_cove_createchat.h"

#include "QString"
#include "QRegExp"
#include "QMessageBox"

cove_createchat::cove_createchat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_createchat)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->label_RoomAleardyExists->hide();
    ui->pushButton_CreateChat->setEnabled(false);
    connect(ui->lineEdit_RoomName, SIGNAL(textChanged(const QString&)), this, SLOT(enableCreateChatButton()));
    connect(ui->lineEdit_RoomPassword, SIGNAL(textChanged(const QString&)), this, SLOT(enableCreateChatButton()));
}

cove_createchat::~cove_createchat()
{
    delete ui;
}

void cove_createchat::createChat()
{
    QString roomname, roompassword;
    roomname = ui->lineEdit_RoomName->text();
    roompassword = ui->lineEdit_RoomPassword->text();

    dbConnectionOpen();
    QSqlQuery query;
    query.prepare("insert into privatechatdata(roomname, roompassword) values(:roomname, :roompassword)");
    query.bindValue(":roomname", roomname);
    query.bindValue(":roompassword", roompassword);
    query.exec();
    dbConnectionClose();

}

void cove_createchat::clearCreateChat()
{
    ui->lineEdit_RoomName->clear();
    ui->lineEdit_RoomPassword->clear();
}

void cove_createchat::enableCreateChatButton()
{
    if(validRoomName() && validRoomPassword()){
        ui->pushButton_CreateChat->setEnabled(true);
    }
    else{
        ui->pushButton_CreateChat->setEnabled(false);
    }
}

bool cove_createchat::validRoomName()
{
    QRegExp numbers("[0-9]");
    QRegExp letters("[a-zA-Z]");
    QRegExp others("\\W");
    QString RoomName = ui->lineEdit_RoomName->text();

    if(RoomName.length() < 3){
        return false;
    }
    else if(!RoomName.contains(numbers) && !RoomName.contains(letters)){
        return false;
    }
    else if(RoomName.contains(numbers) && !RoomName.contains(letters)){
        return false;
    }
    else if(RoomName.contains(others) && RoomName.contains(letters)){
        return false;
    }
    else{
        return true;
    }
}

bool cove_createchat::validRoomPassword()
{
    QRegExp numbers("[0-9]");
    QRegExp letters("[a-zA-Z]");
    QRegExp others("\\W");
    QString RoomPassword = ui->lineEdit_RoomPassword->text();

    if(RoomPassword.length() < 3){
        return false;
    }
    else if((!RoomPassword.contains(numbers) && !RoomPassword.contains(letters))){
        return false;
    }
    else if((RoomPassword.contains(numbers) && !RoomPassword.contains(letters))){
        return false;
    }
    else if((RoomPassword.contains(others) && RoomPassword.contains(letters))){
        return false;
    }
     else if(RoomPassword.isEmpty()){
        return false;
    }
    else{
        return true;
    }
}

void cove_createchat::on_pushButton_CreateChat_clicked()
{
    QString RoomName = ui->lineEdit_RoomName->text();

    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from privatechatdata where roomname = '"+RoomName+"'")){
        int count = 0;
        while(query.next()){
            count++;
        }
        if(count == 1){
            ui->label_RoomAleardyExists->show();
            ui->lineEdit_RoomName->clear();
            ui->lineEdit_RoomName->setFocus();
        }
        else{
            ui->label_RoomAleardyExists->hide();
            createChat();
            QMessageBox::information(this, tr("Cove Client"), tr("Room successfully created!"));
            newCoveMenuWindow = new cove_menu(this);
            newCoveMenuWindow->show();
            this->hide();
        }
    }
    dbConnectionClose();
}

void cove_createchat::on_pushButton_Back_clicked()
{
    newCoveMenuWindow = new cove_menu(this);
    this->hide();
}

