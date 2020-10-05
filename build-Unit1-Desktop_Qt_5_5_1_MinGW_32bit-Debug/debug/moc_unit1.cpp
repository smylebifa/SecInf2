/****************************************************************************
** Meta object code from reading C++ file 'unit1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab2/unit1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unit1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Unit1_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Unit1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Unit1_t qt_meta_stringdata_Unit1 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Unit1"
QT_MOC_LITERAL(1, 6, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "checkAdmin"
QT_MOC_LITERAL(4, 40, 14), // "changePassword"
QT_MOC_LITERAL(5, 55, 7), // "addUser"
QT_MOC_LITERAL(6, 63, 9), // "editUsers"
QT_MOC_LITERAL(7, 73, 5), // "about"
QT_MOC_LITERAL(8, 79, 10), // "decryption"
QT_MOC_LITERAL(9, 90, 10) // "passPhrase"

    },
    "Unit1\0on_pushButton_clicked\0\0checkAdmin\0"
    "changePassword\0addUser\0editUsers\0about\0"
    "decryption\0passPhrase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Unit1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Unit1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Unit1 *_t = static_cast<Unit1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->checkAdmin(); break;
        case 2: _t->changePassword(); break;
        case 3: _t->addUser(); break;
        case 4: _t->editUsers(); break;
        case 5: _t->about(); break;
        case 6: _t->decryption(); break;
        case 7: _t->passPhrase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Unit1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Unit1.data,
      qt_meta_data_Unit1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Unit1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Unit1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Unit1.stringdata0))
        return static_cast<void*>(const_cast< Unit1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Unit1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
