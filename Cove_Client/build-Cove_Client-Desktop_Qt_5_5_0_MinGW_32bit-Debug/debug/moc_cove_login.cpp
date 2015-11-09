/****************************************************************************
** Meta object code from reading C++ file 'cove_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cove_Client/cove_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cove_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cove_login_t {
    QByteArrayData data[14];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cove_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cove_login_t qt_meta_stringdata_cove_login = {
    {
QT_MOC_LITERAL(0, 0, 10), // "cove_login"
QT_MOC_LITERAL(1, 11, 27), // "on_pushButton_LogIn_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 35), // "on_pushButton_CreateAccount_c..."
QT_MOC_LITERAL(4, 76, 10), // "clearLogin"
QT_MOC_LITERAL(5, 87, 5), // "login"
QT_MOC_LITERAL(6, 93, 11), // "eventFilter"
QT_MOC_LITERAL(7, 105, 6), // "object"
QT_MOC_LITERAL(8, 112, 7), // "QEvent*"
QT_MOC_LITERAL(9, 120, 5), // "event"
QT_MOC_LITERAL(10, 126, 13), // "validUsername"
QT_MOC_LITERAL(11, 140, 13), // "validPassword"
QT_MOC_LITERAL(12, 154, 20), // "standardLEStyleSheet"
QT_MOC_LITERAL(13, 175, 17) // "errorLEStyleSheet"

    },
    "cove_login\0on_pushButton_LogIn_clicked\0"
    "\0on_pushButton_CreateAccount_clicked\0"
    "clearLogin\0login\0eventFilter\0object\0"
    "QEvent*\0event\0validUsername\0validPassword\0"
    "standardLEStyleSheet\0errorLEStyleSheet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cove_login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    2,   63,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 8,    7,    9,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void cove_login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cove_login *_t = static_cast<cove_login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_LogIn_clicked(); break;
        case 1: _t->on_pushButton_CreateAccount_clicked(); break;
        case 2: _t->clearLogin(); break;
        case 3: _t->login(); break;
        case 4: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->validUsername();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->validPassword();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->standardLEStyleSheet();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->errorLEStyleSheet();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject cove_login::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cove_login.data,
      qt_meta_data_cove_login,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cove_login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cove_login::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cove_login.stringdata0))
        return static_cast<void*>(const_cast< cove_login*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int cove_login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
