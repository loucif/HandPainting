/****************************************************************************
** Meta object code from reading C++ file 'DialogColorRed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogColorRed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogColorRed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogColorRed_t {
    QByteArrayData data[9];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogColorRed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogColorRed_t qt_meta_stringdata_DialogColorRed = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DialogColorRed"
QT_MOC_LITERAL(1, 15, 9), // "valueHmin"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "val"
QT_MOC_LITERAL(4, 30, 9), // "valueSmin"
QT_MOC_LITERAL(5, 40, 9), // "valueVmin"
QT_MOC_LITERAL(6, 50, 9), // "valueHmax"
QT_MOC_LITERAL(7, 60, 9), // "valueVmax"
QT_MOC_LITERAL(8, 70, 9) // "valueSmax"

    },
    "DialogColorRed\0valueHmin\0\0val\0valueSmin\0"
    "valueVmin\0valueHmax\0valueVmax\0valueSmax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogColorRed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void DialogColorRed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogColorRed *_t = static_cast<DialogColorRed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueHmin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueSmin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->valueVmin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->valueHmax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->valueVmax((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->valueSmax((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogColorRed::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogColorRed.data,
      qt_meta_data_DialogColorRed,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogColorRed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogColorRed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogColorRed.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogColorRed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
