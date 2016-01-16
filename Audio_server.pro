#-------------------------------------------------
#
# Project created by QtCreator 2015-10-01T16:07:58
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = Audio_server
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    myserver.cpp \
    client.cpp

HEADERS += \
    myserver.h \
    client.h
