#include "filetypeassociationmanager.h"
#include <QModelIndex>
#include <QDebug>

FileTypeAssociationModel* FileTypeAssociationModel::m_instance = nullptr;

FileTypeAssociationModel* FileTypeAssociationModel::instance() {
    if (!m_instance) {
        m_instance = new FileTypeAssociationModel();
    }
    return m_instance;
}

FileTypeAssociationModel::FileTypeAssociationModel(QObject *parent)
    : QAbstractListModel(parent)
{
    // 初始化示例数据（可选）
    addEntry("docx", "C:/Program Files/Microsoft Office/root/Office16/WINWORD.EXE");
    addEntry("txt", "C:/Windows/notepad.exe");
}

int FileTypeAssociationModel::rowCount(const QModelIndex &parent) const {
    Q_UNUSED(parent);
    return m_entries.size();
}

QVariant FileTypeAssociationModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || index.row() >= m_entries.size()) {
        return QVariant();
    }

    const FileTypeEntry &entry = m_entries.at(index.row());

    switch (role) {
    case FileTypeRole:
        return entry.type;
    case AppPathRole:
        return entry.path;
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> FileTypeAssociationModel::roleNames() const {
    static QHash<int, QByteArray> roles {
        {FileTypeRole, "fileType"},
        {AppPathRole, "appPath"}
    };
    return roles;
}

QModelIndex FileTypeAssociationModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    return createIndex(row, column);
}

void FileTypeAssociationModel::addEntry(const QString &type, const QString &path) {
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_entries.append({type, path});
    endInsertRows();
}

bool FileTypeAssociationModel::removeEntry(int index) {
    if (index < 0 || index >= m_entries.size()) {
        return false;
    }

    beginRemoveRows(QModelIndex(), index, index);
    m_entries.removeAt(index);
    endRemoveRows();
    return true;
}

QVariant FileTypeAssociationModel::getData(int row, int role) const {
    if (row < 0 || row >= m_entries.size()) {
        return QVariant();
    }
    return data(index(row), role);
}

QVariantMap FileTypeAssociationModel::getEntry(int row) const {
    QVariantMap entry;
    if (row >= 0 && row < m_entries.size()) {
        const FileTypeEntry &item = m_entries.at(row);
        entry["fileType"] = item.type;
        entry["appPath"] = item.path;
    }
    return entry;
}

bool FileTypeAssociationModel::openFileByType(const QString &filePath) {
    // 实现打开文件的逻辑
    Q_UNUSED(filePath);
    return true;
}
