#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_login.h"
#include "ui_cove_login.h"
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
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);

    QPixmap pix("E:/School/General CMPS/Qt Projects/ChatClient/private.png");
    ui->label_PrivateImage->setPixmap(pix);

    ui->textBrowser_ChatDisplay->clear();
    ui->listWidget_UserDisplay->clear();
    ui->textEdit_ChatTypeField->installEventFilter(this);
    ui->textBrowser_ChatDisplay->setFocus();
    //ui->textBrowser_ChatDisplay->append("Cove - " + getCurrRoomname());
    //ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
    QTimer::singleShot(750, this, SLOT(showConnected()));

    socket = new QTcpSocket(this);
    socket->connectToHost("localhost", 4202);

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));

}

cove_securechat::~cove_securechat()
{
    delete ui;
}

void cove_securechat::closeEvent(QCloseEvent *event)
{
    socket->disconnectFromHost();
    cove_menu covemenu;
    covemenu.setCurrUsername(getCurrUsername());
    this->hide();
    covemenu.exec();
    QWidget::closeEvent(event);
}

void cove_securechat::showConnected()
{
    ui->textBrowser_ChatDisplay->setTextColor(Qt::white);
    ui->textEdit_ChatTypeField->setFocus();
}



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

QString cove_securechat::getCurrRoomname() const
{
    return currRoomname;
}

void cove_securechat::setCurrRoomname(const QString &value)
{
    currRoomname = value;
    ui->textBrowser_ChatDisplay->append("Cove - " + getCurrRoomname());
    ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignCenter);
}

QString cove_securechat::getCurrUsername() const
{
    return currUsername;
}

void cove_securechat::setCurrUsername(const QString &value)
{
    currUsername = value;
}

void cove_securechat::on_pushButton_Send_clicked()
{
    displayInputMessage();
}

void cove_securechat::readyRead()
{
    //QTime setTime = QTime::currentTime();
    //QString currTime = "(" + setTime.toString("hh:mm:ss ap") + ")" + "<font color = 'cyan'>" " ";

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
                ui->textBrowser_ChatDisplay->append(currTime + " <b>" "<font color = 'light green'>"  + user + "</b>: " + message);
                ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
            }
            else{
                ui->textBrowser_ChatDisplay->append(currTime + " <b>" "<font color = 'white'>"  + user + "</b>: " + message);
                ui->textBrowser_ChatDisplay->setAlignment(Qt::AlignLeft);
            }
        }
    }
}


void cove_securechat::connected()
{
    //QString username = "Barrett";
    socket->write(QString("/me:" + getCurrUsername() + "\n").toUtf8());
}

void cove_securechat::displayInputMessage()
{
    QString message = ui->textEdit_ChatTypeField->toPlainText().trimmed();
    QString text = ui->textEdit_ChatTypeField->toPlainText();

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
        ui->textBrowser_ChatDisplay->append("<font color = 'cyan'>" + currRoomname + " - " +  "Welcome to Secure Chat!");
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
