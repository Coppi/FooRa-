#-------------------------------------------------
#
# Project created by QtCreator 2018-10-30T20:17:02
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FooRa
TEMPLATE = app

LIBS += -lsqlite3

SOURCES  += main.cpp\
            mainwindow.cpp \
            db/database.cpp

HEADERS  += mainwindow.h \
            db/database.h

FORMS    += mainwindow.ui \
            adduser.ui
