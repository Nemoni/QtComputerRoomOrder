/****************************************************************************
** Meta object code from reading C++ file 'QtGuiMain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiMain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiMain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtGuiMain_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGuiMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGuiMain_t qt_meta_stringdata_QtGuiMain = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QtGuiMain"
QT_MOC_LITERAL(1, 10, 12), // "onClickLogin"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "onClickQuit"
QT_MOC_LITERAL(4, 36, 22), // "comoBoxIdentityChanged"
QT_MOC_LITERAL(5, 59, 5), // "index"
QT_MOC_LITERAL(6, 65, 16), // "validateIdentity"
QT_MOC_LITERAL(7, 82, 2), // "id"
QT_MOC_LITERAL(8, 85, 3) // "pwd"

    },
    "QtGuiMain\0onClickLogin\0\0onClickQuit\0"
    "comoBoxIdentityChanged\0index\0"
    "validateIdentity\0id\0pwd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGuiMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       6,    2,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    7,    8,

       0        // eod
};

void QtGuiMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGuiMain *_t = static_cast<QtGuiMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClickLogin(); break;
        case 1: _t->onClickQuit(); break;
        case 2: _t->comoBoxIdentityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { bool _r = _t->validateIdentity((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QtGuiMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtGuiMain.data,
      qt_meta_data_QtGuiMain,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtGuiMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGuiMain::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtGuiMain.stringdata0))
        return static_cast<void*>(const_cast< QtGuiMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtGuiMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
