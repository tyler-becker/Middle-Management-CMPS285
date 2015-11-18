#-------------------------------------------------
#
# Project created by QtCreator 2015-11-14T13:58:42
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChatClient
TEMPLATE = app


SOURCES += main.cpp\
        chatlogin.cpp \
    chatmenu.cpp \
    chatclient.cpp \
    chataccountcreate.cpp

HEADERS  += chatlogin.h \
    chatmenu.h \
    chatclient.h \
    chataccountcreate.h

FORMS    += chatlogin.ui \
    chatmenu.ui \
    chatclient.ui \
    chataccountcreate.ui
