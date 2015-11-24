#ifndef COVE_CREATECHAT_H
#define COVE_CREATECHAT_H

#include <QDialog>
#include "QtSql"

class cove_menu;

namespace Ui{
    class cove_createchat;
}

class cove_createchat : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    bool dbConnectionOpen()
    {
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("E:/School/General CMPS/SQLite/cove.db");

        if(!mydb.open()){
            return false;
        }
        else{
            return true;
        }
    }

    void dbConnectionClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

public:
    explicit cove_createchat(QWidget *parent = 0);
    ~cove_createchat();

private slots:
    void createChat();
    void enableCreateChatButton();
    void clearCreateChat();
    bool validRoomName();
    bool validRoomPassword();
    void on_pushButton_CreateChat_clicked();
    void on_pushButton_Back_clicked();

private:
    Ui::cove_createchat *ui;

    //Pointers for Create Chat Window Buttons.
    cove_menu *newCoveMenuWindow;
};

#endif // COVE_CREATECHAT_H
