/****************************************************************************
** Meta object code from reading C++ file 'TimePlot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FluentUI/qmlcustomplot/TimePlot.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimePlot.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QmlQCustomPlot8TimePlotE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QmlQCustomPlot8TimePlotE = QtMocHelpers::stringData(
    "QmlQCustomPlot::TimePlot",
    "QML.Element",
    "auto",
    "plotTimeRangeInMillisecondsChanged",
    "",
    "setTimeFormat",
    "format",
    "addCurrentTimeValue",
    "name",
    "value",
    "addCurrentTimeValues",
    "QVariantMap",
    "values",
    "plotTimeRangeInMilliseconds"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QmlQCustomPlot8TimePlotE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   40,    4, 0x06,    2 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   43,    4, 0x02,    4 /* Public */,
       7,    2,   46,    4, 0x02,    6 /* Public */,
      10,    1,   51,    4, 0x02,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags, notifyId, revision
      13, QMetaType::Int, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QmlQCustomPlot::TimePlot::staticMetaObject = { {
    QMetaObject::SuperData::link<BasePlot::staticMetaObject>(),
    qt_meta_stringdata_ZN14QmlQCustomPlot8TimePlotE.offsetsAndSizes,
    qt_meta_data_ZN14QmlQCustomPlot8TimePlotE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'plotTimeRangeInMilliseconds'
        int,
        // Q_OBJECT / Q_GADGET
        TimePlot,
        // method 'plotTimeRangeInMillisecondsChanged'
        void,
        int,
        // method 'setTimeFormat'
        void,
        const QString &,
        // method 'addCurrentTimeValue'
        void,
        const QString &,
        double,
        // method 'addCurrentTimeValues'
        void,
        QVariantMap
    >,
    nullptr
} };

void QmlQCustomPlot::TimePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TimePlot *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->plotTimeRangeInMillisecondsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setTimeFormat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->addCurrentTimeValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->addCurrentTimeValues((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (TimePlot::*)(int );
            if (_q_method_type _q_method = &TimePlot::plotTimeRangeInMillisecondsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->plotTimeRangeInMilliseconds(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_plotTimeRangeInMilliseconds(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlQCustomPlot::TimePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlQCustomPlot::TimePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QmlQCustomPlot8TimePlotE.stringdata0))
        return static_cast<void*>(this);
    return BasePlot::qt_metacast(_clname);
}

int QmlQCustomPlot::TimePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QmlQCustomPlot::TimePlot::plotTimeRangeInMillisecondsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
