#include "FluTreeModel.h"

#include <QMetaEnum>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <QJsonObject>

FluTreeNode::FluTreeNode(QObject *parent) : QObject{parent} {
}

FluTreeModel::FluTreeModel(QObject *parent) : QAbstractTableModel{parent} {
    _dataSourceSize = 0;
}

int FluTreeModel::rowCount(const QModelIndex &parent) const {
    return _rows.count();
}

int FluTreeModel::columnCount(const QModelIndex &parent) const {
    return this->_columnSource.size();
}

QVariant FluTreeModel::data(const QModelIndex &index, int role) const {
    switch (role) {
        case TreeModelRoles::RowModel:
            return QVariant::fromValue(_rows.at(index.row()));
        case TreeModelRoles::ColumnModel:
            return QVariant::fromValue(_columnSource.at(index.column()));
        default:
            break;
    }
    return {};
}

QHash<int, QByteArray> FluTreeModel::roleNames() const {
    return {
        {TreeModelRoles::RowModel,    "rowModel"   },
        {TreeModelRoles::ColumnModel, "columnModel"}
    };
}

void FluTreeModel::setData(QList<FluTreeNode *> data) {
    beginResetModel();
    _rows = std::move(data);
    endResetModel();
}

void FluTreeModel::removeRows(int row, int count) {
    if (row < 0 || row + count > _rows.size() || count == 0)
        return;
    beginRemoveRows(QModelIndex(), row, row + count - 1);
    QList<FluTreeNode *> firstPart = _rows.mid(0, row);
    QList<FluTreeNode *> secondPart = _rows.mid(row + count);
    _rows.clear();
    _rows.append(firstPart);
    _rows.append(secondPart);
    endRemoveRows();
}

void FluTreeModel::insertRows(int row, const QList<FluTreeNode *> &data) {
    if (row < 0 || row > _rows.size() || data.empty())
        return;
    beginInsertRows(QModelIndex(), row, row + data.size() - 1);
    QList<FluTreeNode *> firstPart = _rows.mid(0, row);
    QList<FluTreeNode *> secondPart = _rows.mid(row);
    _rows.clear();
    _rows.append(firstPart);
    _rows.append(data);
    _rows.append(secondPart);
    endInsertRows();
}

QObject *FluTreeModel::getRow(int row) {
    return _rows.at(row);
}

void FluTreeModel::setRow(int row, QVariantMap data) {
    _rows.at(row)->_data = std::move(data);
    Q_EMIT dataChanged(index(row, 0), index(row, columnCount() - 1));
}

void FluTreeModel::checkRow(int row, bool checked) {
    auto itemData = _rows.at(row);
    if (itemData->hasChildren()) {
        QList<FluTreeNode *> stack = itemData->_children;
        std::reverse(stack.begin(), stack.end());
        while (stack.count() > 0) {
            auto item = stack.at(stack.count() - 1);
            stack.pop_back();
            if (!item->hasChildren()) {
                item->_checked = checked;
            }
            QList<FluTreeNode *> children = item->_children;
            if (!children.isEmpty()) {
                std::reverse(children.begin(), children.end());
                foreach (auto c, children) {
                    stack.append(c);
                }
            }
        }
    } else {
        if (itemData->_checked == checked) {
            return;
        }
        itemData->_checked = checked;
    }
    Q_EMIT dataChanged(index(0, 0), index(rowCount() - 1, 0));
}

void FluTreeModel::setDataSource(QList<QMap<QString, QVariant>> data) {
    _dataSource.clear();
    if (_root) {
        delete _root;
        _root = nullptr;
    }
    _root = new FluTreeNode(this);
    std::reverse(data.begin(), data.end());
    while (data.count() > 0) {
        auto item = data.at(data.count() - 1);
        data.pop_back();
        auto *node = new FluTreeNode(this);
        node->_depth = item.value("__depth").toInt();
        node->_parent = item.value("__parent").value<FluTreeNode *>();
        node->_data = item;
        node->_isExpanded = true;
        if (node->_parent) {
            node->_parent->_children.append(node);
        } else {
            node->_parent = _root;
            _root->_children.append(node);
        }
        _dataSource.append(node);
        // 新增递归处理children的逻辑
        if (item.contains("children")) {
            QList<QVariant> children = item.value("children").toList();
            if (!children.isEmpty()) {
                std::reverse(children.begin(), children.end());
                for (int i = 0; i < children.count(); ++i) {
                    auto child = children[i].toMap();
                    child.insert("__depth", item.value("__depth").toInt() + 1);
                    child.insert("__parent", QVariant::fromValue(node));
                    data.append(child);
                }
            }
        }
    }
    beginResetModel();
    _rows = _dataSource;
    endResetModel();
    dataSourceSize(_dataSource.size());
}

void FluTreeModel::collapse(int row) {
    if (!_rows.at(row)->_isExpanded) {
        return;
    }
    _rows.at(row)->_isExpanded = false;
    Q_EMIT dataChanged(index(row, 0), index(row, 0));
    auto modelData = _rows.at(row);
    int removeCount = 0;
    for (int i = row + 1; i < _rows.count(); i++) {
        auto obj = _rows[i];
        if (obj->_depth <= modelData->_depth) {
            break;
        }
        removeCount = removeCount + 1;
    }
    removeRows(row + 1, removeCount);
}

