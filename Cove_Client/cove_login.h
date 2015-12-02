#ifndef COVE_LOGIN_H
#define COVE_LOGIN_H

#include <QDialog>
#include "QtSql"

class cove_generalchat;
class cove_createaccount;
class cove_menu;

namespace Ui{
  class cove_login;
}

class cove_login : public QDialog
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

    QString getUsername() const;
    void setUsername(const QString &value);


private slots:
    void on_pushButton_LogIn_clicked();
    void on_pushButton_CreateAccount_clicked();
    void clearLogin();
    void login();
    void enableLoginButton();
    bool eventFilter(QObject *object, QEvent *event);
    bool validUsernameAndPassword();
    void closeEvent(QCloseEvent *event);

private:
    Ui::cove_login *ui;

    QString Username;

    //Pointers for Login Window Buttons.
    cove_menu *newCoveMenuWindow;
    cove_createaccount *newCoveAccountWindow;
};

#endif // COVE_LOGIN_H
