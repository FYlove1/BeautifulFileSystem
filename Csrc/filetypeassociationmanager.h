#ifndef FILETYPEASSOCIATIONMODEL_H
#define FILETYPEASSOCIATIONMODEL_H

#include <QAbstractListModel>
#include <QHash>
#include <QVariant>
#include <QVector>

class FileTypeAssociationModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Roles {
        FileTypeRole = Qt::UserRole + 1,
        AppPathRole
    };

    static FileTypeAssociationModel* instance();

    // 基本模型操作
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;
    QModelIndex index(int row, int column = 0, const QModelIndex &parent = QModelIndex()) const override;

    // 自定义操作
    Q_INVOKABLE void addEntry(const QString &type, const QString &path);
    Q_INVOKABLE bool removeEntry(int index);
    Q_INVOKABLE QVariant getData(int row, int role = FileTypeRole) const;
    Q_INVOKABLE QVariantMap getEntry(int row) const;
    Q_INVOKABLE bool openFileByType(const QString &filePath);

private:
    explicit FileTypeAssociationModel(QObject *parent = nullptr);
    FileTypeAssociationModel(const FileTypeAssociationModel&) = delete;
    FileTypeAssociationModel& operator=(const FileTypeAssociationModel&) = delete;

    struct FileTypeEntry {
        QString type;
        QString path;
    };

    QVector<FileTypeEntry> m_entries;
    static FileTypeAssociationModel* m_instance;
};

#endif // FILETYPEASSOCIATIONMODEL_H
