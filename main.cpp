#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlEngine>
#include <QStandardPaths>
#include <QCommandLineParser>
#include "Csrc/My_Tree_Model.h"
#include "Csrc/filetypeassociationmanager.h"

#include <QGuiApplication>
int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;


    QString dataPath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);

    // 注册单例类型到 QML
    qmlRegisterSingletonType<MyTreeModel>(
        "TreeView_Test", 1, 0, "MyTreeModel",
        [](QQmlEngine*, QJSEngine*) -> QObject* {
            return MyTreeModel::instance(); // 返回单例实例
        });

    qmlRegisterSingletonType<FileTypeAssociationModel>(
        "TreeView_Test", 1, 0, "FileTypeAssociationModel",
        [](QQmlEngine*, QJSEngine*) -> QObject* {
            return FileTypeAssociationModel::instance(); // 返回单例实例
        });




    engine.rootContext()->setContextProperty("appDataPath", dataPath);
    // 保留原有错误处理和加载逻辑
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    //engine.loadFromModule("TreeView_Test", "Test_Window");
    engine.loadFromModule("Beautiful_File_System", "App");

    return app.exec();
}


