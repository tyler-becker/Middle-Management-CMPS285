#ifndef COVE_GENERALCHAT_H
#define COVE_GENERALCHAT_H

#include <QDialog>

class cove_account;
class cove_login;
class cove_menu;

namespace Ui{
    class cove_generalchat;
}

class cove_generalchat : public QDialog
{
    Q_OBJECT

public:
    explicit cove_generalchat(QWidget *parent = 0);
    ~cove_generalchat();

private slots:
    void on_pushButton_Send_clicked();
    void displayInputMessage();
    bool eventFilter(QObject *object, QEvent *event);

private:
    Ui::cove_generalchat *ui;

    //Pointers for General Chat Window Buttons.
};

#endif // COVE_GENERALCHAT_H
