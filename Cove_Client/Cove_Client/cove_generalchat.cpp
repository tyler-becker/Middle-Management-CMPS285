#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "cove_generalchat.h"
#include "ui_cove_generalchat.h"

#include "QString"
#include "QTime"
#include "QObject"
#include "QEvent"
#include "QKeyEvent"

//fix login page error checking

//get muc working

//set username display to whatever login username is

//set and change username display color

//error checking and error displaying for all windows

//create account button window

//current user LL

cove_generalchat::cove_generalchat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_generalchat)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->textEdit_ChatTypeField->installEventFilter(this);

    ui->textBrowser_ChatDisplay->append("Cove - General Chat");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    ui->textEdit_ChatTypeField->setFocus();
}

cove_generalchat::~cove_generalchat()
{
    delete ui;
}

//catches 'enter' press and redirects to display in textEdit
bool cove_generalchat::eventFilter(QObject *object, QEvent *event)
{
    if(object == ui->textEdit_ChatTypeField && event->type() == QEvent::KeyPress){
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

        switch(keyEvent->key()){
            case Qt::Key_Enter:
                displayInputMessage();
                return true;
            case Qt::Key_Return:
                displayInputMessage();
                return true;
        }
       return false;
    }
    else{
        return QObject::eventFilter(object, event);
    }
}

void cove_generalchat::on_pushButton_Send_clicked()
{
    displayInputMessage();
}

void cove_generalchat::displayInputMessage()
{
    QTime setTime = QTime::currentTime();
    QString currTime = "(" + setTime.toString("hh:mm:ss ap") + ")" + " ";
    QString currUsername = "Username";
    QString setText = ": " + ui->textEdit_ChatTypeField->toPlainText();

    //QChar currUserColor = 'blue';

    if(ui->textEdit_ChatTypeField->toPlainText().isEmpty()){
        ui->textEdit_ChatTypeField->setFocus();
        return;
    }
    else{
        //ui->textBrowser_ChatDisplay->append("(" + currTime + ")" + "<font color = 'blue'>" " " + currUsername + "<font color = 'white'>" ": " + setText);
        ui->textBrowser_ChatDisplay->append(currTime + currUsername + setText);
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
}
