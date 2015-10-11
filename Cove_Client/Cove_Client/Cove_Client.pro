#-------------------------------------------------
#
# Project created by QtCreator 2015-09-25T00:22:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cove_Client
TEMPLATE = app

SOURCES += main.cpp\
    cove_login.cpp \
    cove_menu.cpp \
    cove_account.cpp \
    cove_chat.cpp

HEADERS  += \
    cove_login.h \
    cove_menu.h \
    cove_account.h \
    cove_chat.h

FORMS    += \
    cove_login.ui \
    cove_menu.ui \
    cove_account.ui \
    cove_chat.ui

DISTFILES += \
    Cove_Client_Icon.rc.txt \
    Cove_Client_Icon.ico \
    SmallDino.PNG \
    LargerDino.png

RESOURCES += \
    icon.qrc
