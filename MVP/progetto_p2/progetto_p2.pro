#-------------------------------------------------
#
# Project created by QtCreator 2017-03-06T12:39:32
#
#-------------------------------------------------

QT       += core gui
QT += xml

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = progetto_p2
TEMPLATE = app


SOURCES += main.cpp\
        GUI\mainwindow.cpp \
    MODEL\admin.cpp \
    MODEL\admin_iofit.cpp \
    MODEL\att_base.cpp \
    MODEL\att_mov.cpp \
    MODEL\att_sonno.cpp \
    GUI\circularprogress.cpp \
    GUI\friend_label.cpp \
    MODEL\giorno.cpp \
    MODEL\iofit.cpp \
    GUI\loginform.cpp \
    MODEL\orario.cpp \
    GUI\register.cpp \
    MODEL\utente.cpp

HEADERS  += GUI\mainwindow.h \
    MODEL\admin.h \
    MODEL\admin_iofit.h \
    MODEL\att_base.h \
    MODEL\att_mov.h \
    MODEL\att_sonno.h \
    MODEL\attivita_base.h \
    GUI\circularprogress.h \
    GUI\friend_label.h \
    MODEL\giorno.h \
    MODEL\iofit.h \
    GUI\loginform.h \
    MODEL\orario.h \
    GUI\register.h \
    MODEL\utente.h

RESOURCES += \
    GUI\settings_icon.qrc

FORMS += \
    GUI\loginform.ui \
    GUI\mainwindow.ui \
    GUI\register.ui

DISTFILES +=