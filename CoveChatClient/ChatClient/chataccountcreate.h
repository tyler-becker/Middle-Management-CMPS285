#ifndef CHATACCOUNTCREATE_H
#define CHATACCOUNTCREATE_H

#include <QDialog>

class ChatClient;
class ChatLogin;
class ChatMenu;

namespace Ui {
class ChatAccountCreate;
}

class ChatAccountCreate : public QDialog
{
    Q_OBJECT

public:
    explicit ChatAccountCreate(QWidget *parent = 0);
    ~ChatAccountCreate();

private slots:
    void on_pushButton_CreateAcc_clicked();

    void on_pushButton_Cancel_clicked();

private:
    Ui::ChatAccountCreate *ui;

    ChatLogin*newChatLoginWindow;
};

#endif // CHATACCOUNTCREATE_H
