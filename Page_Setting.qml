import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import TreeView_Test 1.0  // 确保模块名称和版本号正确
import "OpenFileSetting"
import FluentUI
FluPage{
    OpenFileSetting{
        width: parent.width
        height: parent.height * 2/3
        anchors.top: parent.top
    }

}
