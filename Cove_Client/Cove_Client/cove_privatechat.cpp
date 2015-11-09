#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "cove_privatechat.h"
#include "ui_cove_privatechat.h"

#include "QString"
#include "QTime"
#include "QObject"
#include "QEvent"
#include "QKeyEvent"

cove_privatechat::cove_privatechat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_privatechat)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->textEdit_ChatTypeField->installEventFilter(this);

    ui->textBrowser_ChatDisplay->append("Cove - Private Chat");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    ui->textEdit_ChatTypeField->setFocus();
}

cove_privatechat::~cove_privatechat()
{
    delete ui;
}

bool cove_privatechat::eventFilter(QObject *object, QEvent *event)
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

void cove_privatechat::on_pushButton_Send_clicked()
{
    displayInputMessage();
}

void cove_privatechat::displayInputMessage()
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
