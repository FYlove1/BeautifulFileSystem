/****************************************************************************
** Meta object code from reading C++ file 'grid.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FluentUI/qmlcustomplot/grid.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grid.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QmlQCustomPlot4GridE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QmlQCustomPlot4GridE = QtMocHelpers::stringData(
    "QmlQCustomPlot::Grid",
    "QML.Element",
    "PlotGrid",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "",
    "visibleChanged",
    "subVisibleChanged",
    "lineWidthChanged",
    "lineColorChanged",
    "lineTypeChanged",
    "LineType",
    "subLineWidthChanged",
    "subLineColorChanged",
    "subLineTypeChanged",
    "visible",
    "subVisible",
    "lineWidth",
    "lineColor",
    "lineType",
    "subLineWidth",
    "subLineColor",
    "subLineType",
    "NoPen",
    "SolidLine",
    "DashLine",
    "DotLine",
    "DashDotLine",
    "DashDotDotLine"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QmlQCustomPlot4GridE[] = {

 // content:
      12,       // revision
       0,       // classname
       3,   14, // classinfo
       8,   20, // methods
       8,   92, // properties
       1,  132, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    6, 0x06,   10 /* Public */,
       8,    1,   71,    6, 0x06,   12 /* Public */,
       9,    1,   74,    6, 0x06,   14 /* Public */,
      10,    1,   77,    6, 0x06,   16 /* Public */,
      11,    1,   80,    6, 0x06,   18 /* Public */,
      13,    1,   83,    6, 0x06,   20 /* Public */,
      14,    1,   86,    6, 0x06,   22 /* Public */,
      15,    1,   89,    6, 0x06,   24 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, 0x80000000 | 12,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, 0x80000000 | 12,    6,

 // properties: name, type, flags, notifyId, revision
      16, QMetaType::Bool, 0x00015003, uint(0), 0,
      17, QMetaType::Bool, 0x00015003, uint(1), 0,
      18, QMetaType::Int, 0x00015003, uint(2), 0,
      19, QMetaType::QColor, 0x00015003, uint(3), 0,
      20, 0x80000000 | 12, 0x0001500b, uint(4), 0,
      21, QMetaType::Int, 0x00015003, uint(5), 0,
      22, QMetaType::QColor, 0x00015003, uint(6), 0,
      23, 0x80000000 | 12, 0x0001500b, uint(7), 0,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,    6,  137,

 // enum data: key, value
      24, uint(QmlQCustomPlot::Grid::NoPen),
      25, uint(QmlQCustomPlot::Grid::SolidLine),
      26, uint(QmlQCustomPlot::Grid::DashLine),
      27, uint(QmlQCustomPlot::Grid::DotLine),
      28, uint(QmlQCustomPlot::Grid::DashDotLine),
      29, uint(QmlQCustomPlot::Grid::DashDotDotLine),

       0        // eod
};

Q_CONSTINIT const QMetaObject QmlQCustomPlot::Grid::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN14QmlQCustomPlot4GridE.offsetsAndSizes,
    qt_meta_data_ZN14QmlQCustomPlot4GridE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'visible'
        bool,
        // property 'subVisible'
        bool,
        // property 'lineWidth'
        int,
        // property 'lineColor'
        QColor,
        // property 'lineType'
        LineType,
        // property 'subLineWidth'
        int,
        // property 'subLineColor'
        QColor,
        // property 'subLineType'
        LineType,
        // enum 'LineType'
        Grid::LineType,
        // Q_OBJECT / Q_GADGET
        Grid,
        // method 'visibleChanged'
        void,
        bool,
        // method 'subVisibleChanged'
        void,
        bool,
        // method 'lineWidthChanged'
        void,
        int,
        // method 'lineColorChanged'
        void,
        QColor,
        // method 'lineTypeChanged'
        void,
        LineType,
        // method 'subLineWidthChanged'
        void,
        int,
        // method 'subLineColorChanged'
        void,
        QColor,
        // method 'subLineTypeChanged'
        void,
        LineType
    >,
    nullptr
} };

void QmlQCustomPlot::Grid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Grid *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->visibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->subVisibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->lineWidthChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->lineColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 4: _t->lineTypeChanged((*reinterpret_cast< std::add_pointer_t<LineType>>(_a[1]))); break;
        case 5: _t->subLineWidthChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->subLineColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 7: _t->subLineTypeChanged((*reinterpret_cast< std::add_pointer_t<LineType>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Grid::*)(bool );
            if (_q_method_type _q_method = &Grid::visibleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(bool );
            if (_q_method_type _q_method = &Grid::subVisibleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(int );
            if (_q_method_type _q_method = &Grid::lineWidthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(QColor );
            if (_q_method_type _q_method = &Grid::lineColorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(LineType );
            if (_q_method_type _q_method = &Grid::lineTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(int );
            if (_q_method_type _q_method = &Grid::subLineWidthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(QColor );
            if (_q_method_type _q_method = &Grid::subLineColorChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Grid::*)(LineType );
            if (_q_method_type _q_method = &Grid::subLineTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->subVisible(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->lineColor(); break;
        case 4: *reinterpret_cast< LineType*>(_v) = _t->lineType(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->subLineWidth(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->subLineColor(); break;
        case 7: *reinterpret_cast< LineType*>(_v) = _t->subLineType(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_visible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->set_subVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_lineWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->set_lineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->set_lineType(*reinterpret_cast< LineType*>(_v)); break;
        case 5: _t->set_subLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->set_subLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->set_subLineType(*reinterpret_cast< LineType*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QmlQCustomPlot::Grid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlQCustomPlot::Grid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QmlQCustomPlot4GridE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlQCustomPlot::Grid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QmlQCustomPlot::Grid::visibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlQCustomPlot::Grid::subVisibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlQCustomPlot::Grid::lineWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlQCustomPlot::Grid::lineColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlQCustomPlot::Grid::lineTypeChanged(LineType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlQCustomPlot::Grid::subLineWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QmlQCustomPlot::Grid::subLineColorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QmlQCustomPlot::Grid::subLineTypeChanged(LineType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
