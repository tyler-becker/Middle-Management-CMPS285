#include "cove_menu.h"
#include "ui_cove_menu.h"
#include "cove_account.h"
#include "ui_cove_account.h"
#include "cove_login.h"
#include "ui_cove_login.h"


cove_login::cove_login(QWidget *parent) : QMainWindow(parent), ui(new Ui::cove_login)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);

    //Icon for Cove Login Window, commented out because PATH is not absolute.
    //QPixmap pix("E:/School/General CMPS/Qt Projects/Cove_Client/SmallDino.PNG");
    //ui->label_LoginLogo->setPixmap(pix);
}

cove_login::~cove_login()
{
    delete ui;
}

//signal slot method (testing)
//cove_login::cove_login()
//{
//  // ...
//   connect(logInButton, SIGNAL(click()), this, SLOT(on_logInButton_clicked());
//  // ...
//}

//displays menu window
void cove_login::on_pushButton_LogIn_clicked()
{
    //modal approach
    //Cove_Menu cove_menu;
    //cove_menu.setModal(true);
    //cove_menu.exec();

    //modeless approach
    newCoveMenuWindow = new cove_menu(this);
    newCoveMenuWindow->show();
 }

//signal slot method (testing)
//cove_login::cove_login()
//{
//   // ...
//   connect(createAccountButton, SIGNAL(click()), this, SLOT(on_createAccountButton_clicked());
//   // ...
//}

//displays account window
void cove_login::on_pushButton_CreateAccount_clicked()
{
    newCoveAccountWindow = new cove_account(this);
    newCoveAccountWindow->show();
}
