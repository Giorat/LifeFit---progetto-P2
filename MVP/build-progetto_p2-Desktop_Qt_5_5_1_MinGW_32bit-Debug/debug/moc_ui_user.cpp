/****************************************************************************
** Meta object code from reading C++ file 'ui_user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../progetto_p2/GUI/ui_user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiUser_t {
    QByteArrayData data[17];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiUser_t qt_meta_stringdata_UiUser = {
    {
QT_MOC_LITERAL(0, 0, 6), // "UiUser"
QT_MOC_LITERAL(1, 7, 15), // "vaiImpostazioni"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "vaiLogout"
QT_MOC_LITERAL(4, 34, 16), // "caricaDatiFitXml"
QT_MOC_LITERAL(5, 51, 10), // "loadGiorno"
QT_MOC_LITERAL(6, 62, 19), // "on_saveUser_clicked"
QT_MOC_LITERAL(7, 82, 15), // "on_uomo_clicked"
QT_MOC_LITERAL(8, 98, 16), // "on_donna_clicked"
QT_MOC_LITERAL(9, 115, 36), // "on_calendarWidget_currentPage..."
QT_MOC_LITERAL(10, 152, 4), // "year"
QT_MOC_LITERAL(11, 157, 5), // "month"
QT_MOC_LITERAL(12, 163, 25), // "on_elimina_utente_clicked"
QT_MOC_LITERAL(13, 189, 25), // "on_elimina_giorno_clicked"
QT_MOC_LITERAL(14, 215, 18), // "on_bambino_clicked"
QT_MOC_LITERAL(15, 234, 22), // "on_adolescente_clicked"
QT_MOC_LITERAL(16, 257, 17) // "on_adulto_clicked"

    },
    "UiUser\0vaiImpostazioni\0\0vaiLogout\0"
    "caricaDatiFitXml\0loadGiorno\0"
    "on_saveUser_clicked\0on_uomo_clicked\0"
    "on_donna_clicked\0on_calendarWidget_currentPageChanged\0"
    "year\0month\0on_elimina_utente_clicked\0"
    "on_elimina_giorno_clicked\0on_bambino_clicked\0"
    "on_adolescente_clicked\0on_adulto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    2,   88,    2, 0x08 /* Private */,
      12,    0,   93,    2, 0x08 /* Private */,
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiUser *_t = static_cast<UiUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vaiImpostazioni(); break;
        case 1: _t->vaiLogout(); break;
        case 2: _t->caricaDatiFitXml(); break;
        case 3: _t->loadGiorno((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->on_saveUser_clicked(); break;
        case 5: _t->on_uomo_clicked(); break;
        case 6: _t->on_donna_clicked(); break;
        case 7: _t->on_calendarWidget_currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_elimina_utente_clicked(); break;
        case 9: _t->on_elimina_giorno_clicked(); break;
        case 10: _t->on_bambino_clicked(); break;
        case 11: _t->on_adolescente_clicked(); break;
        case 12: _t->on_adulto_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject UiUser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UiUser.data,
      qt_meta_data_UiUser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiUser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiUser.stringdata0))
        return static_cast<void*>(const_cast< UiUser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UiUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
