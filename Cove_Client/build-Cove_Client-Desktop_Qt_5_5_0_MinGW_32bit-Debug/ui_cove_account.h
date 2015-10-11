/********************************************************************************
** Form generated from reading UI file 'cove_account.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_ACCOUNT_H
#define UI_COVE_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cove_account
{
public:
    QPushButton *pushButton_CreateAccount2;
    QPushButton *pushButton_Back;
    QTextEdit *textEdit_ConfirmPassword;
    QLabel *label_ConfirmPassword;
    QTextEdit *textEdit_Domain;
    QLabel *label_Domain;
    QTextEdit *textEdit_ConnectionServer;
    QLabel *label_ConnectionServer;
    QLabel *label_ConnectionPort;
    QTextEdit *textEdit_ConnectionPort;
    QLabel *label_Username;
    QTextEdit *textEdit_Username;
    QLabel *label_Password;
    QTextEdit *textEdit_Password;

    void setupUi(QWidget *cove_account)
    {
        if (cove_account->objectName().isEmpty())
            cove_account->setObjectName(QStringLiteral("cove_account"));
        cove_account->resize(570, 750);
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
        cove_account->setPalette(palette);
        cove_account->setToolTipDuration(-1);
        cove_account->setAutoFillBackground(true);
        pushButton_CreateAccount2 = new QPushButton(cove_account);
        pushButton_CreateAccount2->setObjectName(QStringLiteral("pushButton_CreateAccount2"));
        pushButton_CreateAccount2->setGeometry(QRect(190, 520, 190, 45));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush8(QColor(170, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(213, 127, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(191, 63, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(85, 0, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(113, 0, 170, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush13(QColor(212, 127, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_CreateAccount2->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        pushButton_CreateAccount2->setFont(font);
        pushButton_CreateAccount2->setAutoFillBackground(false);
        pushButton_CreateAccount2->setStyleSheet(QStringLiteral(""));
        pushButton_Back = new QPushButton(cove_account);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        pushButton_Back->setGeometry(QRect(190, 580, 190, 45));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_Back->setPalette(palette2);
        pushButton_Back->setFont(font);
        pushButton_Back->setAutoFillBackground(false);
        pushButton_Back->setStyleSheet(QStringLiteral(""));
        textEdit_ConfirmPassword = new QTextEdit(cove_account);
        textEdit_ConfirmPassword->setObjectName(QStringLiteral("textEdit_ConfirmPassword"));
        textEdit_ConfirmPassword->setGeometry(QRect(121, 240, 329, 32));
        textEdit_ConfirmPassword->setFont(font);
        textEdit_ConfirmPassword->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConfirmPassword->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConfirmPassword->setUndoRedoEnabled(true);
        label_ConfirmPassword = new QLabel(cove_account);
        label_ConfirmPassword->setObjectName(QStringLiteral("label_ConfirmPassword"));
        label_ConfirmPassword->setGeometry(QRect(121, 210, 168, 23));
        label_ConfirmPassword->setFont(font);
        textEdit_Domain = new QTextEdit(cove_account);
        textEdit_Domain->setObjectName(QStringLiteral("textEdit_Domain"));
        textEdit_Domain->setGeometry(QRect(121, 310, 329, 32));
        textEdit_Domain->setFont(font);
        textEdit_Domain->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Domain->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Domain->setUndoRedoEnabled(true);
        label_Domain = new QLabel(cove_account);
        label_Domain->setObjectName(QStringLiteral("label_Domain"));
        label_Domain->setGeometry(QRect(121, 280, 72, 23));
        label_Domain->setFont(font);
        textEdit_ConnectionServer = new QTextEdit(cove_account);
        textEdit_ConnectionServer->setObjectName(QStringLiteral("textEdit_ConnectionServer"));
        textEdit_ConnectionServer->setGeometry(QRect(121, 380, 329, 32));
        textEdit_ConnectionServer->setFont(font);
        textEdit_ConnectionServer->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConnectionServer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConnectionServer->setUndoRedoEnabled(true);
        label_ConnectionServer = new QLabel(cove_account);
        label_ConnectionServer->setObjectName(QStringLiteral("label_ConnectionServer"));
        label_ConnectionServer->setGeometry(QRect(121, 350, 167, 23));
        label_ConnectionServer->setFont(font);
        label_ConnectionPort = new QLabel(cove_account);
        label_ConnectionPort->setObjectName(QStringLiteral("label_ConnectionPort"));
        label_ConnectionPort->setGeometry(QRect(121, 420, 146, 23));
        label_ConnectionPort->setFont(font);
        textEdit_ConnectionPort = new QTextEdit(cove_account);
        textEdit_ConnectionPort->setObjectName(QStringLiteral("textEdit_ConnectionPort"));
        textEdit_ConnectionPort->setGeometry(QRect(121, 450, 329, 32));
        textEdit_ConnectionPort->setFont(font);
        textEdit_ConnectionPort->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConnectionPort->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_ConnectionPort->setUndoRedoEnabled(true);
        label_Username = new QLabel(cove_account);
        label_Username->setObjectName(QStringLiteral("label_Username"));
        label_Username->setGeometry(QRect(121, 71, 97, 24));
        QFont font1;
        font1.setPointSize(12);
        label_Username->setFont(font1);
        textEdit_Username = new QTextEdit(cove_account);
        textEdit_Username->setObjectName(QStringLiteral("textEdit_Username"));
        textEdit_Username->setGeometry(QRect(121, 102, 329, 32));
        textEdit_Username->setFont(font);
        textEdit_Username->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Username->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Username->setUndoRedoEnabled(true);
        label_Password = new QLabel(cove_account);
        label_Password->setObjectName(QStringLiteral("label_Password"));
        label_Password->setGeometry(QRect(121, 140, 94, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_Password->setFont(font2);
        textEdit_Password = new QTextEdit(cove_account);
        textEdit_Password->setObjectName(QStringLiteral("textEdit_Password"));
        textEdit_Password->setGeometry(QRect(121, 170, 329, 32));
        textEdit_Password->setFont(font);
        textEdit_Password->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Password->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_Password->setUndoRedoEnabled(true);

        retranslateUi(cove_account);

        QMetaObject::connectSlotsByName(cove_account);
    } // setupUi

    void retranslateUi(QWidget *cove_account)
    {
        cove_account->setWindowTitle(QApplication::translate("cove_account", "Form", 0));
        pushButton_CreateAccount2->setText(QApplication::translate("cove_account", "Create Account", 0));
        pushButton_Back->setText(QApplication::translate("cove_account", "Back", 0));
        label_ConfirmPassword->setText(QApplication::translate("cove_account", "Confirm Password:", 0));
        label_Domain->setText(QApplication::translate("cove_account", "Domain:", 0));
        label_ConnectionServer->setText(QApplication::translate("cove_account", "Connection Server:", 0));
        label_ConnectionPort->setText(QApplication::translate("cove_account", "Connection Port:", 0));
        label_Username->setText(QApplication::translate("cove_account", "Username:", 0));
        label_Password->setText(QApplication::translate("cove_account", "Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_account: public Ui_cove_account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_ACCOUNT_H
