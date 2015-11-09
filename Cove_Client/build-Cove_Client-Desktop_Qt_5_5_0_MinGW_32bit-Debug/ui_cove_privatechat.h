/********************************************************************************
** Form generated from reading UI file 'cove_privatechat.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVE_PRIVATECHAT_H
#define UI_COVE_PRIVATECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_cove_privatechat
{
public:
    QPushButton *pushButton_ChatOptions;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_TextOptions;
    QPushButton *pushButton_Insert;
    QPushButton *pushButton_dotdotdot;
    QListWidget *listWidget_UserDisplay;
    QTextBrowser *textBrowser_ChatDisplay;
    QTextEdit *textEdit_ChatTypeField;

    void setupUi(QDialog *cove_privatechat)
    {
        if (cove_privatechat->objectName().isEmpty())
            cove_privatechat->setObjectName(QStringLiteral("cove_privatechat"));
        cove_privatechat->resize(770, 750);
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
        cove_privatechat->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        cove_privatechat->setFont(font);
        cove_privatechat->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton_ChatOptions = new QPushButton(cove_privatechat);
        pushButton_ChatOptions->setObjectName(QStringLiteral("pushButton_ChatOptions"));
        pushButton_ChatOptions->setGeometry(QRect(290, 600, 100, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        pushButton_ChatOptions->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_ChatOptions->setFont(font1);
        pushButton_ChatOptions->setFocusPolicy(Qt::NoFocus);
        pushButton_ChatOptions->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 10pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_ChatOptions->setAutoDefault(false);
        pushButton_Send = new QPushButton(cove_privatechat);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));
        pushButton_Send->setGeometry(QRect(530, 640, 200, 70));
        pushButton_Send->setFont(font);
        pushButton_Send->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_Send->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton_Send->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_Send->setAutoDefault(false);
        pushButton_TextOptions = new QPushButton(cove_privatechat);
        pushButton_TextOptions->setObjectName(QStringLiteral("pushButton_TextOptions"));
        pushButton_TextOptions->setGeometry(QRect(180, 600, 100, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        pushButton_TextOptions->setPalette(palette2);
        pushButton_TextOptions->setFont(font1);
        pushButton_TextOptions->setFocusPolicy(Qt::NoFocus);
        pushButton_TextOptions->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 10pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_TextOptions->setAutoDefault(false);
        pushButton_Insert = new QPushButton(cove_privatechat);
        pushButton_Insert->setObjectName(QStringLiteral("pushButton_Insert"));
        pushButton_Insert->setGeometry(QRect(70, 600, 100, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        pushButton_Insert->setPalette(palette3);
        pushButton_Insert->setFont(font1);
        pushButton_Insert->setFocusPolicy(Qt::NoFocus);
        pushButton_Insert->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 10pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        pushButton_Insert->setAutoDefault(false);
        pushButton_dotdotdot = new QPushButton(cove_privatechat);
        pushButton_dotdotdot->setObjectName(QStringLiteral("pushButton_dotdotdot"));
        pushButton_dotdotdot->setGeometry(QRect(400, 600, 76, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        pushButton_dotdotdot->setPalette(palette4);
        pushButton_dotdotdot->setFont(font1);
        pushButton_dotdotdot->setFocusPolicy(Qt::NoFocus);
        pushButton_dotdotdot->setAutoFillBackground(false);
        pushButton_dotdotdot->setStyleSheet(QLatin1String("QPushButton{\n"
"	color: black;;\n"
"	background-color: white;\n"
"	alternate-background-color: white;\n"
"	font: 10pt \"Arial\";\n"
"	selection-color: white;\n"
"	selection-background-color: black;\n"
"	border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"	border: 2px solid black;\n"
"}"));
        listWidget_UserDisplay = new QListWidget(cove_privatechat);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setUnderline(false);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_UserDisplay);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setFont(font2);
        listWidget_UserDisplay->setObjectName(QStringLiteral("listWidget_UserDisplay"));
        listWidget_UserDisplay->setGeometry(QRect(530, 40, 200, 550));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        listWidget_UserDisplay->setFont(font3);
        listWidget_UserDisplay->setStyleSheet(QLatin1String("QListWidget{\n"
"	color: white;\n"
"	background-color: black;\n"
"	alternate-background-color: black;\n"
"\n"
"	selection-color: black;\n"
"	selection-background-color: white;\n"
"\n"
"	border: 1px solid white;\n"
"}"));
        textBrowser_ChatDisplay = new QTextBrowser(cove_privatechat);
        textBrowser_ChatDisplay->setObjectName(QStringLiteral("textBrowser_ChatDisplay"));
        textBrowser_ChatDisplay->setGeometry(QRect(40, 40, 470, 550));
        textBrowser_ChatDisplay->setFont(font3);
        textBrowser_ChatDisplay->setStyleSheet(QLatin1String("QTextBrowser{\n"
"	color: white;\n"
"	background-color: black;\n"
"	alternate-background-color: black;\n"
"\n"
"	selection-color: black;\n"
"	selection-background-color: white;\n"
"\n"
"	border: 1px solid white;\n"
"}"));
        textBrowser_ChatDisplay->setOpenExternalLinks(true);
        textEdit_ChatTypeField = new QTextEdit(cove_privatechat);
        textEdit_ChatTypeField->setObjectName(QStringLiteral("textEdit_ChatTypeField"));
        textEdit_ChatTypeField->setGeometry(QRect(40, 640, 470, 70));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_ChatTypeField->sizePolicy().hasHeightForWidth());
        textEdit_ChatTypeField->setSizePolicy(sizePolicy);
        textEdit_ChatTypeField->setFocusPolicy(Qt::StrongFocus);
        textEdit_ChatTypeField->setStyleSheet(QLatin1String("QTextEdit{\n"
"	color: white;\n"
"	background: black;\n"
"	font: 12pt \"Arial\";\n"
"	border: 1px solid white;\n"
"}\n"
"\n"
"QTextEdit:hover{\n"
"	border: 2px solid white;\n"
"}"));
        textEdit_ChatTypeField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        retranslateUi(cove_privatechat);

        pushButton_Send->setDefault(false);


        QMetaObject::connectSlotsByName(cove_privatechat);
    } // setupUi

    void retranslateUi(QDialog *cove_privatechat)
    {
        cove_privatechat->setWindowTitle(QApplication::translate("cove_privatechat", "Cove Client", 0));
        pushButton_ChatOptions->setText(QApplication::translate("cove_privatechat", "chat options", 0));
        pushButton_Send->setText(QApplication::translate("cove_privatechat", "Send", 0));
        pushButton_TextOptions->setText(QApplication::translate("cove_privatechat", "text options", 0));
        pushButton_Insert->setText(QApplication::translate("cove_privatechat", "Insert", 0));
        pushButton_dotdotdot->setText(QApplication::translate("cove_privatechat", "...", 0));

        const bool __sortingEnabled = listWidget_UserDisplay->isSortingEnabled();
        listWidget_UserDisplay->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_UserDisplay->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("cove_privatechat", "Current User List", 0));
        listWidget_UserDisplay->setSortingEnabled(__sortingEnabled);

        textBrowser_ChatDisplay->setHtml(QApplication::translate("cove_privatechat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class cove_privatechat: public Ui_cove_privatechat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVE_PRIVATECHAT_H
