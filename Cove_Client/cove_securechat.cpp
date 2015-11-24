#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "cove_securechat.h"
#include "ui_cove_securechat.h"

#include "QString"
#include "QTime"
#include "QTimer"
#include "QObject"
#include "QEvent"
#include "QKeyEvent"

cove_securechat::cove_securechat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_securechat)
{
    ui->setupUi(this);

    QPixmap pix("E:/School/General CMPS/Qt Projects/ChatClient/private.png");
    ui->label_PrivateImage->setPixmap(pix);

    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->textBrowser_ChatDisplay->clear();
    //ui->listWidget_UserDisplay->clear();
    ui->textEdit_ChatTypeField->installEventFilter(this);
    ui->textBrowser_ChatDisplay->setFocus();
    ui->textBrowser_ChatDisplay->append("Cove - Secure Chat");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    //ui->listWidget_UserDisplay->setAlignment(Qt::AlignCenter);



    QTimer::singleShot(750, this, SLOT(showConnected()));


    ui->textBrowser_ChatDisplay->setTextColor(Qt::white);
    ui->listWidget_UserDisplay->addItem("bot");

    //QList<QListWidgetItem *> items = ui->listWidget_UserDisplay->findItems(nick, Qt::MatchExactly);
}

cove_securechat::~cove_securechat()
{
    delete ui;
}

bool cove_securechat::showConnected()
{
    ui->textBrowser_ChatDisplay->setTextColor(Qt::gray);
    ui->textBrowser_ChatDisplay->append(" * Username has joined!");
    ui->textBrowser_ChatDisplay->setTextColor(Qt::white);
    ui->listWidget_UserDisplay->addItem("Username");
    ui->textEdit_ChatTypeField->setFocus();
    return true;
}

//catches 'enter' press and redirects to display in textEdit
bool cove_securechat::eventFilter(QObject *object, QEvent *event)
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

void cove_securechat::on_pushButton_Send_clicked()
{
    displayInputMessage();
}

void cove_securechat::displayInputMessage()
{
    QTime setTime = QTime::currentTime();
    QString currTime = "(" + setTime.toString("hh:mm:ss ap") + ")" + "<font color = 'red'>" " ";
    QString currUsername =  "Username";
    QString setText = "<font color = 'white'>" ": " + ui->textEdit_ChatTypeField->toPlainText();

    QString text = ui->textEdit_ChatTypeField->toPlainText();

    if(ui->textEdit_ChatTypeField->toPlainText().isEmpty()){
        ui->textEdit_ChatTypeField->setFocus();
        return;
    }

    //QListWidgetItem* item = ui.debugList->takeItem(1);
    //delete item;

    else if(text == "/kick bot" && ui->listWidget_UserDisplay->count() > 2){
         ui->textBrowser_ChatDisplay->append("bot kicked!");
         ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
         QListWidgetItem* item = ui->listWidget_UserDisplay->takeItem(1);
         ui->listWidget_UserDisplay->removeItemWidget(item);
         delete item;
         ui->textEdit_ChatTypeField->clear();
         ui->textEdit_ChatTypeField->setFocus();
         //textEdit->setTextColor(color);
    }
    else if(text == "/daily message" && ui->listWidget_UserDisplay->count() > 2){
        ui->textBrowser_ChatDisplay->append(currTime  + "<font color = 'white'>" "bot" + "<font color = 'white'>" ": " + "hello!");
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
    else{
        //ui->textBrowser_ChatDisplay->append("(" + currTime + ")" + "<font color = 'blue'>" " " + currUsername + "<font color = 'white'>" ": " + setText);
        ui->textBrowser_ChatDisplay->append(currTime + currUsername + setText);
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
}


