#-------------------------------------------------
#
# Project created by QtCreator 2018-10-30T20:17:02
#
#-------------------------------------------------

QT       += core gui sql

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FooRa
TEMPLATE = app

#LIBS += -lsqlite3

SOURCES  += main.cpp\
            mainwindow.cpp \
            db/database.cpp \
    user.cpp \
    db/dbuser.cpp

HEADERS  += mainwindow.h \
            db/database.h \
    user.h \
    db/dbuser.h

FORMS    += mainwindow.ui \
            adduser.ui \
            addmatch.ui
