#include "chatlogin.h"
#include "ui_chatlogin.h"
#include "QString"
#include "chataccountcreate.h"
#include "ui_chataccountcreate.h"
#include "chatmenu.h"
#include "ui_chatmenu.h"


ChatLogin::ChatLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatLogin)
{
    ui->setupUi(this);

    ui->lineEdit_Username->setFocusPolicy(Qt::StrongFocus);


      //Opens database
   userdb=QSqlDatabase::addDatabase("QSQLITE");
   userdb.setDatabaseName("/home/chrome/CoveDatabase.db");
    bool opened= userdb.open();

   if (!opened){
       ui->label->setText("Failed to Connect with Server");
   }
  else
       ui->label->setText("Server Verified");

}
    


ChatLogin::~ChatLogin()
{
    delete ui;
}


void ChatLogin::on_pushButton_Login_clicked()
{
    QString Username,Password;

       Username= ui->lineEdit_Username->text();
       Password= ui->lineEdit_Password->text();

/* Keep commented code doesn't open database...
 *
     if (!userdb.isOpen()){
           qDebug()<<"failed to open database";
           return;
     }
*/
    QSqlQuery qry;
    qry.prepare("select * from CoveUsers where Username='"+Username +"'and Password='"+Password+"'");

    if (qry.exec())
    {
        int count=0;
        while(qry.next())
            count++;

        {
        if(count >=1){
            newChatMenuWindow=new ChatMenu(this);
            newChatMenuWindow->show();
            this->hide();
        }
      
        if (count < 1){
            ui->label->setText("User Name or Password is Incorrect");
        }
        }

/*No longer need database handles it

    if (ui->lineEdit_Username->text().isEmpty()||ui->lineEdit_Password->text().isEmpty()){
         return;
        ui->pushButton_Login->setEnabled(false);

     }
    else{
        ui->pushButton_Login->setEnabled(true);

        newChatMenuWindow=new ChatMenu(this);
        newChatMenuWindow->show();
     }
*/
         ui->lineEdit_Username->clear();
         ui->lineEdit_Password->clear();
}


}

void ChatLogin::on_pushButton_CreateAccount_clicked()
{
    newChatAccountCreate=new ChatAccountCreate(this);
    newChatAccountCreate->show();
}



