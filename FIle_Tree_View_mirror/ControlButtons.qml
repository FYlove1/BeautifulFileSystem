import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import TreeView_Test 1.0
import FluentUI
RowLayout {
    id: buttonContainer
    Layout.preferredHeight: 40
    Layout.alignment: Qt.AlignTop
    spacing: 10

    property var currentIndex: null  // 接收选中索引


    // 保存按钮
    FluButton {
        text: "保存数据"
        onClicked: {
            const filePath = appDataPath + "/data.json"
            MyTreeModel.saveToJson(filePath)
                ? console.log(`数据已保存到：${filePath}`)
                : console.error("保存失败！")
        }
    }

    // 加载按钮
    FluButton {
        text: "加载数据"
        onClicked: {
            const filePath = appDataPath + "/data.json"
            MyTreeModel.loadFromJson(filePath)
                ? console.log(`数据已加载：${filePath}`)
                : console.error("加载失败！")
        }
    }
}
