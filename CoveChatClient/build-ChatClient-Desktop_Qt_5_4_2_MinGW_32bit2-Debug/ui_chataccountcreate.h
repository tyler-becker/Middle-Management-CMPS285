/********************************************************************************
** Form generated from reading UI file 'chataccountcreate.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATACCOUNTCREATE_H
#define UI_CHATACCOUNTCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChatAccountCreate
{
public:
    QLineEdit *lineEdit_UserCreate;
    QLineEdit *lineEdit_UserPassCreate;
    QLineEdit *lineEdit_ConfirmPass;
    QLineEdit *lineEdit_Domain;
    QLineEdit *lineEdit_ConnSever;
    QLineEdit *lineEdit_6;
    QFrame *line;
    QPushButton *pushButton_CreateAcc;
    QPushButton *pushButton_Cancel;
    QLabel *label;

    void setupUi(QDialog *ChatAccountCreate)
    {
        if (ChatAccountCreate->objectName().isEmpty())
            ChatAccountCreate->setObjectName(QStringLiteral("ChatAccountCreate"));
        ChatAccountCreate->resize(485, 637);
        lineEdit_UserCreate = new QLineEdit(ChatAccountCreate);
        lineEdit_UserCreate->setObjectName(QStringLiteral("lineEdit_UserCreate"));
        lineEdit_UserCreate->setGeometry(QRect(90, 130, 301, 41));
        lineEdit_UserCreate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_UserPassCreate = new QLineEdit(ChatAccountCreate);
        lineEdit_UserPassCreate->setObjectName(QStringLiteral("lineEdit_UserPassCreate"));
        lineEdit_UserPassCreate->setGeometry(QRect(90, 190, 301, 41));
        lineEdit_UserPassCreate->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_ConfirmPass = new QLineEdit(ChatAccountCreate);
        lineEdit_ConfirmPass->setObjectName(QStringLiteral("lineEdit_ConfirmPass"));
        lineEdit_ConfirmPass->setGeometry(QRect(90, 250, 301, 41));
        lineEdit_ConfirmPass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_Domain = new QLineEdit(ChatAccountCreate);
        lineEdit_Domain->setObjectName(QStringLiteral("lineEdit_Domain"));
        lineEdit_Domain->setGeometry(QRect(90, 310, 301, 41));
        lineEdit_Domain->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_ConnSever = new QLineEdit(ChatAccountCreate);
        lineEdit_ConnSever->setObjectName(QStringLiteral("lineEdit_ConnSever"));
        lineEdit_ConnSever->setGeometry(QRect(90, 370, 301, 41));
        lineEdit_ConnSever->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(ChatAccountCreate);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(90, 430, 301, 41));
        lineEdit_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        line = new QFrame(ChatAccountCreate);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(110, 530, 261, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_CreateAcc = new QPushButton(ChatAccountCreate);
        pushButton_CreateAcc->setObjectName(QStringLiteral("pushButton_CreateAcc"));
        pushButton_CreateAcc->setGeometry(QRect(160, 488, 161, 41));
        pushButton_CreateAcc->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_CreateAcc->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_Cancel = new QPushButton(ChatAccountCreate);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(190, 558, 104, 41));
        pushButton_Cancel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Cancel->setStyleSheet(QLatin1String("background-color: rgb(209, 29, 33);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(ChatAccountCreate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(61, 50, 361, 41));
        label->setStyleSheet(QLatin1String("font: 57 40pt \"Ubuntu\";\n"
"color: rgb(84, 255, 124);"));

        retranslateUi(ChatAccountCreate);

        QMetaObject::connectSlotsByName(ChatAccountCreate);
    } // setupUi

    void retranslateUi(QDialog *ChatAccountCreate)
    {
        ChatAccountCreate->setWindowTitle(QApplication::translate("ChatAccountCreate", "Account Create", 0));
        lineEdit_UserCreate->setPlaceholderText(QApplication::translate("ChatAccountCreate", "User Name", 0));
        lineEdit_UserPassCreate->setPlaceholderText(QApplication::translate("ChatAccountCreate", "Password", 0));
        lineEdit_ConfirmPass->setPlaceholderText(QApplication::translate("ChatAccountCreate", "Confirm Password", 0));
        lineEdit_Domain->setPlaceholderText(QApplication::translate("ChatAccountCreate", "Domain", 0));
        lineEdit_ConnSever->setPlaceholderText(QApplication::translate("ChatAccountCreate", "Connection Server", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("ChatAccountCreate", "Connection Port", 0));
        pushButton_CreateAcc->setText(QApplication::translate("ChatAccountCreate", "Create Account", 0));
        pushButton_Cancel->setText(QApplication::translate("ChatAccountCreate", "Cancel", 0));
        label->setText(QApplication::translate("ChatAccountCreate", "Account Create", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatAccountCreate: public Ui_ChatAccountCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATACCOUNTCREATE_H
