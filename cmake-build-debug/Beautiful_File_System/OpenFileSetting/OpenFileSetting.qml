import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import TreeView_Test 1.0
import FluentUI
Item {

    ColumnLayout {
        anchors.fill: parent
        spacing: 10

        // 文件类型关联列表（带操作功能）
        ListView {
            id: fileTypeListView
            Layout.fillWidth: true
            Layout.fillHeight: true
            model: FileTypeAssociationModel
            clip: true
            spacing: 5
            currentIndex: -1

            // 高亮当前选中项
            highlight: Rectangle {
                color: "#e0e0e0"
                radius: 4
                width: fileTypeListView.width
                height: 40
            }
            highlightMoveDuration: 200

            delegate: Rectangle {
                id: delegateRoot
                width: ListView.view.width
                height: 40
                color: {
                    if (ListView.isCurrentItem) return "#e0e0e0"
                    if (mouseArea.containsMouse) return "#f5f5f5"
                    return "transparent"
                }
                radius: 4

                // 鼠标交互区域
                MouseArea {
                    id: mouseArea
                    anchors.fill: parent
                    hoverEnabled: true
                    onClicked: fileTypeListView.currentIndex = index
                }

                RowLayout {
                    anchors.fill: parent
                    anchors.margins: 5
                    spacing: 5

                    // 文件类型
                    Text {
                        text: "文件类型  " + model.fileType
                        font.pixelSize: 14
                        Layout.preferredWidth: 100
                        elide: Text.ElideRight
                        color: delegateRoot.ListView.isCurrentItem ? "blue" : "black"
                    }

                    // 关联路径
                    Text {
                        text: "所需应用程序   " + model.appPath
                        font.pixelSize: 14
                        Layout.fillWidth: true
                        elide: Text.ElideRight
                        color: delegateRoot.ListView.isCurrentItem ? "blue" : "black"
                    }

                    // 修改按钮
                    FluButton {
                        text: "修改"
                        onClicked: {
                            fileTypeListView.currentIndex = index
                            var entryData = FileTypeAssociationModel.getEntry(index)
                            editDialog.type = entryData.fileType
                            editDialog.path = entryData.appPath
                            editDialog.index = index
                            editDialog.open()
                        }
                    }

                    // 删除按钮
                    FluButton {
                        text: "删除"
                        onClicked: {
                            fileTypeListView.currentIndex = index
                            FileTypeAssociationModel.removeEntry(index)
                            // 删除后自动选择相邻项目
                            if (fileTypeListView.count > 0) {
                                fileTypeListView.currentIndex = Math.min(index, fileTypeListView.count - 1)
                            } else {
                                fileTypeListView.currentIndex = -1
                            }
                        }
                    }
                }
            }

            // 空列表提示
            Label {
                anchors.centerIn: parent
                text: "没有文件类型关联数据"
                visible: fileTypeListView.count === 0
            }
        }

        // 添加新关联按钮
        FluButton {
            text: "添加新关联"
            Layout.alignment: Qt.AlignLeft
            onClicked: addDialog.open()
        }
    }

    // 添加新关联的对话框
    Dialog {
        id: addDialog
        title: "添加新关联"
        standardButtons: Dialog.Ok | Dialog.Cancel
        width: 400

        ColumnLayout {
            spacing: 10
            width: parent.width

            // 文件类型输入框
            TextField {
                id: typeInput
                placeholderText: "文件类型（如：docx）"
                Layout.fillWidth: true
            }

            // 关联路径输入框
            TextField {
                id: pathInput
                placeholderText: "关联路径（如：C:/Program Files/...）"
                Layout.fillWidth: true
            }
        }

        onAccepted: {
            if (typeInput.text && pathInput.text) {
                FileTypeAssociationModel.addEntry(typeInput.text, pathInput.text)
                typeInput.clear()
                pathInput.clear()
            }
        }
    }

    // 修改关联的对话框
    Dialog {
        id: editDialog
        title: "修改关联"
        standardButtons: Dialog.Ok | Dialog.Cancel
        width: 400

        property string type: ""
        property string path: ""
        property int index: -1

        ColumnLayout {
            spacing: 10
            width: parent.width

            // 文件类型输入框
            TextField {
                id: editTypeInput
                placeholderText: "文件类型（如：docx）"
                text: editDialog.type
                Layout.fillWidth: true
            }

            // 关联路径输入框
            TextField {
                id: editPathInput
                placeholderText: "关联路径（如：C:/Program Files/...）"
                text: editDialog.path
                Layout.fillWidth: true
            }
        }

        onAccepted: {
            if (editTypeInput.text && editPathInput.text && editDialog.index !== -1) {
                // 直接修改模型数据而不是删除再添加
                FileTypeAssociationModel.setData(editDialog.index, editTypeInput.text, FileTypeAssociationModel.FileTypeRole)
                FileTypeAssociationModel.setData(editDialog.index, editPathInput.text, FileTypeAssociationModel.AppPathRole)
            }
        }
    }

    // 确保模型有setData方法
    Connections {
        target: FileTypeAssociationModel
        function onDataChanged(topLeft, bottomRight, roles) {
            fileTypeListView.forceLayout()
        }
    }
}
