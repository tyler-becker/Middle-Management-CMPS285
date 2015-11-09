/********************************************************************************
** Form generated from reading UI file 'cove_login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_LOGIN_H
#define UI_COVE_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cove_login
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_LogIn;
    QLabel *label_Cove;
    QPushButton *pushButton_CreateAccount;
    QLabel *label_Username;
    QLabel *label_Password;
    QLabel *label_LoginLogo;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_Username;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cove_login)
    {
        if (cove_login->objectName().isEmpty())
            cove_login->setObjectName(QStringLiteral("cove_login"));
        cove_login->resize(570, 750);
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
        cove_login->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        cove_login->setFont(font);
        cove_login->setMouseTracking(false);
        cove_login->setAutoFillBackground(false);
        centralWidget = new QWidget(cove_login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_LogIn = new QPushButton(centralWidget);
        pushButton_LogIn->setObjectName(QStringLiteral("pushButton_LogIn"));
        pushButton_LogIn->setGeometry(QRect(190, 380, 190, 45));
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
        pushButton_LogIn->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_LogIn->setFont(font1);
        pushButton_LogIn->setAutoFillBackground(false);
        pushButton_LogIn->setStyleSheet(QLatin1String("QPushButton{\n"
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
        label_Cove = new QLabel(centralWidget);
        label_Cove->setObjectName(QStringLiteral("label_Cove"));
        label_Cove->setGeometry(QRect(220, 30, 130, 50));
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label_Cove->setFont(font2);
        label_Cove->setLayoutDirection(Qt::LeftToRight);
        label_Cove->setStyleSheet(QLatin1String("QLabel{\n"
"	color: white;\n"
"}"));
        label_Cove->setFrameShape(QFrame::NoFrame);
        label_Cove->setTextFormat(Qt::AutoText);
        label_Cove->setAlignment(Qt::AlignCenter);
        pushButton_CreateAccount = new QPushButton(centralWidget);
        pushButton_CreateAccount->setObjectName(QStringLiteral("pushButton_CreateAccount"));
        pushButton_CreateAccount->setGeometry(QRect(190, 440, 190, 45));
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
        pushButton_CreateAccount->setPalette(palette2);
        pushButton_CreateAccount->setFont(font1);
        pushButton_CreateAccount->setAutoFillBackground(false);
        pushButton_CreateAccount->setStyleSheet(QLatin1String("QPushButton{\n"
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
        label_Username = new QLabel(centralWidget);
        label_Username->setObjectName(QStringLiteral("label_Username"));
        label_Username->setGeometry(QRect(150, 220, 100, 25));
        QFont font3;
        font3.setPointSize(12);
        label_Username->setFont(font3);
        label_Username->setStyleSheet(QLatin1String("QLabel{\n"
"	color: white;\n"
"}"));
        label_Password = new QLabel(centralWidget);
        label_Password->setObjectName(QStringLiteral("label_Password"));
        label_Password->setGeometry(QRect(150, 290, 100, 25));
        label_Password->setFont(font3);
        label_Password->setStyleSheet(QLatin1String("QLabel{\n"
"	color: white;\n"
"}"));
        label_LoginLogo = new QLabel(centralWidget);
        label_LoginLogo->setObjectName(QStringLiteral("label_LoginLogo"));
        label_LoginLogo->setGeometry(QRect(235, 100, 100, 100));
        label_LoginLogo->setAlignment(Qt::AlignCenter);
        lineEdit_Password = new QLineEdit(centralWidget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(150, 320, 270, 32));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(12);
        lineEdit_Password->setFont(font4);
        lineEdit_Password->setAcceptDrops(false);
        lineEdit_Password->setStyleSheet(QLatin1String("QLineEdit{\n"
"	color: white;\n"
"	background-color: black;\n"
"	alternate-background-color: black;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: black;\n"
"	selection-background-color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QLineEdit:hover{\n"
"	border: 2px solid white;\n"
"}\n"
""));
        lineEdit_Password->setMaxLength(24);
        lineEdit_Password->setFrame(false);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        lineEdit_Username = new QLineEdit(centralWidget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(150, 250, 270, 32));
        lineEdit_Username->setFont(font4);
        lineEdit_Username->setAcceptDrops(false);
        lineEdit_Username->setStyleSheet(QLatin1String("QLineEdit{\n"
"	color: white;\n"
"	background-color: black;\n"
"	alternate-background-color: black;\n"
"	font: 12pt \"Arial\";\n"
"	selection-color: black;\n"
"	selection-background-color: white;\n"
"	border: 1px solid white;\n"
"}\n"
"QLineEdit:hover{\n"
"	border: 2px solid white;\n"
"}\n"
""));
        lineEdit_Username->setMaxLength(24);
        lineEdit_Username->setFrame(false);
        cove_login->setCentralWidget(centralWidget);
        label_Username->raise();
        label_Password->raise();
        label_Cove->raise();
        pushButton_CreateAccount->raise();
        pushButton_LogIn->raise();
        label_LoginLogo->raise();
        lineEdit_Password->raise();
        lineEdit_Username->raise();
        statusBar = new QStatusBar(cove_login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        cove_login->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_Username, lineEdit_Password);
        QWidget::setTabOrder(lineEdit_Password, pushButton_LogIn);
        QWidget::setTabOrder(pushButton_LogIn, pushButton_CreateAccount);

        retranslateUi(cove_login);

        QMetaObject::connectSlotsByName(cove_login);
    } // setupUi

    void retranslateUi(QMainWindow *cove_login)
    {
        cove_login->setWindowTitle(QApplication::translate("cove_login", "Cove Client", 0));
        pushButton_LogIn->setText(QApplication::translate("cove_login", "Login", 0));
        label_Cove->setText(QApplication::translate("cove_login", "Cove", 0));
        pushButton_CreateAccount->setText(QApplication::translate("cove_login", "Create Account", 0));
        label_Username->setText(QApplication::translate("cove_login", "Username:", 0));
        label_Password->setText(QApplication::translate("cove_login", "Password:", 0));
        label_LoginLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cove_login: public Ui_cove_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_LOGIN_H
