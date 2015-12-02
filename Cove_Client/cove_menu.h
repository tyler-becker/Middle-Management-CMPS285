#ifndef COVE_MENU_H
#define COVE_MENU_H

#include <QDialog>

class cove_createaccount;
class cove_login;
class cove_generalchat;
class cove_privatechat;
class cove_securechat;
class cove_createchat;
class cove_securechatlogin;
class cove_account;


namespace Ui{
  class cove_menu;
}

class cove_menu : public QDialog
{
    Q_OBJECT

public:
    explicit cove_menu(QWidget *parent = 0);
    ~cove_menu();

    QString getCurrUsername() const;
    void setCurrUsername(const QString &value);

private slots:
    void on_pushButton_GeneralChat_clicked();
    void on_pushButton_PrivateChat_clicked();
    void on_pushButton_CreateChat_clicked();
    void on_pushButton_SecureChat_clicked();
    void on_pushButton_Account_clicked();
    void on_pushButton_LogOut_clicked();
    void closeEvent(QCloseEvent *event);

private:
    Ui::cove_menu *ui;

    QString currUsername;
    QString currRoomname;

    //Pointers for Menu Window Buttons.
    cove_login *newCoveLoginWindow;
    cove_generalchat *newGeneralChatWindow;
    cove_securechat *newSecureChatWindow;
    cove_privatechat *newPrivateChatWindow;
    cove_createchat *newCreateChatWindow;
    cove_securechatlogin *newSecureChatLoginWindow;
    //cove_account *newAccountWindow;
};

#endif // COVE_MENU_H