void FluTreeModel::expand(int row) {
    if (_rows.at(row)->_isExpanded) {
        return;
    }
    _rows.at(row)->_isExpanded = true;
    Q_EMIT dataChanged(index(row, 0), index(row, 0));
    auto modelData = _rows.at(row);
    QList<FluTreeNode *> insertData;
    QList<FluTreeNode *> stack = modelData->_children;
    std::reverse(stack.begin(), stack.end());
    while (stack.count() > 0) {
        auto item = stack.at(stack.count() - 1);
        stack.pop_back();
        if (item->isShown()) {
            insertData.append(item);
        }
        QList<FluTreeNode *> children = item->_children;
        if (!children.isEmpty()) {
            std::reverse(children.begin(), children.end());
            foreach (auto c, children) {
                stack.append(c);
            }
        }
    }
    insertRows(row + 1, insertData);
}

bool FluTreeModel::hitHasChildrenExpanded(int row) {
    auto itemData = _rows.at(row);
    if (itemData->hasChildren() && itemData->_isExpanded) {
        return true;
    }
    return false;
}

void FluTreeModel::refreshNode(int row) {
    Q_EMIT dataChanged(index(row, 0), index(row, 0));
}

FluTreeNode *FluTreeModel::getNode(int row) {
    return _rows.at(row);
}

void FluTreeModel::allExpand() {
    beginResetModel();
    QList<FluTreeNode *> data;
    QList<FluTreeNode *> stack = _root->_children;
    std::reverse(stack.begin(), stack.end());
    while (stack.count() > 0) {
        auto item = stack.at(stack.count() - 1);
        stack.pop_back();
        if (item->hasChildren()) {
            item->_isExpanded = true;
        }
        data.append(item);
        QList<FluTreeNode *> children = item->_children;
        if (!children.isEmpty()) {
            std::reverse(children.begin(), children.end());
            foreach (auto c, children) {
                stack.append(c);
            }
        }
    }
    _rows = data;
    endResetModel();
}

void FluTreeModel::allCollapse() {
    beginResetModel();
    QList<FluTreeNode *> stack = _root->_children;
    std::reverse(stack.begin(), stack.end());
    while (stack.count() > 0) {
        auto item = stack.at(stack.count() - 1);
        stack.pop_back();
        if (item->hasChildren()) {
            item->_isExpanded = false;
        }
        QList<FluTreeNode *> children = item->_children;
        if (!children.isEmpty()) {
            std::reverse(children.begin(), children.end());
            foreach (auto c, children) {
                stack.append(c);
            }
        }
    }
    _rows = _root->_children;
    endResetModel();
}

QVariant FluTreeModel::selectionModel() {
    QList<FluTreeNode *> data;
    foreach (auto item, _dataSource) {
        if (item->checked()) {
            data.append(item);
        }
    }
    return QVariant::fromValue(data);
}



// 将 FluTreeNode 转换为 QJsonObject
QJsonObject FluTreeModel::treeNodeToJson(FluTreeNode *node) {
    QJsonObject json;
    json["title"] = node->_title;
    json["depth"] = node->_depth;
    json["checked"] = node->_checked;
    json["isExpanded"] = node->_isExpanded;
    json["data"] = QJsonObject::fromVariantMap(node->_data);

    QJsonArray childrenArray;
    for (FluTreeNode *child : node->_children) {
        childrenArray.append(treeNodeToJson(child));
    }
    json["children"] = childrenArray;

    return json;
}

// 从 QJsonObject 构建 FluTreeNode
FluTreeNode *FluTreeModel::jsonToTreeNode(const QJsonObject &json) {
    FluTreeNode *node = new FluTreeNode();
    node->_title = json["title"].toString();
    node->_depth = json["depth"].toInt();
    node->_checked = json["checked"].toBool();
    node->_isExpanded = json["isExpanded"].toBool();
    node->_data = json["data"].toObject().toVariantMap();

    QJsonArray childrenArray = json["children"].toArray();
    for (const QJsonValue &childValue : childrenArray) {
        FluTreeNode *child = jsonToTreeNode(childValue.toObject());
        child->_parent = node;
        node->_children.append(child);
    }

    return node;
}

// 保存数据到 JSON 文件
bool FluTreeModel::saveToJson(const QString &filePath) {
    QJsonArray jsonArray;
    for (FluTreeNode *node : _rows) {
        jsonArray.append(treeNodeToJson(node));
    }

    QJsonDocument doc(jsonArray);
    QFile file(filePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(doc.toJson());
        file.close();
        return true;
    }
    return false;
}

// 从 JSON 文件加载数据
bool FluTreeModel::loadFromJson(const QString &filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QByteArray data = file.readAll();
        file.close();

        QJsonDocument doc = QJsonDocument::fromJson(data);
        if (doc.isArray()) {
            QJsonArray jsonArray = doc.array();
            beginResetModel();
            _rows.clear();
            for (const QJsonValue &value : jsonArray) {
                FluTreeNode *node = jsonToTreeNode(value.toObject());
                _rows.append(node);
            }
            endResetModel();
            return true;
        }
    }
    return false;
}
