import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import TreeView_Test 1.0  // 确保模块名称和版本号
import FluentUI
Rectangle {
    id: root

    signal fileClicked(string filePath)
    property alias rootIndex: fileTreeView.rootIndex

    TreeView {
        id: fileTreeView
        anchors.fill: parent
        model: TruePathModel
        clip: true

        // 简化版委托
        delegate: TreeViewDelegate {
            id: treeDelegate
            implicitWidth: fileTreeView.width
            implicitHeight: 30
            indentation: 15

            // 必需属性
            required property string fileName
            required property string filePath
            required property bool isDir

            // 指示器（文件夹/文件图标）
            indicator: Image {
                x: treeDelegate.leftMargin + (treeDelegate.depth * treeDelegate.indentation)
                anchors.verticalCenter: parent.verticalCenter
                source: treeDelegate.isDir ?
                    (treeDelegate.expanded ? "qrc:/Icons/folder-open.svg" : "qrc:/Icons/folder.svg")
                    : "qrc:/Icons/file.svg"
                sourceSize.width: 20
                sourceSize.height: 20
            }

            // 内容项
            contentItem: Text {
                text: treeDelegate.fileName
                elide: Text.ElideRight
                color: "white"
            }

            // 背景（选中/悬停状态）
            background: Rectangle {
                color: treeDelegate.selected ? "#3A3A3A" :
                    (hoverHandler.hovered ? "#2A2A2A" : "transparent")
            }

            // 悬停处理
            HoverHandler {
                id: hoverHandler
            }

            // 点击处理（简化版）
            TapHandler {
                acceptedButtons: Qt.LeftButton
                onTapped: {
                    if (treeDelegate.isDir) {
                        fileTreeView.toggleExpanded(treeDelegate.row)
                    } else {
                        root.fileClicked(treeDelegate.filePath)
                    }
                }
            }
        }

        // 垂直滚动条（简化版）
        ScrollIndicator.vertical: ScrollIndicator {
            active: true
            implicitWidth: 10
        }
    }

    // 连接模型信号
    Connections {
        target: TruePathModel
        function onFileContentReady(content) {
            // 可以在这里处理文件内容
            console.log("File content ready, length:", content.length)
        }
        function onOperationError(message) {
            console.error("Operation error:", message)
        }
    }
}
