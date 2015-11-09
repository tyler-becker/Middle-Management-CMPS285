#ifndef COVE_ACCOUNT_H
#define COVE_ACCOUNT_H

#include <QWidget>

class cove_login;
class cove_menu;

namespace Ui{
  class cove_account;
}

class cove_account : public QWidget
{
    Q_OBJECT

public:
    explicit cove_account(QWidget *parent = 0);
    ~cove_account();

private slots:
    void on_pushButton_CreateAccount2_clicked();

    void on_pushButton_Back_clicked();

private:
    Ui::cove_account *ui;

    //Pointers for Account Create Window Buttons.
    cove_login *newCoveLoginWindow;
};

#endif // COVE_ACCOUNT_H
