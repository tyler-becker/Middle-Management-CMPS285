#ifndef COVE_MENU_H
#define COVE_MENU_H

#include <QWidget>

class cove_createaccount;
class cove_generalchat;
class cove_privatechat;
class cove_securechat;
class cove_createchat;
class cove_securechatlogin;
class cove_account;
class cove_login;

namespace Ui{
  class cove_menu;
}

class cove_menu : public QWidget
{
    Q_OBJECT

public:
    explicit cove_menu(QWidget *parent = 0);
    ~cove_menu();

private slots:

    void on_pushButton_GeneralChat_clicked();
    void on_pushButton_PrivateChat_clicked();
    void on_pushButton_CreateChat_clicked();
    void on_pushButton_SecureChat_clicked();
    void on_pushButton_Account_clicked();
    void on_pushButton_LogOut_clicked();

private:
    Ui::cove_menu *ui;

    //Pointers for Menu Window Buttons.
    cove_login *newCoveLoginWindow;
    cove_generalchat *newGeneralChatWindow;
    cove_securechat *newSecureChatWindow;
    cove_privatechat *newPrivateChatWindow;
    cove_createchat *newCreateChatWindow;
    cove_securechatlogin *newSecureChatLoginWindow;
    cove_account *newAccountWindow;
};

#endif // COVE_MENU_H
