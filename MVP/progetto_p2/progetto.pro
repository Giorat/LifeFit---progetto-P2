#-------------------------------------------------
#
# Project created by Riccardo Emanuele Giorato 1122158
#
#-------------------------------------------------

TARGET = progetto_p2
TEMPLATE = app

QT += core gui
QT += xml

CONFIG += c++11
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Input
HEADERS += GUI/circularprogress.h \
           GUI/friend_label.h \
           GUI/loginform.h \
           GUI/register.h \
           GUI/ui_admin.h \
           GUI/ui_user.h \
           GUI/utenteitem.h \
           MODEL/adolescente.h \
           MODEL/adulto.h \
           MODEL/att_base.h \
           MODEL/att_mov.h \
           MODEL/att_sonno.h \
           MODEL/bambino.h \
           MODEL/giorno.h \
           MODEL/iofit.h \
           MODEL/orario.h \
           MODEL/utente.h
FORMS += GUI/loginform.ui \
         GUI/register.ui \
         GUI/ui_admin.ui \
         GUI/ui_user.ui \
         GUI/utenteitem.ui
SOURCES += main.cpp \
           GUI/circularprogress.cpp \
           GUI/friend_label.cpp \
           GUI/loginform.cpp \
           GUI/register.cpp \
           GUI/ui_admin.cpp \
           GUI/ui_user.cpp \
           GUI/utenteitem.cpp \
           MODEL/adolescente.cpp \
           MODEL/adulto.cpp \
           MODEL/att_base.cpp \
           MODEL/att_mov.cpp \
           MODEL/att_sonno.cpp \
           MODEL/bambino.cpp \
           MODEL/giorno.cpp \
           MODEL/iofit.cpp \
           MODEL/orario.cpp \
           MODEL/utente.cpp
RESOURCES += GUI/settings_icon.qrc
