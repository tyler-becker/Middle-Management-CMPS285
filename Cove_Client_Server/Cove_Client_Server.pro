QT += core network
QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cove_Client_Server
CONFIG += console
TEMPLATE = app

HEADERS += cove_server.h
SOURCES += cove_server.cpp main.cpp

DEPENDPATH += .
INCLUDEPATH += .
