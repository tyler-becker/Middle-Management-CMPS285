#ifndef COVE_CHAT_H
#define COVE_CHAT_H

#include <QDialog>

class cove_account;
class cove_login;
class cove_menu;

namespace Ui {
class cove_chat;
}

class cove_chat : public QDialog
{
    Q_OBJECT

public:
    explicit cove_chat(QWidget *parent = 0);
    ~cove_chat();

private slots:
    void on_pushButton_Send_clicked();

private:
    Ui::cove_chat *ui;

    //Pointers for Cove Chat Window Buttons.

};

#endif // COVE_CHAT_H
