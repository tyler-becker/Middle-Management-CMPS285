#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_chat.h"
#include "ui_cove_chat.h"

cove_chat::cove_chat(QWidget *parent) : QDialog(parent), ui(new Ui::cove_chat)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

cove_chat::~cove_chat()
{
    delete ui;
}

//creates chat messages in chat window
void cove_chat::on_pushButton_Send_clicked()
{
    QString text=ui->lineEdit_ChatTypeField->text();
    ui->listWidget_ChatDisplay->addItem(QString("Username") + QString("@example.com") + QString(" >> ") + QString(text));

    ui->lineEdit_ChatTypeField->clear();
}
