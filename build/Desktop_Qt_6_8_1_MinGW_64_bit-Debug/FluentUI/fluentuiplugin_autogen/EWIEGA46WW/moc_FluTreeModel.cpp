/****************************************************************************
** Meta object code from reading C++ file 'FluTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FluentUI/FluTreeModel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluTreeModel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11FluTreeNodeE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11FluTreeNodeE = QtMocHelpers::stringData(
    "FluTreeNode",
    "childrensChanged",
    "",
    "isExpandedChanged",
    "checkedChanged",
    "setIsExpanded",
    "value",
    "setChecked",
    "depth",
    "isExpanded",
    "data",
    "QVariantMap",
    "hasChildren",
    "hasNextNodeByIndex",
    "index",
    "checked",
    "hideLineFooter",
    "title",
    "childrens",
    "QList<QVariant>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11FluTreeNodeE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      10,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,   11 /* Public */,
       3,    0,   87,    2, 0x06,   12 /* Public */,
       4,    0,   88,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   89,    2, 0x0a,   14 /* Public */,
       7,    1,   92,    2, 0x0a,   16 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   95,    2, 0x102,   18 /* Public | MethodIsConst  */,
       9,    0,   96,    2, 0x102,   19 /* Public | MethodIsConst  */,
      10,    0,   97,    2, 0x102,   20 /* Public | MethodIsConst  */,
      12,    0,   98,    2, 0x102,   21 /* Public | MethodIsConst  */,
      13,    1,   99,    2, 0x02,   22 /* Public */,
      15,    0,  102,    2, 0x102,   24 /* Public | MethodIsConst  */,
      16,    0,  103,    2, 0x02,   25 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Bool,
    0x80000000 | 11,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   14,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags, notifyId, revision
      17, QMetaType::QString, 0x00015401, uint(-1), 0,
      12, QMetaType::Bool, 0x00015401, uint(-1), 0,
      18, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 11, 0x00015409, uint(-1), 0,
       8, QMetaType::Int, 0x00015401, uint(-1), 0,
       9, QMetaType::Bool, 0x00015401, uint(-1), 0,
      15, QMetaType::Bool, 0x00015401, uint(-1), 0,
      18, 0x80000000 | 19, 0x00015009, uint(0), 0,
       9, QMetaType::Bool, 0x00015102, uint(1), 0,
      15, QMetaType::Bool, 0x00015102, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluTreeNode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11FluTreeNodeE.offsetsAndSizes,
    qt_meta_data_ZN11FluTreeNodeE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11FluTreeNodeE_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hasChildren'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'childrens'
        QtPrivate::TypeAndForceComplete<QList<QVariant>, std::true_type>,
        // property 'data'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // property 'depth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isExpanded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'childrens'
        QtPrivate::TypeAndForceComplete<QList<QVariant>, std::true_type>,
        // property 'isExpanded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FluTreeNode, std::true_type>,
        // method 'childrensChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isExpandedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIsExpanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'depth'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isExpanded'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'data'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'hasChildren'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hasNextNodeByIndex'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hideLineFooter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void FluTreeNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FluTreeNode *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->childrensChanged(); break;
        case 1: _t->isExpandedChanged(); break;
        case 2: _t->checkedChanged(); break;
        case 3: _t->setIsExpanded((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: { int _r = _t->depth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->isExpanded();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVariantMap _r = _t->data();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->hasChildren();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->hasNextNodeByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->checked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->hideLineFooter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FluTreeNode::*)();
            if (_q_method_type _q_method = &FluTreeNode::childrensChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (FluTreeNode::*)();
            if (_q_method_type _q_method = &FluTreeNode::isExpandedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (FluTreeNode::*)();
            if (_q_method_type _q_method = &FluTreeNode::checkedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasChildren(); break;
        case 2: *reinterpret_cast< QList<QVariant>*>(_v) = _t->childrens(); break;
        case 3: *reinterpret_cast< QVariantMap*>(_v) = _t->data(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->depth(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isExpanded(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        case 7: *reinterpret_cast< QList<QVariant>*>(_v) = _t->childrens(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setIsExpanded(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *FluTreeNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluTreeNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11FluTreeNodeE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluTreeNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FluTreeNode::childrensChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluTreeNode::isExpandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluTreeNode::checkedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {
struct qt_meta_tag_ZN12FluTreeModelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12FluTreeModelE = QtMocHelpers::stringData(
    "FluTreeModel",
    "QML.Element",
    "dataSourceSizeChanged",
    "",
    "columnSourceChanged",
    "removeRows",
    "row",
    "count",
    "insertRows",
    "QList<FluTreeNode*>",
    "data",
    "getRow",
    "setRow",
    "QVariantMap",
    "setData",
    "setDataSource",
    "QList<QMap<QString,QVariant>>",
    "collapse",
    "expand",
    "getNode",
    "FluTreeNode*",
    "refreshNode",
    "checkRow",
    "checked",
    "hitHasChildrenExpanded",
    "allExpand",
    "allCollapse",
    "selectionModel",
    "QVariant",
    "saveToJson",
    "filePath",
    "loadFromJson",
    "dataSourceSize",
    "columnSource",
    "QList<QVariantMap>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12FluTreeModelE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      19,   16, // methods
       2,  185, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,  130,    3, 0x06,    3 /* Public */,
       4,    0,  131,    3, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,  132,    3, 0x02,    5 /* Public */,
       8,    2,  137,    3, 0x02,    8 /* Public */,
      11,    1,  142,    3, 0x02,   11 /* Public */,
      12,    2,  145,    3, 0x02,   13 /* Public */,
      14,    1,  150,    3, 0x02,   16 /* Public */,
      15,    1,  153,    3, 0x02,   18 /* Public */,
      17,    1,  156,    3, 0x02,   20 /* Public */,
      18,    1,  159,    3, 0x02,   22 /* Public */,
      19,    1,  162,    3, 0x02,   24 /* Public */,
      21,    1,  165,    3, 0x02,   26 /* Public */,
      22,    2,  168,    3, 0x02,   28 /* Public */,
      24,    1,  173,    3, 0x02,   31 /* Public */,
      25,    0,  176,    3, 0x02,   33 /* Public */,
      26,    0,  177,    3, 0x02,   34 /* Public */,
      27,    0,  178,    3, 0x02,   35 /* Public */,
      29,    1,  179,    3, 0x02,   36 /* Public */,
      31,    1,  182,    3, 0x02,   38 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    6,   10,
    QMetaType::QObjectStar, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,    6,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 16,   10,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    0x80000000 | 20, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,   23,
    QMetaType::Bool, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 28,
    QMetaType::Bool, QMetaType::QString,   30,
    QMetaType::Bool, QMetaType::QString,   30,

 // properties: name, type, flags, notifyId, revision
      32, QMetaType::Int, 0x00015003, uint(0), 0,
      33, 0x80000000 | 34, 0x0001500b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_ZN12FluTreeModelE.offsetsAndSizes,
    qt_meta_data_ZN12FluTreeModelE,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'dataSourceSize'
        int,
        // property 'columnSource'
        QList<QVariantMap>,
        // Q_OBJECT / Q_GADGET
        FluTreeModel,
        // method 'dataSourceSizeChanged'
        void,
        // method 'columnSourceChanged'
        void,
        // method 'removeRows'
        void,
        int,
        int,
        // method 'insertRows'
        void,
        int,
        const QList<FluTreeNode*> &,
        // method 'getRow'
        QObject *,
        int,
        // method 'setRow'
        void,
        int,
        QVariantMap,
        // method 'setData'
        void,
        QList<FluTreeNode*>,
        // method 'setDataSource'
        void,
        QList<QMap<QString,QVariant>>,
        // method 'collapse'
        void,
        int,
        // method 'expand'
        void,
        int,
        // method 'getNode'
        FluTreeNode *,
        int,
        // method 'refreshNode'
        void,
        int,
        // method 'checkRow'
        void,
        int,
        bool,
        // method 'hitHasChildrenExpanded'
        bool,
        int,
        // method 'allExpand'
        void,
        // method 'allCollapse'
        void,
        // method 'selectionModel'
        QVariant,
        // method 'saveToJson'
        bool,
        const QString &,
        // method 'loadFromJson'
        bool,
        const QString &
    >,
    nullptr
} };

void FluTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FluTreeModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataSourceSizeChanged(); break;
        case 1: _t->columnSourceChanged(); break;
        case 2: _t->removeRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->insertRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<FluTreeNode*>>>(_a[2]))); break;
        case 4: { QObject* _r = _t->getRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[2]))); break;
        case 6: _t->setData((*reinterpret_cast< std::add_pointer_t<QList<FluTreeNode*>>>(_a[1]))); break;
        case 7: _t->setDataSource((*reinterpret_cast< std::add_pointer_t<QList<QMap<QString,QVariant>>>>(_a[1]))); break;
        case 8: _t->collapse((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->expand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: { FluTreeNode* _r = _t->getNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluTreeNode**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->refreshNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->checkRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 13: { bool _r = _t->hitHasChildrenExpanded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->allExpand(); break;
        case 15: _t->allCollapse(); break;
        case 16: { QVariant _r = _t->selectionModel();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->saveToJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->loadFromJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<FluTreeNode*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<FluTreeNode*> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FluTreeModel::*)();
            if (_q_method_type _q_method = &FluTreeModel::dataSourceSizeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (FluTreeModel::*)();
            if (_q_method_type _q_method = &FluTreeModel::columnSourceChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_dataSourceSize; break;
        case 1: *reinterpret_cast< QList<QVariantMap>*>(_v) = _t->_columnSource; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_dataSourceSize != *reinterpret_cast< int*>(_v)) {
                _t->_dataSourceSize = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dataSourceSizeChanged();
            }
            break;
        case 1:
            if (_t->_columnSource != *reinterpret_cast< QList<QVariantMap>*>(_v)) {
                _t->_columnSource = *reinterpret_cast< QList<QVariantMap>*>(_v);
                Q_EMIT _t->columnSourceChanged();
            }
            break;
        default: break;
        }
    }
}

const QMetaObject *FluTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12FluTreeModelE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int FluTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FluTreeModel::dataSourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluTreeModel::columnSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
