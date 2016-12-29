QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TEMPLATE = app
CONFIG += console c++11
#CONFIG -= app_bundle
#CONFIG -= qt

SOURCES += main.cpp \
    intervallo_tempo.cpp \
    giorno.cpp \
    orario.cpp \
    date.cpp \
    att_base.cpp \
    att_mov.cpp \
    att_sonno.cpp

HEADERS += \
    intervallo_tempo.h \
    giorno.h \
    orario.h \
    date.h \
    att_base.h \
    att_mov.h \
    att_sonno.h
