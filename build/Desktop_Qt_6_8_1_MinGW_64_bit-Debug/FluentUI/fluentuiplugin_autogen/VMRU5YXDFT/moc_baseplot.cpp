/****************************************************************************
** Meta object code from reading C++ file 'baseplot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FluentUI/qmlcustomplot/baseplot.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baseplot.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QmlQCustomPlot8BasePlotE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QmlQCustomPlot8BasePlotE = QtMocHelpers::stringData(
    "QmlQCustomPlot::BasePlot",
    "QML.Element",
    "auto",
    "backgroundColorChanged",
    "",
    "xAxisChanged",
    "QmlQCustomPlot::Axis*",
    "x1AxisChanged",
    "yAxisChanged",
    "y1AxisChanged",
    "graphsChanged",
    "addGraph",
    "key",
    "removeGraph",
    "rescaleAxes",
    "onlyVisiblePlottables",
    "backgroundColor",
    "xAxis",
    "x1Axis",
    "yAxis",
    "y1Axis",
    "graphs",
    "QVariantMap"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QmlQCustomPlot8BasePlotE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      10,   16, // methods
       6,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   76,    4, 0x06,    7 /* Public */,
       5,    1,   79,    4, 0x06,    9 /* Public */,
       7,    1,   82,    4, 0x06,   11 /* Public */,
       8,    1,   85,    4, 0x06,   13 /* Public */,
       9,    1,   88,    4, 0x06,   15 /* Public */,
      10,    0,   91,    4, 0x06,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   92,    4, 0x02,   18 /* Public */,
      13,    1,   95,    4, 0x02,   20 /* Public */,
      14,    1,   98,    4, 0x02,   22 /* Public */,
      14,    0,  101,    4, 0x22,   24 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      16, QMetaType::QColor, 0x00015003, uint(0), 0,
      17, 0x80000000 | 6, 0x00015009, uint(1), 0,
      18, 0x80000000 | 6, 0x00015009, uint(2), 0,
      19, 0x80000000 | 6, 0x00015009, uint(3), 0,
      20, 0x80000000 | 6, 0x00015009, uint(4), 0,
      21, 0x80000000 | 22, 0x00015009, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QmlQCustomPlot::BasePlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_ZN14QmlQCustomPlot8BasePlotE.offsetsAndSizes,
    qt_meta_data_ZN14QmlQCustomPlot8BasePlotE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'backgroundColor'
        QColor,
        // property 'xAxis'
        QmlQCustomPlot::Axis*,
        // property 'x1Axis'
        QmlQCustomPlot::Axis*,
        // property 'yAxis'
        QmlQCustomPlot::Axis*,
        // property 'y1Axis'
        QmlQCustomPlot::Axis*,
        // property 'graphs'
        QVariantMap,
        // Q_OBJECT / Q_GADGET
        BasePlot,
        // method 'backgroundColorChanged'
        void,
        QColor,
        // method 'xAxisChanged'
        void,
        QmlQCustomPlot::Axis *,
        // method 'x1AxisChanged'
        void,
        QmlQCustomPlot::Axis *,
        // method 'yAxisChanged'
        void,
        QmlQCustomPlot::Axis *,
        // method 'y1AxisChanged'
        void,
        QmlQCustomPlot::Axis *,
        // method 'graphsChanged'
        void,
        // method 'addGraph'
        void,
        const QString &,
        // method 'removeGraph'
        void,
        const QString &,
        // method 'rescaleAxes'
        void,
        bool,
        // method 'rescaleAxes'
        void
    >,
    nullptr
} };

void QmlQCustomPlot::BasePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BasePlot *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->backgroundColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->xAxisChanged((*reinterpret_cast< std::add_pointer_t<QmlQCustomPlot::Axis*>>(_a[1]))); break;
        case 2: _t->x1AxisChanged((*reinterpret_cast< std::add_pointer_t<QmlQCustomPlot::Axis*>>(_a[1]))); break;
        case 3: _t->yAxisChanged((*reinterpret_cast< std::add_pointer_t<QmlQCustomPlot::Axis*>>(_a[1]))); break;
        case 4: _t->y1AxisChanged((*reinterpret_cast< std::add_pointer_t<QmlQCustomPlot::Axis*>>(_a[1]))); break;
        case 5: _t->graphsChanged(); break;
        case 6: _t->addGraph((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->removeGraph((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->rescaleAxes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->rescaleAxes(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (BasePlot::*)(QColor );
            if (_q_method_type _q_method = &BasePlot::backgroundColorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (BasePlot::*)(QmlQCustomPlot::Axis * );
            if (_q_method_type _q_method = &BasePlot::xAxisChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (BasePlot::*)(QmlQCustomPlot::Axis * );
            if (_q_method_type _q_method = &BasePlot::x1AxisChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (BasePlot::*)(QmlQCustomPlot::Axis * );
            if (_q_method_type _q_method = &BasePlot::yAxisChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (BasePlot::*)(QmlQCustomPlot::Axis * );
            if (_q_method_type _q_method = &BasePlot::y1AxisChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (BasePlot::*)();
            if (_q_method_type _q_method = &BasePlot::graphsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QmlQCustomPlot::Axis**>(_v) = _t->xAxis(); break;
        case 2: *reinterpret_cast< QmlQCustomPlot::Axis**>(_v) = _t->x1Axis(); break;
        case 3: *reinterpret_cast< QmlQCustomPlot::Axis**>(_v) = _t->yAxis(); break;
        case 4: *reinterpret_cast< QmlQCustomPlot::Axis**>(_v) = _t->y1Axis(); break;
        case 5: *reinterpret_cast< QVariantMap*>(_v) = _t->graphs(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_backgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlQCustomPlot::BasePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlQCustomPlot::BasePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QmlQCustomPlot8BasePlotE.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int QmlQCustomPlot::BasePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QmlQCustomPlot::BasePlot::backgroundColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlQCustomPlot::BasePlot::xAxisChanged(QmlQCustomPlot::Axis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlQCustomPlot::BasePlot::x1AxisChanged(QmlQCustomPlot::Axis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlQCustomPlot::BasePlot::yAxisChanged(QmlQCustomPlot::Axis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlQCustomPlot::BasePlot::y1AxisChanged(QmlQCustomPlot::Axis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlQCustomPlot::BasePlot::graphsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
