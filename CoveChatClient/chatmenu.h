#ifndef CHATMENU_H
#define CHATMENU_H

#include <QDialog>

class ChatClient;
class ChatAccountCreate;
class ChatLogin;

namespace Ui {
    class ChatMenu;
}

class ChatMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ChatMenu(QWidget *parent = 0);
    ~ChatMenu();

private slots:
    void on_pushButton_MenuBack_clicked();

    void on_pushButton_Private_clicked();

    void on_pushButton_Game_clicked();

    void on_pushButton_General_clicked();

    void on_pushButton_Create_clicked();

private:
    Ui::ChatMenu *ui;

    //Menu Buttons
    ChatLogin*newChatLoginWindow;
    ChatClient*newChatClientWindow;


};


#endif // CHATMENU_H
