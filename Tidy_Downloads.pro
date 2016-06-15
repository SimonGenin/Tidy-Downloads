#-------------------------------------------------
#
# Project created by QtCreator 2016-06-15T15:41:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tidy_Downloads
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tidyfolder.cpp \
    tidyrules.cpp \
    tidyconfigfile.cpp

HEADERS  += mainwindow.h \
    tidyfolder.h \
    tidyrules.h \
    tidyconfigfile.h

FORMS    += mainwindow.ui

DISTFILES += \
    ideas.txt
