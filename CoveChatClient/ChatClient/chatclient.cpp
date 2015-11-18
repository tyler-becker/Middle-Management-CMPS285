#include "chatclient.h"
#include "ui_chatclient.h"
#include "chatmenu.h"
#include "ui_chatmenu.h"
#include <QString>
#include <QDateTime>



ChatClient::ChatClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatClient)
{
    ui->setupUi(this);

        ui->lineEdit_Message->setFocusPolicy(Qt::StrongFocus);
        ui->textEdit_Display->setFocusPolicy(Qt::NoFocus);
        ui->textEdit_Display->setReadOnly(true);
}

ChatClient::~ChatClient()
{
    delete ui;
}



void ChatClient::on_pushButton_Send_clicked()
{
    QTime times = (QTime::currentTime());
    QString currentTime=times.toString("h:mm:ss:ap");

    QString text = ui-> lineEdit_Message->text();
         if (ui->lineEdit_Message->text().isEmpty()){
             return;

             ui->pushButton_Send->setEnabled(false);

         }else{
             ui->pushButton_Send->setEnabled(true);
             ui->textEdit_Display->append(QString(currentTime+" <<Username") + QString(">>") + QString(" "+text));
             ui->lineEdit_Message->clear();
    }
}
