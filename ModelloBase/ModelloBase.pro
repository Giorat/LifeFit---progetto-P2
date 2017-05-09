QT += core gui
QT += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TEMPLATE = app
CONFIG += console c++11
#CONFIG -= app_bundle
#CONFIG -= qt

SOURCES += main.cpp \
    giorno.cpp \
    orario.cpp \
    att_base.cpp \
    att_mov.cpp \
    att_sonno.cpp \
    utente.cpp \
    admin.cpp \
    iofit.cpp \
    admin_iofit.cpp

HEADERS += \
    giorno.h \
    orario.h \
    att_base.h \
    att_mov.h \
    att_sonno.h \
    utente.h \
    admin.h \
    iofit.h \
    admin_iofit.h
