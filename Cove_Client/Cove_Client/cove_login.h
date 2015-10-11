#ifndef COVE_LOGIN_H
#define COVE_LOGIN_H

#include <QMainWindow>

class cove_account;
class cove_chat;
class cove_menu;

namespace Ui {
  class cove_login;
}

class cove_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit cove_login(QWidget *parent = 0);
    ~cove_login();

private slots:
    void on_pushButton_LogIn_clicked();

    void on_pushButton_CreateAccount_clicked();

private:
    Ui::cove_login *ui;

    //Pointers for Login Window Buttons.
    cove_menu *newCoveMenuWindow;
    cove_account *newCoveAccountWindow;
};

#endif // COVE_LOGIN_H
