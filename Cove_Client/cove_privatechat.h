#pragma once
#ifndef COVE_PRIVATECHAT_H
#define COVE_PRIVATECHAT_H

#include <QDialog>
#include "QtSql"

class cove_createaccount;
class cove_login;
class cove_menu;

namespace Ui{
    class cove_privatechat;
}

class cove_privatechat : public QDialog
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
    explicit cove_privatechat(QWidget *parent = 0);
    ~cove_privatechat();

private slots:
    bool showConnected();
    void on_pushButton_Send_clicked();
    void displayInputMessage();
    bool eventFilter(QObject *object, QEvent *event);

private:
    Ui::cove_privatechat *ui;

    //Pointers for Private Chat Window Buttons.
};

#endif // COVE_PRIVATECHAT_H
