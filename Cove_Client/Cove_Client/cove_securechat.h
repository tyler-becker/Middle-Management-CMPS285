#ifndef COVE_SECURECHAT_H
#define COVE_SECURECHAT_H

#include <QDialog>

class cove_account;
class cove_login;
class cove_menu;

namespace Ui {
    class cove_securechat;
}

class cove_securechat : public QDialog
{
    Q_OBJECT

public:
    explicit cove_securechat(QWidget *parent = 0);
    ~cove_securechat();

private slots:
    void on_pushButton_Send_clicked();
    void displayInputMessage();
    bool eventFilter(QObject *object, QEvent *event);


private:
    Ui::cove_securechat *ui;

    //Pointers for Secure Chat Window Buttons.
};

#endif // COVE_SECURECHAT_H
