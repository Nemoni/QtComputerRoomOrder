/****************************************************************************
** Meta object code from reading C++ file 'UiStudentOrder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UiStudentOrder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UiStudentOrder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiStudentOrder_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiStudentOrder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiStudentOrder_t qt_meta_stringdata_UiStudentOrder = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UiStudentOrder"
QT_MOC_LITERAL(1, 15, 14), // "signalLoginout"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "onClickButtonConfirm"
QT_MOC_LITERAL(4, 52, 19), // "onClickButtonCancel"
QT_MOC_LITERAL(5, 72, 18), // "onChangedCbBoxRoom"
QT_MOC_LITERAL(6, 91, 5) // "index"

    },
    "UiStudentOrder\0signalLoginout\0\0"
    "onClickButtonConfirm\0onClickButtonCancel\0"
    "onChangedCbBoxRoom\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiStudentOrder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void UiStudentOrder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiStudentOrder *_t = static_cast<UiStudentOrder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLoginout(); break;
        case 1: _t->onClickButtonConfirm(); break;
        case 2: _t->onClickButtonCancel(); break;
        case 3: _t->onChangedCbBoxRoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UiStudentOrder::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiStudentOrder::signalLoginout)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UiStudentOrder::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiStudentOrder.data,
      qt_meta_data_UiStudentOrder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiStudentOrder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiStudentOrder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiStudentOrder.stringdata0))
        return static_cast<void*>(const_cast< UiStudentOrder*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiStudentOrder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UiStudentOrder::signalLoginout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
