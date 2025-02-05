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
#include "QRegExp"
#include "QTcpSocket"

cove_generalchat::cove_generalchat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_generalchat)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);

    ui->textBrowser_ChatDisplay->clear();
    ui->listWidget_UserDisplay->clear();
    ui->textEdit_ChatTypeField->installEventFilter(this);
    ui->textBrowser_ChatDisplay->setFocus();
    ui->textBrowser_ChatDisplay->append("Cove - General Chat");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    //ui->textBrowser_ChatDisplay->append("Type </commands> for a list of commands!");
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    QTimer::singleShot(750, this, SLOT(showConnected()));

    socket = new QTcpSocket(this);
    socket->connectToHost("localhost", 4200);

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
}

cove_generalchat::~cove_generalchat()
{
    delete ui;
}
void cove_generalchat::closeEvent(QCloseEvent *event)
{
    socket->disconnectFromHost();
    cove_menu covemenu;
    covemenu.setCurrUsername(getCurrUsername());
    covemenu.show();
    QWidget::closeEvent(event);
}


void cove_generalchat::showConnected()
{
    ui->textBrowser_ChatDisplay->setTextColor(Qt::white);
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

QString cove_generalchat::getCurrUsername() const
{
    return currUsername;
}

void cove_generalchat::setCurrUsername(const QString &value)
{
    currUsername = value;
}

void cove_generalchat::on_pushButton_Send_clicked()
{
    displayInputMessage();
}

void cove_generalchat::readyRead()
{
    QTime setTime = QTime::currentTime();
    QString currTime = "(" + setTime.toString("hh:mm:ss ap") + ")";

    while(socket->canReadLine())
    {
        //QString username = "Barrett";
        QString line = QString::fromUtf8(socket->readLine()).trimmed();
        QRegExp messageRegex("^([^:]+):(.*)$");
        QRegExp usersRegex("^/users:(.*)$");

        if(usersRegex.indexIn(line) != -1)
        {
            QStringList users = usersRegex.cap(1).split(",");
            ui->listWidget_UserDisplay->clear();
            ui->listWidget_UserDisplay->addItem("Current User List");
            ui->textBrowser_ChatDisplay->append("Type </commands> for a list of commands!");
            foreach(QString user, users)
                new QListWidgetItem(user, ui->listWidget_UserDisplay);
        }
        else if(messageRegex.indexIn(line) != -1)
        {
            //"<font color = 'cyan'>"
            QString user = messageRegex.cap(1);
            QString message = messageRegex.cap(2);

            if(user == "Server"){
                ui->textBrowser_ChatDisplay->append( "<b>" "<font color = 'cyan'>" + user + "</b>: " +  "<font color = 'white'>"+  message);
                ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
            }
            else if(user == currUsername){
                ui->textBrowser_ChatDisplay->append(currTime + " <b>" "<font color = 'yellow'>"  + user + "</b>: " + message);
                ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
            }
            else{
                ui->textBrowser_ChatDisplay->append(currTime + " <b>" "<font color = 'white'>"  + user + "</b>: " + message);
                ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
            }
        }
    }
}

void cove_generalchat::connected()
{
    //QString username = "Barrett";
    socket->write(QString("/me:" + getCurrUsername() + "\n").toUtf8());
}

void cove_generalchat::displayInputMessage()
{
    QString message = ui->textEdit_ChatTypeField->toPlainText().trimmed();
    QString text = ui->textEdit_ChatTypeField->toPlainText();
    QString chatName = "General Chat";


    if(ui->textEdit_ChatTypeField->toPlainText().isEmpty()){
        ui->textEdit_ChatTypeField->setFocus();
        return;
    }
    else if(text == "/commands"){
        ui->textBrowser_ChatDisplay->append("/daily message, displays the room's daily message");
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
    else if(text == "/daily message"){
        ui->textBrowser_ChatDisplay->append("<font color = 'cyan'>" + chatName + " - " +  "Welcome to General Chat!");
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
    else{
        //ui->textBrowser_ChatDisplay->append("(" + currTime + ")" + "<font color = 'blue'>" " " + Username + "<font color = 'white'>" ": " + setText);
        //ui->textBrowser_ChatDisplay->append(currTime + Username + setText);
        socket->write(QString(message +"\n").toUtf8());
        ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
        ui->textEdit_ChatTypeField->clear();
        ui->textEdit_ChatTypeField->setFocus();
    }
}
