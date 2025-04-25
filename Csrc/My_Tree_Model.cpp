#include "My_Tree_Model.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QDebug>
#include <QString>
MyTreeModel* MyTreeModel::m_instance = nullptr; // 初始化静态成员

// 单例实现
MyTreeModel* MyTreeModel::instance() {
    if (!m_instance) {
        m_instance = new MyTreeModel; // 自动管理生命周期
    }
    return m_instance;
}

MyTreeModel::MyTreeModel(QObject *parent)
    : QStandardItemModel(parent) {
    // 初始化根节点（默认隐藏）
    QStandardItem *root = invisibleRootItem();

    // 添加示例根节点
    auto rootItem = createItem("根目录", "Folder", "根目录", "这是所有的子树的根节点");
    root->appendRow(rootItem);


    QStandardItem* osItem = rootItem;
    addChildItem(osItem->index(), "文件管理", "Folder", " ", " ");

    createNewTopItem("ceshi","ceshi");
    //

}

[[nodiscard]] QVariant MyTreeModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid())
        return QVariant();

    QStandardItem *item = getItem(index);
    if (!item)
        return QVariant();

    return item->data(role);
}

[[nodiscard]] QHash<int, QByteArray> MyTreeModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[TypeRole] = "type";
    roles[ContentRole] = "content";
    roles[PathRole] = "path";
    return roles;
}

void MyTreeModel::addChildItem(const QModelIndex &parentIndex, const QString &name, const QString &type, const QString &content, const QString &path) {
    QStandardItem *parentItem = getItem(parentIndex);
    if (!parentItem)
        return;

    QStandardItem *child = createItem(name, type, content, path);
    parentItem->appendRow(child);
}

void MyTreeModel::setDataByIndex(const QModelIndex &index, const QString &value, int role) {
    QStandardItem *item = getItem(index);
    if (!item){
        qDebug()<<"index is null" ;
        return;
    }

    qDebug()<<"begin::" <<value <<"    " <<role;
    item->setData(value, role);
    emit dataChanged(index, index, {role});
}

bool MyTreeModel::setAllDataByIndex(const QModelIndex &index, const QString &name, const QString &type, const QString &content, const QString &path)
{
    if (!index.isValid()){
        qDebug()<<"index is undefined ";
        return false;
    }


    QStandardItem *item = getItem(index);
    if (!item){
        qDebug()<<"getItem(index) fall ";
        return false;
    }
    item->setData(name, NameRole);
    item->setData(type, TypeRole);
    item->setData(content, ContentRole);
    item->setData(path, PathRole);
    return true;

}


int MyTreeModel::getRoleFromName(const QByteArray &roleName) const
{
    QHash<int, QByteArray> roles = roleNames();
    for (auto it = roles.constBegin(); it != roles.constEnd(); ++it) {
        if (it.value() == roleName) {
            return it.key(); // 返回对应的int角色值
        }
    }
    return -1; // 未找到返回-1
}
void MyTreeModel::removeItemAndChildren(const QModelIndex &index) {
    if (!index.isValid())
        return;

    QStandardItem *item = getItem(index);
    if (!item)
        return;

    QStandardItem *parent = item->parent();
    if (!parent)
        parent = invisibleRootItem();

    int row = item->row();
    parent->removeRow(row);
}

[[nodiscard]] QStandardItem* MyTreeModel::getItem(const QModelIndex &index) const {
    if (!index.isValid())
        return nullptr;

    return itemFromIndex(index);
}

QStandardItem* MyTreeModel::createItem(const QString &name, const QString &type, const QString &content, const QString &path) {
    QStandardItem *item = new QStandardItem(name); // 显示文本默认为 name
    item->setData(name, NameRole);
    item->setData(type, TypeRole);
    item->setData(content, ContentRole);
    item->setData(path, PathRole);
    return item;
}

