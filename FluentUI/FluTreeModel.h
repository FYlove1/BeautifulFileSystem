#pragma once

#include <QObject>
#include <QAbstractTableModel>
#include <QJsonArray>
#include <QVariant>
#include <QtQml/qqml.h>
#include "stdafx.h"


/**
 * @brief The FluTreeNode class
 */
class FluTreeNode : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString title READ title CONSTANT)
    Q_PROPERTY(bool hasChildren READ hasChildren CONSTANT)
    Q_PROPERTY(QList<QVariant> childrens READ childrens CONSTANT)
    Q_PROPERTY(QVariantMap data READ data CONSTANT)
    Q_PROPERTY(int depth READ depth CONSTANT)
    Q_PROPERTY(bool isExpanded READ isExpanded CONSTANT)
    Q_PROPERTY(bool checked READ checked CONSTANT)

    // 新增QML暴露属性
    Q_PROPERTY(QList<QVariant> childrens READ childrens NOTIFY childrensChanged)
    Q_PROPERTY(bool isExpanded WRITE setIsExpanded NOTIFY isExpandedChanged)
    Q_PROPERTY(bool checked WRITE setChecked NOTIFY checkedChanged)

signals:
    void childrensChanged();
    void isExpandedChanged();
    void checkedChanged();

public:
    explicit FluTreeNode(QObject *parent = nullptr);

    [[nodiscard]] Q_INVOKABLE int depth() const {
        return _depth;
    };

    [[nodiscard]] Q_INVOKABLE bool isExpanded() const {
        return _isExpanded;
    };

    [[nodiscard]] Q_INVOKABLE QVariantMap data() const {
        return _data;
    };

    [[nodiscard]] Q_INVOKABLE bool hasChildren() const {
        return !_children.isEmpty();
    };
    [[nodiscard]] QString title() const { return _title; }

    [[nodiscard]] QList<QVariant> childrens() const {
        QList<QVariant> list;
        for(auto child : _children)
            list.append(QVariant::fromValue(child));
        return list;
    }

    Q_INVOKABLE bool hasNextNodeByIndex(int index) {
        FluTreeNode *p = this;
        for (int i = 0; i <= _depth - index - 1; i++) {
            p = p->_parent;
        }
        if (p->_parent->_children.indexOf(p) == p->_parent->_children.count() - 1) {
            return false;
        }
        return true;
    }

    [[nodiscard]] Q_INVOKABLE bool checked() const {
        if (!hasChildren()) {
            return _checked;
        }
        for (int i = 0; i <= _children.size() - 1; ++i) {
            auto item = _children.at(i);
            if (!item->checked()) {
                return false;
            }
        }
        return true;
    };

    Q_INVOKABLE bool hideLineFooter() {
        if (_parent) {
            auto childIndex = _parent->_children.indexOf(this);
            if (childIndex == _parent->_children.count() - 1) {
                return true;
            }
            if (_parent->_children.at(childIndex + 1)->hasChildren()) {
                return true;
            }
            return false;
        }
        return false;
    };

    [[nodiscard]] bool isShown() const {
        auto p = _parent;
        while (p) {
            if (!p->_isExpanded) {
                return false;
            }
            p = p->_parent;
        }
        return true;
    }

public:
    QString _title = "";
    int _depth = 0;
    bool _checked = false;
    bool _isExpanded = true;
    QVariantMap _data;
    QList<FluTreeNode *> _children;
    FluTreeNode *_parent = nullptr;

public slots:
    void setIsExpanded(bool value) { _isExpanded = value; emit isExpandedChanged(); }
    void setChecked(bool value) { _checked = value; emit checkedChanged(); }
};

class FluTreeModel : public QAbstractTableModel {
    Q_OBJECT
    Q_PROPERTY_AUTO(int, dataSourceSize)
    Q_PROPERTY_AUTO(QList<QVariantMap>, columnSource)
    QML_NAMED_ELEMENT(FluTreeModel)
public:
    enum TreeModelRoles { RowModel = 0x0101, ColumnModel = 0x0102 };

    explicit FluTreeModel(QObject *parent = nullptr);

    [[nodiscard]] int rowCount(const QModelIndex &parent = {}) const override;

    [[nodiscard]] int columnCount(const QModelIndex &parent = {}) const override;

    [[nodiscard]] QVariant data(const QModelIndex &index,
                                int role = Qt::DisplayRole) const override;

    [[nodiscard]] QHash<int, QByteArray> roleNames() const override;

    Q_INVOKABLE void removeRows(int row, int count);

    Q_INVOKABLE void insertRows(int row, const QList<FluTreeNode *> &data);

    Q_INVOKABLE QObject *getRow(int row);

    Q_INVOKABLE void setRow(int row, QVariantMap data);

    Q_INVOKABLE void setData(QList<FluTreeNode *> data);

    Q_INVOKABLE void setDataSource(QList<QMap<QString, QVariant>> data);

    Q_INVOKABLE void collapse(int row);

    Q_INVOKABLE void expand(int row);

    Q_INVOKABLE FluTreeNode *getNode(int row);

    Q_INVOKABLE void refreshNode(int row);

    Q_INVOKABLE void checkRow(int row, bool checked);

    Q_INVOKABLE bool hitHasChildrenExpanded(int row);

    Q_INVOKABLE void allExpand();

    Q_INVOKABLE void allCollapse();

    Q_INVOKABLE QVariant selectionModel();

    // New Function
    Q_INVOKABLE bool saveToJson(const QString &filePath);

    Q_INVOKABLE bool loadFromJson(const QString &filePath);

private:
    QList<FluTreeNode *> _rows;
    QList<FluTreeNode *> _dataSource;
    FluTreeNode *_root = nullptr;

    // 辅助方法，将 FluTreeNode 转换为 QJsonObject
    QJsonObject treeNodeToJson(FluTreeNode *node);
    // 辅助方法，从 QJsonObject 构建 FluTreeNode
    FluTreeNode *jsonToTreeNode(const QJsonObject &json);
};
