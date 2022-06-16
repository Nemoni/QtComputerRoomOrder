/****************************************************************************
** Meta object code from reading C++ file 'UiMgAcountCreate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UiMgAcountCreate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UiMgAcountCreate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiMgAcountCreate_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiMgAcountCreate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiMgAcountCreate_t qt_meta_stringdata_UiMgAcountCreate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UiMgAcountCreate"
QT_MOC_LITERAL(1, 17, 14), // "signalLoginout"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "setLabelHint"
QT_MOC_LITERAL(4, 46, 4), // "text"
QT_MOC_LITERAL(5, 51, 19), // "onClickButtonCreate"
QT_MOC_LITERAL(6, 71, 17) // "onClickButtonBack"

    },
    "UiMgAcountCreate\0signalLoginout\0\0"
    "setLabelHint\0text\0onClickButtonCreate\0"
    "onClickButtonBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiMgAcountCreate[] = {

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
       3,    1,   35,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiMgAcountCreate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiMgAcountCreate *_t = static_cast<UiMgAcountCreate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLoginout(); break;
        case 1: _t->setLabelHint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->onClickButtonCreate(); break;
        case 3: _t->onClickButtonBack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UiMgAcountCreate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UiMgAcountCreate::signalLoginout)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UiMgAcountCreate::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiMgAcountCreate.data,
      qt_meta_data_UiMgAcountCreate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiMgAcountCreate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiMgAcountCreate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiMgAcountCreate.stringdata0))
        return static_cast<void*>(const_cast< UiMgAcountCreate*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiMgAcountCreate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UiMgAcountCreate::signalLoginout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
