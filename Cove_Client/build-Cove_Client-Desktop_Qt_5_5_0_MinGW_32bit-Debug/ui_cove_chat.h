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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cove_chat
{
public:
    QPushButton *pushButton_ChatOptions;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_TextOptions;
    QPushButton *pushButton_Insert;
    QListWidget *listWidget_ChatDisplay;
    QLineEdit *lineEdit_ChatTypeField;
    QPushButton *pushButton_dotdotdot;

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
        pushButton_Send->setGeometry(QRect(355, 640, 136, 65));
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
        pushButton_Insert = new QPushButton(cove_chat);
        pushButton_Insert->setObjectName(QStringLiteral("pushButton_Insert"));
        pushButton_Insert->setGeometry(QRect(85, 600, 100, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_Insert->setPalette(palette4);
        pushButton_Insert->setFont(font);
        pushButton_Insert->setAutoDefault(false);
        listWidget_ChatDisplay = new QListWidget(cove_chat);
        listWidget_ChatDisplay->setObjectName(QStringLiteral("listWidget_ChatDisplay"));
        listWidget_ChatDisplay->setGeometry(QRect(80, 40, 410, 550));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        listWidget_ChatDisplay->setFont(font2);
        listWidget_ChatDisplay->setProperty("showDropIndicator", QVariant(false));
        listWidget_ChatDisplay->setProperty("isWrapping", QVariant(true));
        listWidget_ChatDisplay->setWordWrap(true);
        lineEdit_ChatTypeField = new QLineEdit(cove_chat);
        lineEdit_ChatTypeField->setObjectName(QStringLiteral("lineEdit_ChatTypeField"));
        lineEdit_ChatTypeField->setGeometry(QRect(85, 640, 260, 65));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        lineEdit_ChatTypeField->setPalette(palette5);
        lineEdit_ChatTypeField->setFont(font1);
        lineEdit_ChatTypeField->setAutoFillBackground(false);
        lineEdit_ChatTypeField->setStyleSheet(QLatin1String("QLineEdit {\n"
"	color: white;\n"
"	background: black;\n"
"}"));
        lineEdit_ChatTypeField->setFrame(true);
        lineEdit_ChatTypeField->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton_dotdotdot = new QPushButton(cove_chat);
        pushButton_dotdotdot->setObjectName(QStringLiteral("pushButton_dotdotdot"));
        pushButton_dotdotdot->setGeometry(QRect(415, 600, 76, 30));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_dotdotdot->setPalette(palette6);
        pushButton_dotdotdot->setFont(font1);
        pushButton_dotdotdot->setAutoFillBackground(false);
        QWidget::setTabOrder(lineEdit_ChatTypeField, pushButton_Send);
        QWidget::setTabOrder(pushButton_Send, pushButton_Insert);
        QWidget::setTabOrder(pushButton_Insert, pushButton_TextOptions);
        QWidget::setTabOrder(pushButton_TextOptions, pushButton_ChatOptions);
        QWidget::setTabOrder(pushButton_ChatOptions, pushButton_dotdotdot);
        QWidget::setTabOrder(pushButton_dotdotdot, listWidget_ChatDisplay);

        retranslateUi(cove_chat);

        QMetaObject::connectSlotsByName(cove_chat);
    } // setupUi

    void retranslateUi(QDialog *cove_chat)
    {
        cove_chat->setWindowTitle(QApplication::translate("cove_chat", "Cove Client", 0));
        pushButton_ChatOptions->setText(QApplication::translate("cove_chat", "chat options", 0));
        pushButton_Send->setText(QApplication::translate("cove_chat", "Send", 0));
        pushButton_TextOptions->setText(QApplication::translate("cove_chat", "text options", 0));
        pushButton_Insert->setText(QApplication::translate("cove_chat", "Insert", 0));
        pushButton_dotdotdot->setText(QApplication::translate("cove_chat", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_chat: public Ui_cove_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_CHAT_H
