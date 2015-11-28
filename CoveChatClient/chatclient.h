#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <QMainWindow>

class ChatMenu;
class ChatClient;


namespace Ui {
class ChatClient;
}

class ChatClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatClient(QWidget *parent = 0);
    ~ChatClient();

private slots:
    void on_pushButton_Send_clicked();

public:
    Ui::ChatClient *ui;



};

#endif // CHATCLIENT_H
