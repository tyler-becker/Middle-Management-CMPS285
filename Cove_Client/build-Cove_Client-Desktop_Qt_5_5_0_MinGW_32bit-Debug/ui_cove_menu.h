/********************************************************************************
** Form generated from reading UI file 'cove_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_MENU_H
#define UI_COVE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cove_menu
{
public:
    QPushButton *pushButton_CreateChat;
    QLabel *label_Menu;
    QPushButton *pushButton_Account;
    QPushButton *pushButton_MyChats;
    QPushButton *pushButton_PrivateChat;
    QPushButton *pushButton_SecureChat;
    QPushButton *pushButton_GeneralChat;
    QPushButton *pushButton_Back;

    void setupUi(QWidget *cove_menu)
    {
        if (cove_menu->objectName().isEmpty())
            cove_menu->setObjectName(QStringLiteral("cove_menu"));
        cove_menu->resize(570, 750);
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
        cove_menu->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        cove_menu->setFont(font);
        cove_menu->setAutoFillBackground(true);
        pushButton_CreateChat = new QPushButton(cove_menu);
        pushButton_CreateChat->setObjectName(QStringLiteral("pushButton_CreateChat"));
        pushButton_CreateChat->setGeometry(QRect(90, 480, 150, 130));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush8(QColor(213, 127, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(191, 63, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(85, 0, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(113, 0, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_CreateChat->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        pushButton_CreateChat->setFont(font1);
        pushButton_CreateChat->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        label_Menu = new QLabel(cove_menu);
        label_Menu->setObjectName(QStringLiteral("label_Menu"));
        label_Menu->setGeometry(QRect(220, 30, 130, 50));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label_Menu->setFont(font2);
        label_Menu->setStyleSheet(QLatin1String("QLabel{\n"
"	color: white;\n"
"}"));
        label_Menu->setAlignment(Qt::AlignCenter);
        pushButton_Account = new QPushButton(cove_menu);
        pushButton_Account->setObjectName(QStringLiteral("pushButton_Account"));
        pushButton_Account->setGeometry(QRect(330, 480, 150, 130));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_Account->setPalette(palette2);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        pushButton_Account->setFont(font3);
        pushButton_Account->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_MyChats = new QPushButton(cove_menu);
        pushButton_MyChats->setObjectName(QStringLiteral("pushButton_MyChats"));
        pushButton_MyChats->setGeometry(QRect(330, 300, 150, 130));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_MyChats->setPalette(palette3);
        pushButton_MyChats->setFont(font3);
        pushButton_MyChats->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_PrivateChat = new QPushButton(cove_menu);
        pushButton_PrivateChat->setObjectName(QStringLiteral("pushButton_PrivateChat"));
        pushButton_PrivateChat->setGeometry(QRect(90, 300, 150, 130));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_PrivateChat->setPalette(palette4);
        pushButton_PrivateChat->setFont(font1);
        pushButton_PrivateChat->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_SecureChat = new QPushButton(cove_menu);
        pushButton_SecureChat->setObjectName(QStringLiteral("pushButton_SecureChat"));
        pushButton_SecureChat->setGeometry(QRect(330, 120, 150, 130));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_SecureChat->setPalette(palette5);
        pushButton_SecureChat->setFont(font3);
        pushButton_SecureChat->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_GeneralChat = new QPushButton(cove_menu);
        pushButton_GeneralChat->setObjectName(QStringLiteral("pushButton_GeneralChat"));
        pushButton_GeneralChat->setGeometry(QRect(90, 120, 150, 130));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_GeneralChat->setPalette(palette6);
        pushButton_GeneralChat->setFont(font3);
        pushButton_GeneralChat->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_Back = new QPushButton(cove_menu);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(190, 640, 190, 45));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        pushButton_Back->setPalette(palette7);
        pushButton_Back->setFont(font3);
        pushButton_Back->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        QWidget::setTabOrder(pushButton_GeneralChat, pushButton_SecureChat);
        QWidget::setTabOrder(pushButton_SecureChat, pushButton_PrivateChat);
        QWidget::setTabOrder(pushButton_PrivateChat, pushButton_MyChats);
        QWidget::setTabOrder(pushButton_MyChats, pushButton_CreateChat);
        QWidget::setTabOrder(pushButton_CreateChat, pushButton_Account);

        retranslateUi(cove_menu);

        QMetaObject::connectSlotsByName(cove_menu);
    } // setupUi

    void retranslateUi(QWidget *cove_menu)
    {
        cove_menu->setWindowTitle(QApplication::translate("cove_menu", "Cove Client", 0));
        pushButton_CreateChat->setText(QApplication::translate("cove_menu", "Create Chat", 0));
        label_Menu->setText(QApplication::translate("cove_menu", "Menu", 0));
        pushButton_Account->setText(QApplication::translate("cove_menu", "Account", 0));
        pushButton_MyChats->setText(QApplication::translate("cove_menu", "My Chats", 0));
        pushButton_PrivateChat->setText(QApplication::translate("cove_menu", "Private Chat", 0));
        pushButton_SecureChat->setText(QApplication::translate("cove_menu", "Secure Chat", 0));
        pushButton_GeneralChat->setText(QApplication::translate("cove_menu", "General Chat", 0));
        pushButton_Back->setText(QApplication::translate("cove_menu", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_menu: public Ui_cove_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_MENU_H
