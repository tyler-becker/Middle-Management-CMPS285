/********************************************************************************
** Form generated from reading UI file 'cove_chat.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_CHAT_H
#define UI_COVE_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cove_chat
{
public:
    QPushButton *pushButton_ChatOptions;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_TextOptions;
    QTabWidget *tabWidget_ChatDisplay;
    QWidget *tab_1;
    QWidget *tab_2;
    QPushButton *pushButton_Insert;
    QTextEdit *textEdit_ChatTypeField;

    void setupUi(QDialog *cove_chat)
    {
        if (cove_chat->objectName().isEmpty())
            cove_chat->setObjectName(QStringLiteral("cove_chat"));
        cove_chat->resize(570, 750);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(58, 60, 83, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(87, 90, 124, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(72, 75, 103, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(29, 30, 41, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(38, 40, 55, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        cove_chat->setPalette(palette);
        cove_chat->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton_ChatOptions = new QPushButton(cove_chat);
        pushButton_ChatOptions->setObjectName(QStringLiteral("pushButton_ChatOptions"));
        pushButton_ChatOptions->setGeometry(QRect(305, 600, 100, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_ChatOptions->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(9);
        pushButton_ChatOptions->setFont(font);
        pushButton_ChatOptions->setAutoDefault(false);
        pushButton_Send = new QPushButton(cove_chat);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(355, 640, 132, 65));
        QPalette palette2;
        QBrush brush8(QColor(6, 0, 83, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_Send->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        pushButton_Send->setFont(font1);
        pushButton_TextOptions = new QPushButton(cove_chat);
        pushButton_TextOptions->setObjectName(QStringLiteral("pushButton_TextOptions"));
        pushButton_TextOptions->setGeometry(QRect(195, 600, 100, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_TextOptions->setPalette(palette3);
        pushButton_TextOptions->setFont(font);
        pushButton_TextOptions->setAutoDefault(false);
        tabWidget_ChatDisplay = new QTabWidget(cove_chat);
        tabWidget_ChatDisplay->setObjectName(QStringLiteral("tabWidget_ChatDisplay"));
        tabWidget_ChatDisplay->setGeometry(QRect(85, 40, 400, 550));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        tabWidget_ChatDisplay->setPalette(palette4);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        tabWidget_ChatDisplay->setFont(font2);
        tabWidget_ChatDisplay->setTabsClosable(false);
        tabWidget_ChatDisplay->setMovable(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tabWidget_ChatDisplay->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_ChatDisplay->addTab(tab_2, QString());
        pushButton_Insert = new QPushButton(cove_chat);
        pushButton_Insert->setObjectName(QStringLiteral("pushButton_Insert"));
        pushButton_Insert->setGeometry(QRect(85, 600, 100, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_Insert->setPalette(palette5);
        pushButton_Insert->setFont(font);
        pushButton_Insert->setAutoDefault(false);
        textEdit_ChatTypeField = new QTextEdit(cove_chat);
        textEdit_ChatTypeField->setObjectName(QStringLiteral("textEdit_ChatTypeField"));
        textEdit_ChatTypeField->setGeometry(QRect(85, 640, 260, 65));
        textEdit_ChatTypeField->setFont(font2);

        retranslateUi(cove_chat);

        tabWidget_ChatDisplay->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cove_chat);
    } // setupUi

    void retranslateUi(QDialog *cove_chat)
    {
        cove_chat->setWindowTitle(QApplication::translate("cove_chat", "Cove Client", 0));
        pushButton_ChatOptions->setText(QApplication::translate("cove_chat", "chat options", 0));
        pushButton_Send->setText(QApplication::translate("cove_chat", "Send", 0));
        pushButton_TextOptions->setText(QApplication::translate("cove_chat", "text options", 0));
        tabWidget_ChatDisplay->setTabText(tabWidget_ChatDisplay->indexOf(tab_1), QApplication::translate("cove_chat", "General Chat (5)", 0));
        tabWidget_ChatDisplay->setTabText(tabWidget_ChatDisplay->indexOf(tab_2), QApplication::translate("cove_chat", "PMs (1)", 0));
        pushButton_Insert->setText(QApplication::translate("cove_chat", "Insert", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_chat: public Ui_cove_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_CHAT_H
