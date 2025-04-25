import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import FluentUI
import TreeView_Test 1.0
import "Js_Function.js" as JsFunc

Item {
    id: dialogWrapper
    width: editDialog.width
    height: editDialog.height

    // 拖动功能实现
    property point dragStartPoint: Qt.point(0, 0)
    property bool isDragging: false

    // 存储输入值的属性
    property string inputName: ""
    property string inputType: ""
    property string inputContent: ""



    FluContentDialog {
        id: editDialog
        title: qsTr("编辑节点")
        width: 400
        height: 300
        buttonFlags: FluContentDialogType.NegativeButton | FluContentDialogType.PositiveButton

        negativeText: qsTr("取消")
        positiveText: qsTr("保存修改")

        onNegativeClicked: {
            close()
        }

        onPositiveClicked: {
            if(dialogWrapper.inputName !== "") {
                saveData(dialogWrapper.inputName, dialogWrapper.inputType, dialogWrapper.inputContent)
                dialogWrapper.inputName = ""
                dialogWrapper.inputType = ""
                dialogWrapper.inputContent = ""
                close()
            } else {
                showError(qsTr("名称不能为空"))
            }
        }

        contentDelegate: Component {
            ColumnLayout {
                width: parent.width
                spacing: 15

                FluTextBox {
                    id: newNameField
                    placeholderText: qsTr("名称")
                    Layout.fillWidth: true
                    onTextChanged: dialogWrapper.inputName = text
                }

                FluTextBox {
                    id: newTypeField
                    placeholderText: qsTr("类型")
                    Layout.fillWidth: true
                    onTextChanged: dialogWrapper.inputType = text
                }

                FluTextBox {
                    id: newContentField
                    placeholderText: qsTr("内容")
                    Layout.fillWidth: true
                    onTextChanged: dialogWrapper.inputContent = text
                }
            }
        }

        signal saveData(string name, string type, string content)

        function showError(message) {
            FluContentDialog.error(editDialog, message)
        }
    }

    // 打开对话框的方法
    function open() {
        inputName = "";
        inputType = "";
        inputContent = "";

        editDialog.open()
        // 初始位置居中
        if (parent) {
            x = parent.width / 2 - width / 2
            y = parent.height / 2 - height / 2
        }
    }

    // 关闭对话框的方法
    function close() {
        editDialog.close()
    }

    // 转发所有需要的信号
    signal saveData(string name, string type, string content)
    Connections {
        target: editDialog
        function onSaveData(name, type, content) {
            dialogWrapper.saveData(name, type, content)
        }
    }
}
