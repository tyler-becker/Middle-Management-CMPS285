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

cove_menu::cove_menu(QWidget *parent) : QWidget(parent), ui(new Ui::cove_menu)
{
    ui->setupUi(this);
}

cove_menu::~cove_menu()
{
    delete ui;
}


void cove_menu::on_pushButton_GeneralChat_clicked()
{
    newGeneralChatWindow = new cove_generalchat(this);
    newGeneralChatWindow->show();
}


void cove_menu::on_pushButton_PrivateChat_clicked()
{
    newPrivateChatWindow = new cove_privatechat(this);
    newPrivateChatWindow->show();
}

void cove_menu::on_pushButton_CreateChat_clicked()
{
    newCreateChatWindow = new cove_createchat(this);
    newCreateChatWindow->show();
}


void cove_menu::on_pushButton_SecureChat_clicked()
{
    newSecureChatLoginWindow = new cove_securechatlogin(this);
    newSecureChatLoginWindow->show();
}

void cove_menu::on_pushButton_Account_clicked()
{
    newAccountWindow = new cove_account(this);
    newAccountWindow->show();
}

void cove_menu::on_pushButton_LogOut_clicked()
{
    newCoveLoginWindow = new cove_login(this);
    this->hide();
}
