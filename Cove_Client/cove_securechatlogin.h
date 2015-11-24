#ifndef COVE_SECURECHATLOGIN_H
#define COVE_SECURECHATLOGIN_H

#include <QDialog>
#include "QtSql"

class cove_securechat;
class cove_menu;

namespace Ui {
    class cove_securechatlogin;
}

class cove_securechatlogin : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase mydb;

    void dbConnectionClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
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

public:
    explicit cove_securechatlogin(QWidget *parent = 0);
    ~cove_securechatlogin();

private slots:
    void clearRoomEnter();
    void enter();
    void enableEnterRoomButton();
    bool validRoomNameAndRoomPassword();
    void on_pushButton_Back_clicked();
    void on_pushButton_EnterRoom_clicked();

private:
    Ui::cove_securechatlogin *ui;

    //Pointers for Secure Chat Login Window Buttons.
    cove_securechat *newSecureChatWindow;
    cove_menu *newCoveMenuWindow;
};

#endif // COVE_SECURECHATLOGIN_H
