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

    QString getCurrUsername() const;
    void setCurrUsername(const QString &value);

private slots:
    bool validNewUsername();
    void enableUsernameChangeButton();
    void on_pushButton_ChangeUsername_clicked();
    void on_pushButton_Back_clicked();
    void closeEvent(QCloseEvent *event);

private:
    Ui::cove_account *ui;

    QString currUsername;

    //Pointers for Account Window Buttons.
    cove_menu *newCoveMenuWindow;
};

#endif // COVE_ACCOUNT_H
