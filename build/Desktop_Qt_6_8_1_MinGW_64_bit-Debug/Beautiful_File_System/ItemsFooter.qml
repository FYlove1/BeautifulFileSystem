pragma Singleton
import QtQuick 2.15
import FluentUI 1.0

FluObject {
    property var navigationView
    property var paneItemMenu
    id: footer_items

    // 分隔线
    FluPaneItemSeparator {}

    // 关于项
    FluPaneItem {
        title: "About"
        // icon: FluentIcons.Contact  // 图标已注释
        onTapListener: function() {
            console.log("Navigate to About page")  // 替换实际导航
            // FluRouter.navigate("/about")  // 实际应用中取消注释
        }
    }

}
