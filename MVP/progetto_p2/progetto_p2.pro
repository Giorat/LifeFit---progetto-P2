#-------------------------------------------------
#
# Project created by Riccardo Emanuele Giorato 1122158
#
#-------------------------------------------------

QT += core gui
QT += xml

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11 -fno-elide-constructors

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = progetto_p2
TEMPLATE = app

SOURCES +=main.cpp\
    GUI/ui_user.cpp \
    MODEL/att_base.cpp \
    MODEL/att_mov.cpp \
    MODEL/att_sonno.cpp \
    GUI/circularprogress.cpp \
    GUI/friend_label.cpp \
    MODEL/giorno.cpp \
    MODEL/iofit.cpp \
    GUI/loginform.cpp \
    MODEL/orario.cpp \
    GUI/register.cpp \
    MODEL/utente.cpp \
    MODEL/bambino.cpp \
    MODEL/adolescente.cpp \
    MODEL/adulto.cpp \
    GUI/ui_admin.cpp \
    GUI/utenteitem.cpp

HEADERS  +=GUI/ui_user.h \
    MODEL/att_base.h \
    MODEL/att_mov.h \
    MODEL/att_sonno.h \
    GUI/circularprogress.h \
    GUI/friend_label.h \
    MODEL/giorno.h \
    MODEL/iofit.h \
    GUI/loginform.h \
    MODEL/orario.h \
    GUI/register.h \
    MODEL/utente.h \
    MODEL/bambino.h \
    MODEL/adolescente.h \
    MODEL/adulto.h \
    GUI/ui_admin.h \
    GUI/utenteitem.h

RESOURCES += GUI/settings_icon.qrc

FORMS += GUI/loginform.ui \
    GUI/ui_user.ui \
    GUI/register.ui \
    GUI/ui_admin.ui \
    GUI/utenteitem.ui

DISTFILES +=
