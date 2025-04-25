import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import TreeView_Test 1.0  // 确保模块名称和版本号
import FluentUI
import "../CommonComponents"


FluPage {
    // // 文件类型列表
    // property var fileTypes: [
    //     "png", "jpg", "doc", "docx", "xls", "xlsx", "ppt", "pptx", "pdf",
    //     "mp4", "mp3", "zip", "js", "sql", "txt", "html", "folder"
    // ]

    // ColumnLayout {
    //     anchors.centerIn: parent
    //     spacing: 20

    //     // 文件类型选择框
    //     ComboBox {
    //         id: fileTypeComboBox
    //         model: fileTypes // 绑定文件类型列表
    //         currentIndex: 0 // 默认选中第一个
    //         onActivated: {
    //             // 当选择项改变时，更新 fileType
    //             fileTypePicture.fileType = fileTypes[index];
    //         }
    //     }

    //     // 文件类型图片展示
    //     Rectangle_File_Type_Picture {
    //         id: fileTypePicture
    //         fileType: fileTypes[fileTypeComboBox.currentIndex] // 初始值
    //     }
    // }
}
