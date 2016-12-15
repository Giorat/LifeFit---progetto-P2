TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    intervallo_tempo.cpp \
    giorno.cpp \
    orario.cpp \
    date.cpp

HEADERS += \
    intervallo_tempo.h \
    giorno.h \
    orario.h \
    date.h
