#-------------------------------------------------
#
# Project created by QtCreator 2017-01-04T16:16:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GuiBase
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    circularprogress.cpp \
    loginform.cpp \
    register.cpp

HEADERS  += mainwindow.h \
    circularprogress.h \
    loginform.h \
    register.h

FORMS    += mainwindow.ui \
    loginform.ui \
    register.ui

RESOURCES +=  settings_icon.qrc
