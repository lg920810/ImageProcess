/****************************************************************************
** Meta object code from reading C++ file 'NostalgicEffectProperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NostalgicEffectProperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NostalgicEffectProperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NostalgicEffectProperty_t {
    QByteArrayData data[8];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NostalgicEffectProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NostalgicEffectProperty_t qt_meta_stringdata_NostalgicEffectProperty = {
    {
QT_MOC_LITERAL(0, 0, 23), // "NostalgicEffectProperty"
QT_MOC_LITERAL(1, 24, 10), // "SendCancel"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "SendOK"
QT_MOC_LITERAL(4, 43, 15), // "ContrastChanged"
QT_MOC_LITERAL(5, 59, 8), // "OnCancel"
QT_MOC_LITERAL(6, 68, 4), // "OnOK"
QT_MOC_LITERAL(7, 73, 10) // "OnResetBtn"

    },
    "NostalgicEffectProperty\0SendCancel\0\0"
    "SendOK\0ContrastChanged\0OnCancel\0OnOK\0"
    "OnResetBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NostalgicEffectProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NostalgicEffectProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NostalgicEffectProperty *_t = static_cast<NostalgicEffectProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendCancel(); break;
        case 1: _t->SendOK(); break;
        case 2: _t->ContrastChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnCancel(); break;
        case 4: _t->OnOK(); break;
        case 5: _t->OnResetBtn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NostalgicEffectProperty::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NostalgicEffectProperty::SendCancel)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NostalgicEffectProperty::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NostalgicEffectProperty::SendOK)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject NostalgicEffectProperty::staticMetaObject = {
    { &AlgorithmProperty::staticMetaObject, qt_meta_stringdata_NostalgicEffectProperty.data,
      qt_meta_data_NostalgicEffectProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NostalgicEffectProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NostalgicEffectProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NostalgicEffectProperty.stringdata0))
        return static_cast<void*>(const_cast< NostalgicEffectProperty*>(this));
    return AlgorithmProperty::qt_metacast(_clname);
}

int NostalgicEffectProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AlgorithmProperty::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NostalgicEffectProperty::SendCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NostalgicEffectProperty::SendOK()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
