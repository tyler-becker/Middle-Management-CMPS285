#pragma once
#ifndef COVE_GENERALCHAT_H
#define COVE_GENERALCHAT_H

#include <QDialog>
#include "QtSql"

class cove_createaccount;
class cove_login;
class cove_menu;

namespace Ui{
    class cove_generalchat;
}

class cove_generalchat : public QDialog
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
    explicit cove_generalchat(QWidget *parent = 0);
    ~cove_generalchat();

private slots:
    void showConnected();
    void on_pushButton_Send_clicked();
    void displayInputMessage();
    QString UsernameDisplay();
    bool eventFilter(QObject *object, QEvent *event);

private:
    Ui::cove_generalchat *ui;

    QScopedPointer<cove_login> m_dialog;

    //std::unique_ptr<cove_login> m_dialog;

    QString Username;

    //Pointers for General Chat Window Buttons.
};

#endif // COVE_GENERALCHAT_H
