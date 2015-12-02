QT += core network
QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cove_Client_Server
CONFIG += console
TEMPLATE = app

HEADERS += cove_server.h \
    cove_privateserver.h \
    cove_secureserver.h
SOURCES += cove_server.cpp main.cpp \
    cove_privateserver.cpp \
    cove_secureserver.cpp

DEPENDPATH += .
INCLUDEPATH += .
