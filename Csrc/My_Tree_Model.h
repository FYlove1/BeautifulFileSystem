#ifndef MY_TREE_MODEL_H
#define MY_TREE_MODEL_H

#include <QStandardItemModel>
#include <QVariant>
#include <QModelIndex>
#include <QQml.h> // 包含 QML 宏

class MyTreeModel : public QStandardItemModel {
    Q_OBJECT
public:
    enum Roles {
        NameRole = Qt::UserRole + 1,
        TypeRole,
        ContentRole,
        PathRole
    };
    // 单例接口
    static MyTreeModel* instance(); // 提供静态方法获取单例实例
    ~MyTreeModel() override = default;
    // 重写数据接口
    [[nodiscard]] QVariant data(const QModelIndex &index, int role) const override;
    [[nodiscard]] QHash<int, QByteArray> roleNames() const override;

    // 自定义方法
    Q_INVOKABLE void addChildItem(const QModelIndex &parentIndex, const QString &name, const QString &type, const QString &content, const QString &path);

    Q_INVOKABLE void removeItemAndChildren(const QModelIndex &index);
    // 新增Q_INVOKABLE方法声明
    Q_INVOKABLE bool saveToJson(const QString &filePath);
    Q_INVOKABLE bool loadFromJson(const QString &filePath);
    Q_INVOKABLE void setDataByIndex(const QModelIndex &index, const QString &value, int role);
    Q_INVOKABLE bool setAllDataByIndex(const QModelIndex &index, const QString &name, const QString &type, const QString &content, const QString &path);
    Q_INVOKABLE int getRoleFromName(const QByteArray &roleName) const;
    Q_INVOKABLE QVariantList getChildIndices(const QModelIndex &parentIndex) const;
    Q_INVOKABLE QVariantList getTopLevelItems() const;
    Q_INVOKABLE bool createNewTopItem(const QString &name,const QString &content);
private:
    MyTreeModel(QObject *parent = nullptr); // 私有构造函数，防止外部直接实例化
    [[nodiscard]] QStandardItem* getItem(const QModelIndex &index) const;
    QStandardItem* createItem(const QString &name, const QString &type, const QString &content, const QString &path);

    // 新增序列化和反序列化函数声明
    void serializeItem(const QModelIndex &index, QJsonArray &array);
    void createItemFromJson(const QJsonObject &obj, QStandardItem *parentItem);

    static MyTreeModel* m_instance; // 单例实例
};

#endif // MY_TREE_MODEL_H
