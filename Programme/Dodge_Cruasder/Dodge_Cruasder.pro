#-------------------------------------------------
#
# Project created by QtCreator 2019-11-08T09:26:09
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Dodge_Cruasder
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    gameover.cpp\
    game.cpp \
    send_win.cpp

HEADERS += \
        mainwindow.h \
    gameover.h \
    game.h \
    send_win.h

FORMS += \
        mainwindow.ui \
    gameover.ui \
    game.ui

QT += widgets network
DEPENDPATH += .
INCLUDEPATH += .

# Input
# HEADERS += FenServeur.h
# SOURCES += FenServeur.cpp main.cpp

DISTFILES += \
    Images/Asteroid.png \
    Images/BackGroundGame.png \
    Images/GO_BG.jpg \
    Images/M_BG.jpg \
    Images/Hero.png \
    Images/Hero2.png
