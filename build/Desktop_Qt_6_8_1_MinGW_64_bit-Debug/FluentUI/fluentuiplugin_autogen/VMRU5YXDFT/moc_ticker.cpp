/****************************************************************************
** Meta object code from reading C++ file 'ticker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FluentUI/qmlcustomplot/ticker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ticker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14QmlQCustomPlot6TickerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QmlQCustomPlot6TickerE = QtMocHelpers::stringData(
    "QmlQCustomPlot::Ticker",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "",
    "ticksChanged",
    "subTicksChanged",
    "tickCountChanged",
    "baseWidthChanged",
    "baseColorChanged",
    "tickColorChanged",
    "subTickColorChanged",
    "ticks",
    "subTicks",
    "tickCount",
    "baseWidth",
    "baseColor",
    "tickColor",
    "subTickColor"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QmlQCustomPlot6TickerE[] = {

 // content:
      12,       // revision
       0,       // classname
       3,   14, // classinfo
       7,   20, // methods
       7,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   62,    6, 0x06,    8 /* Public */,
       8,    1,   65,    6, 0x06,   10 /* Public */,
       9,    1,   68,    6, 0x06,   12 /* Public */,
      10,    1,   71,    6, 0x06,   14 /* Public */,
      11,    1,   74,    6, 0x06,   16 /* Public */,
      12,    1,   77,    6, 0x06,   18 /* Public */,
      13,    1,   80,    6, 0x06,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::QColor,    6,

 // properties: name, type, flags, notifyId, revision
      14, QMetaType::Bool, 0x00015003, uint(0), 0,
      15, QMetaType::Bool, 0x00015003, uint(1), 0,
      16, QMetaType::Int, 0x00015003, uint(2), 0,
      17, QMetaType::Int, 0x00015003, uint(3), 0,
      18, QMetaType::QColor, 0x00015003, uint(4), 0,
      19, QMetaType::QColor, 0x00015003, uint(5), 0,
      20, QMetaType::QColor, 0x00015003, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QmlQCustomPlot::Ticker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN14QmlQCustomPlot6TickerE.offsetsAndSizes,
    qt_meta_data_ZN14QmlQCustomPlot6TickerE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'ticks'
        bool,
        // property 'subTicks'
        bool,
        // property 'tickCount'
        int,
        // property 'baseWidth'
        int,
        // property 'baseColor'
        QColor,
        // property 'tickColor'
        QColor,
        // property 'subTickColor'
        QColor,
        // Q_OBJECT / Q_GADGET
        Ticker,
        // method 'ticksChanged'
        void,
        bool,
        // method 'subTicksChanged'
        void,
        bool,
        // method 'tickCountChanged'
        void,
        int,
        // method 'baseWidthChanged'
        void,
        int,
        // method 'baseColorChanged'
        void,
        QColor,
        // method 'tickColorChanged'
        void,
        QColor,
        // method 'subTickColorChanged'
        void,
        QColor
    >,
    nullptr
} };

void QmlQCustomPlot::Ticker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Ticker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ticksChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->subTicksChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->tickCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->baseWidthChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->baseColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 5: _t->tickColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 6: _t->subTickColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Ticker::*)(bool );
            if (_q_method_type _q_method = &Ticker::ticksChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Ticker::*)(bool );
            if (_q_method_type _q_method = &Ticker::subTicksChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Ticker::*)(int );
            if (_q_method_type _q_method = &Ticker::tickCountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Ticker::*)(int );
            if (_q_method_type _q_method = &Ticker::baseWidthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Ticker::*)(QColor );
            if (_q_method_type _q_method = &Ticker::baseColorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Ticker::*)(QColor );
            if (_q_method_type _q_method = &Ticker::tickColorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Ticker::*)(QColor );
            if (_q_method_type _q_method = &Ticker::subTickColorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->ticks(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->subTicks(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->tickCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->baseWidth(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->baseColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->tickColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->subTickColor(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_ticks(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->set_subTicks(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_tickCount(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->set_baseWidth(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->set_baseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->set_tickColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->set_subTickColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlQCustomPlot::Ticker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlQCustomPlot::Ticker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QmlQCustomPlot6TickerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlQCustomPlot::Ticker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QmlQCustomPlot::Ticker::ticksChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlQCustomPlot::Ticker::subTicksChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlQCustomPlot::Ticker::tickCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlQCustomPlot::Ticker::baseWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlQCustomPlot::Ticker::baseColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlQCustomPlot::Ticker::tickColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QmlQCustomPlot::Ticker::subTickColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
