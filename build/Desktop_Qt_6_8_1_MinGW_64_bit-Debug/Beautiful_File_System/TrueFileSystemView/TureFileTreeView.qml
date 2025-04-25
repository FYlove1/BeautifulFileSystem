import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import TreeView_Test 1.0

TreeView {
    id: fileTreeView
    model: TruePathModel {}

    property string currentFilePath: ""
    property string currentFileContent: ""

    columnWidthProvider: function(column) { return width - 30 }
    //indentation: 30

    delegate: TreeViewDelegate {
        id: treeDelegate

        required property string fileName
        required property string filePath
        required property bool isDir

        contentItem: RowLayout {
            spacing: 10



            Text {
                text: fileName
                elide: Text.ElideRight
                Layout.fillWidth: true
                font.pixelSize: 14
            }
        }

        onDoubleClicked: {
            if (isDir) {
                fileTreeView.expand(row)
            } else {
                currentFilePath = filePath
                model.readFileContent(filePath)
            }
        }
    }

    // 上下文菜单
    Menu {
        id: contextMenu
        MenuItem {
            text: "打开"
            onTriggered: {
                if (fileTreeView.currentItem.isDir) {
                    fileTreeView.expand(fileTreeView.currentIndex)
                } else {
                    currentFilePath = fileTreeView.currentItem.filePath
                    model.readFileContent(currentFilePath)
                }
            }
        }
        MenuItem {
            text: "设为根目录"
            onTriggered: model.initializeWithPath(fileTreeView.currentItem.filePath)
        }
        MenuItem {
            text: "刷新"
            onTriggered: model.initializeWithPath(model.rootPath)
        }
        MenuSeparator {}
        MenuItem {
            text: "新建文件夹"
            onTriggered: creationDialog.open()
        }
        MenuItem {
            text: "重命名"
            onTriggered: renameDialog.open()
        }
    }



    Connections {
        target: model
        function onFileContentReady(content) {
            currentFileContent = content
            // 可以在这里处理文件内容，比如显示在编辑器中
        }
        function onOperationError(message) {
            errorPopup.text = message
            errorPopup.open()
        }
    }

    Popup {
        id: errorPopup
        property string text: ""
        anchors.centerIn: Overlay.overlay
        width: 300
        height: 150
        modal: true

        Label {
            anchors.fill: parent
            anchors.margins: 10
            text: errorPopup.text
            wrapMode: Text.Wrap
            verticalAlignment: Text.AlignVCenter
        }
    }
}
