/****************************************************************************
** Meta object code from reading C++ file 'trighelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TrigHelper/trighelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trighelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrigHelper_t {
    QByteArrayData data[10];
    char stringdata[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrigHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrigHelper_t qt_meta_stringdata_TrigHelper = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TrigHelper"
QT_MOC_LITERAL(1, 11, 28), // "on_a_display_editingFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 28), // "on_b_display_editingFinished"
QT_MOC_LITERAL(4, 70, 28), // "on_c_display_editingFinished"
QT_MOC_LITERAL(5, 99, 29), // "on_a1_display_editingFinished"
QT_MOC_LITERAL(6, 129, 29), // "on_b1_display_editingFinished"
QT_MOC_LITERAL(7, 159, 28), // "on_h_display_editingFinished"
QT_MOC_LITERAL(8, 188, 32), // "on_alpha_display_editingFinished"
QT_MOC_LITERAL(9, 221, 31) // "on_beta_display_editingFinished"

    },
    "TrigHelper\0on_a_display_editingFinished\0"
    "\0on_b_display_editingFinished\0"
    "on_c_display_editingFinished\0"
    "on_a1_display_editingFinished\0"
    "on_b1_display_editingFinished\0"
    "on_h_display_editingFinished\0"
    "on_alpha_display_editingFinished\0"
    "on_beta_display_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrigHelper[] = {

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

void TrigHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrigHelper *_t = static_cast<TrigHelper *>(_o);
        switch (_id) {
        case 0: _t->on_a_display_editingFinished(); break;
        case 1: _t->on_b_display_editingFinished(); break;
        case 2: _t->on_c_display_editingFinished(); break;
        case 3: _t->on_a1_display_editingFinished(); break;
        case 4: _t->on_b1_display_editingFinished(); break;
        case 5: _t->on_h_display_editingFinished(); break;
        case 6: _t->on_alpha_display_editingFinished(); break;
        case 7: _t->on_beta_display_editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TrigHelper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TrigHelper.data,
      qt_meta_data_TrigHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrigHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrigHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrigHelper.stringdata))
        return static_cast<void*>(const_cast< TrigHelper*>(this));
    return QWidget::qt_metacast(_clname);
}

int TrigHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