//获取子节点列表 通过 父节点
QVariantList MyTreeModel::getChildIndices(const QModelIndex &parentIndex) const {
    QVariantList childIndices;

    if (!parentIndex.isValid()) {
        // 如果是无效索引，获取根节点的子节点
        for (int row = 0; row < rowCount(); ++row) {
            childIndices.append(QVariant::fromValue(index(row, 0)));
        }
    } else {
        // 获取指定父节点的子节点
        for (int row = 0; row < rowCount(parentIndex); ++row) {
            childIndices.append(QVariant::fromValue(index(row, 0, parentIndex)));
        }
    }

    return childIndices;
}

QVariantList MyTreeModel::getTopLevelItems() const {
    QStandardItem* rootItem = invisibleRootItem();
    if (rootItem->rowCount() > 0) {
        //QStandardItem* topLevelItem = rootItem->child(0); // 获取第一个顶级节点
        return getChildIndices(rootItem->index()); // 获取该节点的子节点
    }
    return QVariantList();
}

bool MyTreeModel::createNewTopItem(const QString &name, const QString &content)
{
    // 获取 invisibleRootItem
    QStandardItem *root = invisibleRootItem();

    // 获取第一个顶级节点（"根目录"）
    if (root->rowCount() > 0) {
        QStandardItem *topLevelItem = root->child(0); // "根目录"

        // 在 "根目录" 下添加新子节点
        QStandardItem *newItem = createItem(name, "Folder", content, " ");
        topLevelItem->appendRow(newItem);
        return true;
    }
    // 如果没有顶级节点（例如 "根目录" 不存在），则返回 false
    return false;
}



bool MyTreeModel::saveToJson(const QString &filePath) {
    QJsonObject rootObj;
    QJsonArray rootArray;

    // 遍历根节点所有子项进行序列化
    for (int row = 0; row < rowCount(); ++row) {
        serializeItem(index(row, 0), rootArray);
    }

    rootObj.insert("modelData", rootArray);
    QJsonDocument doc(rootObj);
    QFile file(filePath);

    if (!file.open(QIODevice::WriteOnly)) {
        qWarning() << "无法打开文件保存：" << filePath;
        return false;
    }

    file.write(doc.toJson());
    file.close();
    qDebug()<<"save to Json Success";
    return true;
}

bool MyTreeModel::loadFromJson(const QString &filePath) {
    clear(); // 清除现有数据

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << "无法打开文件加载：" << filePath;
        return false;
    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();

    if (!doc.object().contains("modelData"))
        return false;

    QJsonArray rootArray = doc.object().value("modelData").toArray();
    for (const QJsonValue &val : rootArray) {
        QJsonObject obj = val.toObject();
        // 创建根节点并添加到模型
        createItemFromJson(obj, invisibleRootItem());
    }

    qDebug()<<"load from json success";

    return true;
}

void MyTreeModel::serializeItem(const QModelIndex &index, QJsonArray &array) {
    QStandardItem *item = getItem(index);
    if (!item) return;

    QJsonObject obj;
    obj.insert(QString("name"), item->data(NameRole).toJsonValue());
    obj.insert(QString("type"), item->data(TypeRole).toJsonValue());
    obj.insert(QString("content"), item->data(ContentRole).toJsonValue());
    obj.insert(QString("path"), item->data(PathRole).toJsonValue());

    QJsonObject childrenObj;
    obj.insert("children", childrenObj); // 直接插入空对象
    QJsonArray childrenArray; // 新建数组存放子项

    for (int row = 0; row < item->rowCount(); ++row) {
        // 通过模型的 index() 方法生成子项索引，传入父项 index 作为父索引
        QModelIndex childIndex = this->index(row, 0, index);
        serializeItem(childIndex, childrenArray); // 递归处理子项
    }
    obj.insert("children", childrenArray); // 将子项数组存入父对象
    array.append(obj);
}


// 其他代码保持不变，确保createItemFromJson参数正确
void MyTreeModel::createItemFromJson(const QJsonObject &obj, QStandardItem *parentItem) {
    QStandardItem *newItem = createItem(
        obj.value("name").toString(),
        obj.value("type").toString(),
        obj.value("content").toString(),
        obj.value("path").toString()
    );

    parentItem->appendRow(newItem);

    QJsonArray children = obj.value("children").toArray();
    for (const QJsonValue &childVal : children) {
        createItemFromJson(childVal.toObject(), newItem);
    }
}
