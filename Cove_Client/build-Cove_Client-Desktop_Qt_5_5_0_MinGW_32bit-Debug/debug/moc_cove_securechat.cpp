/****************************************************************************
** Meta object code from reading C++ file 'cove_securechat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cove_Client/cove_securechat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cove_securechat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cove_securechat_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cove_securechat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cove_securechat_t qt_meta_stringdata_cove_securechat = {
    {
QT_MOC_LITERAL(0, 0, 15), // "cove_securechat"
QT_MOC_LITERAL(1, 16, 26), // "on_pushButton_Send_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "displayInputMessage"
QT_MOC_LITERAL(4, 64, 11), // "eventFilter"
QT_MOC_LITERAL(5, 76, 6), // "object"
QT_MOC_LITERAL(6, 83, 7), // "QEvent*"
QT_MOC_LITERAL(7, 91, 5) // "event"

    },
    "cove_securechat\0on_pushButton_Send_clicked\0"
    "\0displayInputMessage\0eventFilter\0"
    "object\0QEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cove_securechat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 6,    5,    7,

       0        // eod
};

void cove_securechat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cove_securechat *_t = static_cast<cove_securechat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Send_clicked(); break;
        case 1: _t->displayInputMessage(); break;
        case 2: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject cove_securechat::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cove_securechat.data,
      qt_meta_data_cove_securechat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cove_securechat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cove_securechat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cove_securechat.stringdata0))
        return static_cast<void*>(const_cast< cove_securechat*>(this));
    return QDialog::qt_metacast(_clname);
}

int cove_securechat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
