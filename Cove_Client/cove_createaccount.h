#ifndef COVE_CREATEACCOUNT_H
#define COVE_CREATEACCOUNT_H

#include <QWidget>
#include "QtSql"

class cove_login;
class cove_menu;
class cove_madeaccount;

namespace Ui{
  class cove_createaccount;
}

class cove_createaccount : public QWidget
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
    explicit cove_createaccount(QWidget *parent = 0);
    ~cove_createaccount();

private slots:
    void createAccount();
    void enableCreateAccountButton();
    bool validUsername();
    bool validPassword();
    void on_pushButton_CreateAccount_clicked();
    void on_pushButton_Cancel_clicked();

private:
    Ui::cove_createaccount *ui;

    //Pointers for Account Create Window Buttons.
    cove_madeaccount * newCoveMadeAccountWindow;
    cove_login *newCoveLoginWindow;
};

#endif // COVE_CREATEACCOUNT_H
