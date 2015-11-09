#ifndef COVE_MENU_H
#define COVE_MENU_H

#include <QWidget>

class cove_account;
class cove_generalchat;
class cove_securechat;
class cove_privatechat;
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
    void on_pushButton_Back_clicked();
    void on_pushButton_GeneralChat_clicked();
    void on_pushButton_SecureChat_clicked();
    void on_pushButton_PrivateChat_clicked();

private:
    Ui::cove_menu *ui;

    //Pointers for Menu Window Buttons.
    cove_login *newCoveLoginWindow;
    cove_generalchat *newGeneralChatWindow;
    cove_securechat *newSecureChatWindow;
    cove_privatechat *newPrivateChatWindow;

};

#endif // COVE_MENU_H
