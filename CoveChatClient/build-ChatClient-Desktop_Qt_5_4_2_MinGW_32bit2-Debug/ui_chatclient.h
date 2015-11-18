/********************************************************************************
** Form generated from reading UI file 'chatclient.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATCLIENT_H
#define UI_CHATCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatClient
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_Send;
    QLineEdit *lineEdit_Message;
    QTextEdit *textEdit_Display;
    QListWidget *listWidget_Userlist;
    QMenuBar *menubar;

    void setupUi(QMainWindow *ChatClient)
    {
        if (ChatClient->objectName().isEmpty())
            ChatClient->setObjectName(QStringLiteral("ChatClient"));
        ChatClient->resize(800, 600);
        centralwidget = new QWidget(ChatClient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_Send = new QPushButton(centralwidget);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(703, 528, 91, 41));
        pushButton_Send->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Send->setStyleSheet(QStringLiteral("background-color: rgb(40, 220, 232);"));
        lineEdit_Message = new QLineEdit(centralwidget);
        lineEdit_Message->setObjectName(QStringLiteral("lineEdit_Message"));
        lineEdit_Message->setGeometry(QRect(8, 528, 691, 41));
        lineEdit_Message->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit_Display = new QTextEdit(centralwidget);
        textEdit_Display->setObjectName(QStringLiteral("textEdit_Display"));
        textEdit_Display->setGeometry(QRect(10, 10, 521, 512));
        QFont font;
        font.setPointSize(14);
        textEdit_Display->setFont(font);
        textEdit_Display->setFocusPolicy(Qt::NoFocus);
        textEdit_Display->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit_Display->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listWidget_Userlist = new QListWidget(centralwidget);
        listWidget_Userlist->setObjectName(QStringLiteral("listWidget_Userlist"));
        listWidget_Userlist->setGeometry(QRect(540, 10, 253, 512));
        listWidget_Userlist->setFocusPolicy(Qt::NoFocus);
        listWidget_Userlist->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        listWidget_Userlist->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_Userlist->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ChatClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatClient);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        ChatClient->setMenuBar(menubar);

        retranslateUi(ChatClient);

        QMetaObject::connectSlotsByName(ChatClient);
    } // setupUi

    void retranslateUi(QMainWindow *ChatClient)
    {
        ChatClient->setWindowTitle(QString());
        pushButton_Send->setText(QApplication::translate("ChatClient", "Send", 0));
        lineEdit_Message->setPlaceholderText(QApplication::translate("ChatClient", "Type Here...", 0));
    } // retranslateUi

};

namespace Ui {
    class ChatClient: public Ui_ChatClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATCLIENT_H
