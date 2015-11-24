#ifndef COVE_ACCOUNT_H
#define COVE_ACCOUNT_H

#include <QDialog>
#include "QtSql"

class cove_menu;

namespace Ui{
    class cove_account;
}

class cove_account : public QDialog
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
    explicit cove_account(QWidget *parent = 0);
    ~cove_account();

private slots:
    bool validNewUsername();
    void enableUsernameChangeButton();
    void on_pushButton_ChangeUsername_clicked();
    bool validNewPassword();
    void enablePasswordChangeButton();
    void on_pushButton_ChangePassword_clicked();
    void on_pushButton_Back_clicked();

private:
    Ui::cove_account *ui;

    //Pointers for Account Window Buttons.
    cove_menu *newCoveMenuWindow;
};

#endif // COVE_ACCOUNT_H
