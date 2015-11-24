#ifndef COVE_LOGIN_H
#define COVE_LOGIN_H

#include <QMainWindow>
#include "QtSql"

class cove_createaccount;
class cove_menu;

namespace Ui{
  class cove_login;
}

class cove_login : public QMainWindow
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
    explicit cove_login(QWidget *parent = 0);
    ~cove_login();

    const QString& getUsername() const;

private slots:
    void on_pushButton_LogIn_clicked();
    void on_pushButton_CreateAccount_clicked();
    void clearLogin();
    void login();
    void enableLoginButton();
    bool eventFilter(QObject *object, QEvent *event);
    bool validUsernameAndPassword();
    QString standardLEStyleSheet();
    QString errorLEStyleSheet();

private:
    Ui::cove_login *ui;

    QString currUsername;

    //Pointers for Login Window Buttons.
    cove_menu *newCoveMenuWindow;
    cove_createaccount *newCoveAccountWindow;
};

#endif // COVE_LOGIN_H
