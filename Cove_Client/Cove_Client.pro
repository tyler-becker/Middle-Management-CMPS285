#-------------------------------------------------
#
# Project created by QtCreator 2015-09-25T00:22:20
#
#-------------------------------------------------

QT += core gui sql
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cove_Client
TEMPLATE = app

SOURCES += main.cpp\
    cove_login.cpp \
    cove_menu.cpp \
    cove_generalchat.cpp \
    cove_securechat.cpp \
    cove_privatechat.cpp \
    cove_madeaccount.cpp \
    cove_createchat.cpp \
    cove_createaccount.cpp \
    cove_account.cpp \
    cove_securechatlogin.cpp

HEADERS += \
    cove_login.h \
    cove_menu.h \
    cove_generalchat.h \
    cove_securechat.h \
    cove_privatechat.h \
    cove_madeaccount.h \
    cove_createchat.h \
    cove_createaccount.h \
    cove_account.h \
    cove_securechatlogin.h

FORMS += \
    cove_login.ui \
    cove_menu.ui \
    cove_generalchat.ui \
    cove_securechat.ui \
    cove_privatechat.ui \
    cove_madeaccount.ui \
    cove_createchat.ui \
    cove_createaccount.ui \
    cove_account.ui \
    cove_securechatlogin.ui

DISTFILES += \
    Cove_Client_Icon.rc.txt \
    Cove_Client_Icon.ico \
    SmallDino.PNG \
    LargerDino.png

RESOURCES += \
    icon.qrc
