#include "cove_createaccount.h"
#include "ui_cove_createaccount.h"
#include "cove_generalchat.h"
#include "ui_cove_generalchat.h"
#include "cove_securechat.h"
#include "ui_cove_securechat.h"
#include "cove_privatechat.h"
#include "ui_cove_privatechat.h"
#include "cove_createchat.h"
#include "ui_cove_createchat.h"
#include "cove_securechatlogin.h"
#include "ui_cove_securechatlogin.h"
#include "cove_account.h"
#include "ui_cove_account.h"
#include "cove_login.h"
#include "ui_cove_login.h"
#include "cove_menu.h"
#include "ui_cove_menu.h"

cove_menu::cove_menu(QWidget *parent) : QDialog(parent), ui(new Ui::cove_menu)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    this->setWindowFlags(this->windowFlags() & Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
}

cove_menu::~cove_menu()
{
    delete ui;
}

void cove_menu::closeEvent(QCloseEvent *event)
{
    cove_login covelogin;
    this->hide();
    covelogin.exec();
    QWidget::closeEvent(event);
}

QString cove_menu::getCurrUsername() const
{
    return currUsername;
}

void cove_menu::setCurrUsername(const QString &value)
{
    currUsername = value;
}

void cove_menu::on_pushButton_GeneralChat_clicked()
{
    cove_generalchat generalchat;
    this->setModal(false);
    generalchat.setCurrUsername(getCurrUsername());
    generalchat.exec();

    //newGeneralChatWindow = new cove_generalchat(this);
    //newGeneralChatWindow->show();
}


void cove_menu::on_pushButton_PrivateChat_clicked()
{
    cove_privatechat privatechat;
    this->setModal(false);
    privatechat.setCurrUsername(getCurrUsername());
    privatechat.exec();

    //newPrivateChatWindow = new cove_privatechat(this);
    //newPrivateChatWindow->show();
}

void cove_menu::on_pushButton_CreateChat_clicked()
{
    cove_createchat createchat;
    this->hide();
    createchat.setCurrUsername(getCurrUsername());
    createchat.exec();

    //newCreateChatWindow = new cove_createchat(this);
    //newCreateChatWindow->show();
}


void cove_menu::on_pushButton_SecureChat_clicked()
{
    cove_securechatlogin securechatlogin;
    //cove_securechat securechat;
    this->hide();
    securechatlogin.setCurrUsername(getCurrUsername());
    //securechat.setCurrUsername(getCurrUsername());
    securechatlogin.exec();

    //newSecureChatLoginWindow = new cove_securechatlogin(this);
    //newSecureChatLoginWindow->show();
}

void cove_menu::on_pushButton_Account_clicked()
{
    cove_account account;
    this->hide();
    account.setCurrUsername(getCurrUsername());
    account.exec();

   //newAccountWindow = new cove_account(this);
   //newAccountWindow->show();
}

void cove_menu::on_pushButton_LogOut_clicked()
{
    cove_login covelogin;
    this->close();
    covelogin.exec();
    //newCoveLoginWindow = new cove_login(this);
    //this->hide();
}
