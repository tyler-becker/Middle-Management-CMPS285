#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_generalchat.h"
#include "ui_cove_generalchat.h"

#include "QString"
#include "QTime"
#include "QTimer"
#include "QObject"
#include "QEvent"
#include "QKeyEvent"
#include "functional"
#include "mutex"

cove_generalchat::cove_generalchat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_generalchat), m_dialog()
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    ui->textBrowser_ChatDisplay->clear();
    ui->textEdit_ChatTypeField->installEventFilter(this);
    ui->textBrowser_ChatDisplay->setFocus();
    ui->textBrowser_ChatDisplay->append("Cove - General Chat");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    ui->textBrowser_ChatDisplay->append("Type </commands> for a list of commands!");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);

    QTimer::singleShot(750, this, SLOT(showConnected()));

    ui->textBrowser_ChatDisplay->setTextColor(Qt::white);
    ui->listWidget_UserDisplay->addItem("bot");
}

cove_generalchat::~cove_generalchat()
{
    delete ui;
}

void cove_generalchat::showConnected()
{
    ui->textBrowser_ChatDisplay->setTextColor(Qt::gray);
    ui->textBrowser_ChatDisplay->append(" * Username has joined!");
    ui->textBrowser_ChatDisplay->setTextColor(Qt::white);
    ui->listWidget_UserDisplay->addItem("Username");
    //ui->listWidget_UserDisplay->addItem(Username);

    //connect(m_dialog.data(),SIGNAL(this),this,SLOT(UsernameDisplay()));

    ui->textEdit_ChatTypeField->setFocus();
}

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

QString cove_generalchat::UsernameDisplay()
{
    //currUsername passed in
    Username = m_dialog->getUsername();
}

void cove_generalchat::displayInputMessage()
{
    Username = "Username";

    QTime setTime = QTime::currentTime();
    QString currTime = "(" + setTime.toString("hh:mm:ss ap") + ")" + "<font color = 'cyan'>" " ";
    QString setText = "<font color = 'white'>" ": " + ui->textEdit_ChatTypeField->toPlainText();

    QString text = ui->textEdit_ChatTypeField->toPlainText();

    QColor color;
            //= white, red, green, blue, cyan, magenta, yellow, gray;

    //QString Username =  "Username";

    /*
    dbConnectionOpen();
    QSqlQuery query;
    if(query.exec("select * from userdata where username = '"+Username+"'")){
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
    */

    if(ui->textEdit_ChatTypeField->toPlainText().isEmpty()){
        ui->textEdit_ChatTypeField->setFocus();
        return;
    }
    else if(text == "/commands"){
        ui->textBrowser_ChatDisplay->append("/color <color>, changes username color.");
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textBrowser_ChatDisplay->append("/daily message, displays room's daily message.");
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textBrowser_ChatDisplay->append("/kick <username>, kicks username entered.");
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
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
    else if(text == "/color"){
        ui->textBrowser_ChatDisplay->setTextColor(color);
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
    else{
        //ui->textBrowser_ChatDisplay->append("(" + currTime + ")" + "<font color = 'blue'>" " " + Username + "<font color = 'white'>" ": " + setText);
        ui->textBrowser_ChatDisplay->append(currTime + Username + setText);
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
}
