#ifndef COVE_PRIVATECHAT_H
#define COVE_PRIVATECHAT_H

#include <QDialog>

class cove_account;
class cove_login;
class cove_menu;

namespace Ui{
    class cove_privatechat;
}

class cove_privatechat : public QDialog
{
    Q_OBJECT

public:
    explicit cove_privatechat(QWidget *parent = 0);
    ~cove_privatechat();

private slots:
    void on_pushButton_Send_clicked();
    void displayInputMessage();
    bool eventFilter(QObject *object, QEvent *event);

private:
    Ui::cove_privatechat *ui;

    //Pointers for Private Chat Window Buttons.
};

#endif // COVE_PRIVATECHAT_H
