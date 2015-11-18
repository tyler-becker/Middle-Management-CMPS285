/********************************************************************************
** Form generated from reading UI file 'chatmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATMENU_H
#define UI_CHATMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChatMenu
{
public:
    QPushButton *pushButton_Create;
    QFrame *line;
    QPushButton *pushButton_General;
    QPushButton *pushButton_Private;
    QPushButton *pushButton_Mychat;
    QPushButton *pushButton_Game;
    QPushButton *pushButton_MyAccount;
    QPushButton *pushButton_MenuBack;
    QLabel *label;

    void setupUi(QDialog *ChatMenu)
    {
        if (ChatMenu->objectName().isEmpty())
            ChatMenu->setObjectName(QStringLiteral("ChatMenu"));
        ChatMenu->resize(581, 631);
        pushButton_Create = new QPushButton(ChatMenu);
        pushButton_Create->setObjectName(QStringLiteral("pushButton_Create"));
        pushButton_Create->setGeometry(QRect(120, 80, 341, 81));
        pushButton_Create->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Create->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(ChatMenu);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(280, 180, 20, 341));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_General = new QPushButton(ChatMenu);
        pushButton_General->setObjectName(QStringLiteral("pushButton_General"));
        pushButton_General->setGeometry(QRect(90, 430, 171, 91));
        pushButton_General->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_General->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_Private = new QPushButton(ChatMenu);
        pushButton_Private->setObjectName(QStringLiteral("pushButton_Private"));
        pushButton_Private->setGeometry(QRect(320, 190, 171, 91));
        pushButton_Private->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Private->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_Mychat = new QPushButton(ChatMenu);
        pushButton_Mychat->setObjectName(QStringLiteral("pushButton_Mychat"));
        pushButton_Mychat->setGeometry(QRect(90, 190, 171, 91));
        pushButton_Mychat->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Mychat->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_Game = new QPushButton(ChatMenu);
        pushButton_Game->setObjectName(QStringLiteral("pushButton_Game"));
        pushButton_Game->setGeometry(QRect(90, 310, 171, 91));
        pushButton_Game->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Game->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_MyAccount = new QPushButton(ChatMenu);
        pushButton_MyAccount->setObjectName(QStringLiteral("pushButton_MyAccount"));
        pushButton_MyAccount->setGeometry(QRect(320, 310, 171, 91));
        pushButton_MyAccount->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_MyAccount->setStyleSheet(QLatin1String("background-color: rgb(84, 255, 124);\n"
"color: rgb(255, 255, 255);"));
        pushButton_MenuBack = new QPushButton(ChatMenu);
        pushButton_MenuBack->setObjectName(QStringLiteral("pushButton_MenuBack"));
        pushButton_MenuBack->setGeometry(QRect(180, 560, 221, 51));
        pushButton_MenuBack->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_MenuBack->setStyleSheet(QLatin1String("background-color: rgb(209, 29, 33);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(ChatMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 10, 171, 51));
        label->setStyleSheet(QLatin1String("font: 57 50pt \"Ubuntu\";\n"
"color: rgb(84, 255, 124);"));

        retranslateUi(ChatMenu);

        QMetaObject::connectSlotsByName(ChatMenu);
    } // setupUi

    void retranslateUi(QDialog *ChatMenu)
    {
        ChatMenu->setWindowTitle(QApplication::translate("ChatMenu", "Menu", 0));
        pushButton_Create->setText(QApplication::translate("ChatMenu", "Create Chat", 0));
        pushButton_General->setText(QApplication::translate("ChatMenu", "General Chat", 0));
        pushButton_Private->setText(QApplication::translate("ChatMenu", "Private Chat", 0));
        pushButton_Mychat->setText(QApplication::translate("ChatMenu", "My Chats", 0));
        pushButton_Game->setText(QApplication::translate("ChatMenu", "Game Chat", 0));
        pushButton_MyAccount->setText(QApplication::translate("ChatMenu", "Account", 0));
        pushButton_MenuBack->setText(QApplication::translate("ChatMenu", "Back", 0));
        label->setText(QApplication::translate("ChatMenu", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatMenu: public Ui_ChatMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMENU_H
