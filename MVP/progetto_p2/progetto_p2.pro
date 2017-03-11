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
        mainwindow.cpp \
    admin.cpp \
    admin_iofit.cpp \
    att_base.cpp \
    att_mov.cpp \
    att_sonno.cpp \
    circularprogress.cpp \
    friend_label.cpp \
    giorno.cpp \
    iofit.cpp \
    loginform.cpp \
    orario.cpp \
    register.cpp \
    utente.cpp

HEADERS  += mainwindow.h \
    admin.h \
    admin_iofit.h \
    att_base.h \
    att_mov.h \
    att_sonno.h \
    attivita_base.h \
    circularprogress.h \
    friend_label.h \
    giorno.h \
    iofit.h \
    loginform.h \
    orario.h \
    register.h \
    utente.h

RESOURCES += \
    settings_icon.qrc

FORMS += \
    loginform.ui \
    mainwindow.ui \
    register.ui

DISTFILES +=
