import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import TreeView_Test 1.0  // 确保模块名称和版本号
import FluentUI
Item {
    property string fileType: "" // 外部传入的文件类型
    // 固定图标大小（根据你的布局需求调整）
    property real iconSize: 25 // 推荐 16-24px 以适应行高

    // 限制组件尺寸
    implicitWidth: iconSize
    implicitHeight: iconSize

    Image {
        id: fileImage
        anchors.fill: parent
        source: getImageSource(fileType)
        fillMode: Image.PreserveAspectFit // 保持比例
        mipmap: true // 平滑缩放
    }

    function getImageSource(type) {
        // 将文件类型转换为小写，避免大小写敏感问题
        type = type.toLowerCase();

        // 图片类型
        if (["png", "jpg", "jpeg", "bmp", "gif", "tiff", "webp"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/tupian.png";
        }

        // 文档类型
        if (["doc", "docx", "odt"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/word.png";
        }

        // 表格类型
        if (["xls", "xlsx", "csv", "ods"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/excel.png";
        }

        // 演示文稿类型
        if (["ppt", "pptx", "odp"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/PPT.png";
        }

        // PDF 类型
        if (["pdf"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/PDF.png";
        }

        // 视频类型
        if (["mp4", "avi", "mkv", "mov", "wmv", "flv", "mpeg"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/shipin.png";
        }

        // 音频类型
        if (["mp3", "wav", "aac", "flac", "ogg", "wma"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/yinpin.png";
        }

        // 压缩包类型
        if (["zip", "rar", "7z", "tar", "gz", "bz2"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/yasuobao.png";
        }

        // 脚本类型
        if (["js", "py", "sh", "bat", "php", "java", "cpp", "c", "html", "css"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/jiaoben.png";
        }

        // 数据库类型
        if (["sql", "db", "sqlite", "mdb", "accdb"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/shujuku.png";
        }

        // 文本类型
        if (["txt", "log", "ini", "conf", "md"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/TXT.png";
        }

        // 网页类型
        if (["html", "htm", "xml", "json", "yaml"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/wangye.png";
        }

        // 文件夹类型
        if (["folder", "dir"].includes(type)) {
            return "qrc:/Res/Picture/File_Type_Icon/wenjianjia.png";
        }

        // 默认未知类型
        return "qrc:/Res/Picture/File_Type_Icon/weizhi.png";
    }
}
