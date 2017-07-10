/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../progetto_p2/GUI/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 8), // "closeReg"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "SessoM"
QT_MOC_LITERAL(4, 26, 6), // "SessoD"
QT_MOC_LITERAL(5, 33, 10), // "tornaAdmin"
QT_MOC_LITERAL(6, 44, 6), // "vaiApp"
QT_MOC_LITERAL(7, 51, 18), // "on_bambino_clicked"
QT_MOC_LITERAL(8, 70, 22), // "on_adolescente_clicked"
QT_MOC_LITERAL(9, 93, 17) // "on_adulto_clicked"

    },
    "Register\0closeReg\0\0SessoM\0SessoD\0"
    "tornaAdmin\0vaiApp\0on_bambino_clicked\0"
    "on_adolescente_clicked\0on_adulto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Register *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeReg(); break;
        case 1: _t->SessoM(); break;
        case 2: _t->SessoD(); break;
        case 3: _t->tornaAdmin(); break;
        case 4: _t->vaiApp(); break;
        case 5: _t->on_bambino_clicked(); break;
        case 6: _t->on_adolescente_clicked(); break;
        case 7: _t->on_adulto_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Register::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Register::closeReg)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Register::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Register.data,
      qt_meta_data_Register,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(const_cast< Register*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Register::closeReg()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
