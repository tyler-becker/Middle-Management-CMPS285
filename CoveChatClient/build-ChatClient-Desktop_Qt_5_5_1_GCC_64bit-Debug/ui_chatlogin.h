/********************************************************************************
** Form generated from reading UI file 'chatlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATLOGIN_H
#define UI_CHATLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatLogin
{
public:
    QWidget *centralWidget;
    QLabel *Cove_label;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QFrame *line;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_CreateAccount;
    QLabel *Or_label;
    QLabel *label;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *ChatLogin)
    {
        if (ChatLogin->objectName().isEmpty())
            ChatLogin->setObjectName(QStringLiteral("ChatLogin"));
        ChatLogin->resize(503, 452);
        ChatLogin->setStyleSheet(QStringLiteral("background-color: rgb(58, 58, 58);"));
        centralWidget = new QWidget(ChatLogin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Cove_label = new QLabel(centralWidget);
        Cove_label->setObjectName(QStringLiteral("Cove_label"));
        Cove_label->setGeometry(QRect(20, 10, 281, 111));
        Cove_label->setStyleSheet(QLatin1String("font: 75 italic 72pt \"Gabriola\";\n"
"color: rgb(84,255,124);"));
        lineEdit_Username = new QLineEdit(centralWidget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(110, 160, 291, 41));
        lineEdit_Username->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 63 12pt \"Segoe UI Semibold\";\n"
"border-color: rgb(0, 204, 255);\n"
""));
        lineEdit_Password = new QLineEdit(centralWidget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(110, 210, 291, 41));
        lineEdit_Password->setFocusPolicy(Qt::ClickFocus);
        lineEdit_Password->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 204, 255);\n"
"font: 63 12pt \"Segoe UI Semibold\";"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(70, 320, 361, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_Login = new QPushButton(centralWidget);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(190, 260, 121, 41));
        pushButton_Login->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Login->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_CreateAccount = new QPushButton(centralWidget);
        pushButton_CreateAccount->setObjectName(QStringLiteral("pushButton_CreateAccount"));
        pushButton_CreateAccount->setGeometry(QRect(140, 360, 221, 41));
        pushButton_CreateAccount->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_CreateAccount->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        Or_label = new QLabel(centralWidget);
        Or_label->setObjectName(QStringLiteral("Or_label"));
        Or_label->setGeometry(QRect(240, 320, 21, 19));
        Or_label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 140, 291, 20));
        label->setStyleSheet(QStringLiteral("color: rgb(215, 28, 28);"));
        ChatLogin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ChatLogin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 503, 27));
        ChatLogin->setMenuBar(menuBar);

        retranslateUi(ChatLogin);

        QMetaObject::connectSlotsByName(ChatLogin);
    } // setupUi

    void retranslateUi(QMainWindow *ChatLogin)
    {
        ChatLogin->setWindowTitle(QApplication::translate("ChatLogin", "Cove Login", 0));
        Cove_label->setText(QApplication::translate("ChatLogin", "Cove", 0));
        lineEdit_Username->setPlaceholderText(QApplication::translate("ChatLogin", "User Name", 0));
        lineEdit_Password->setPlaceholderText(QApplication::translate("ChatLogin", "Password", 0));
        pushButton_Login->setText(QApplication::translate("ChatLogin", "Login", 0));
        pushButton_CreateAccount->setText(QApplication::translate("ChatLogin", "Create an Account", 0));
        Or_label->setText(QApplication::translate("ChatLogin", "Or", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatLogin: public Ui_ChatLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATLOGIN_H
