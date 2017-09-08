/****************************************************************************
** Meta object code from reading C++ file 'FilmTab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FilmTab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilmTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FilmTab_t {
    QByteArrayData data[6];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilmTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilmTab_t qt_meta_stringdata_FilmTab = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FilmTab"
QT_MOC_LITERAL(1, 8, 11), // "RecieveType"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "AlgorithmType"
QT_MOC_LITERAL(4, 35, 13), // "RecieveCancel"
QT_MOC_LITERAL(5, 49, 9) // "RecieveOK"

    },
    "FilmTab\0RecieveType\0\0AlgorithmType\0"
    "RecieveCancel\0RecieveOK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilmTab[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FilmTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilmTab *_t = static_cast<FilmTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RecieveType((*reinterpret_cast< AlgorithmType(*)>(_a[1]))); break;
        case 1: _t->RecieveCancel(); break;
        case 2: _t->RecieveOK(); break;
        default: ;
        }
    }
}

const QMetaObject FilmTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FilmTab.data,
      qt_meta_data_FilmTab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FilmTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilmTab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FilmTab.stringdata0))
        return static_cast<void*>(const_cast< FilmTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int FilmTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
