/****************************************************************************
** Meta object code from reading C++ file 'qledlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Scada_GUI_V3/qledlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qledlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLedLabel_t {
    QByteArrayData data[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLedLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLedLabel_t qt_meta_stringdata_QLedLabel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QLedLabel"
QT_MOC_LITERAL(1, 10, 16), // "labelTextChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "text"
QT_MOC_LITERAL(4, 33, 19), // "defaultStateChanged"
QT_MOC_LITERAL(5, 53, 5), // "state"
QT_MOC_LITERAL(6, 59, 8), // "setState"
QT_MOC_LITERAL(7, 68, 5), // "State"
QT_MOC_LITERAL(8, 74, 9), // "labelText"
QT_MOC_LITERAL(9, 84, 12), // "defaultState"
QT_MOC_LITERAL(10, 97, 7), // "StateOk"
QT_MOC_LITERAL(11, 105, 11), // "StateOkBlue"
QT_MOC_LITERAL(12, 117, 12), // "StateWarning"
QT_MOC_LITERAL(13, 130, 10) // "StateError"

    },
    "QLedLabel\0labelTextChanged\0\0text\0"
    "defaultStateChanged\0state\0setState\0"
    "State\0labelText\0defaultState\0StateOk\0"
    "StateOkBlue\0StateWarning\0StateError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLedLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    4,   59,

 // enum data: key, value
      10, uint(QLedLabel::StateOk),
      11, uint(QLedLabel::StateOkBlue),
      12, uint(QLedLabel::StateWarning),
      13, uint(QLedLabel::StateError),

       0        // eod
};

void QLedLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QLedLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->labelTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->defaultStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setState((*reinterpret_cast< State(*)>(_a[1]))); break;
        case 3: _t->setState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QLedLabel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLedLabel::labelTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QLedLabel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLedLabel::defaultStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QLedLabel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->labelText(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->defaultState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QLedLabel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabelText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDefaultState(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QLedLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QLedLabel.data,
    qt_meta_data_QLedLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QLedLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLedLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QLedLabel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QLedLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QLedLabel::labelTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLedLabel::defaultStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
