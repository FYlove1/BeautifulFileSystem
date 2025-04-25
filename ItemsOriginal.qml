pragma Singleton
import QtQuick 2.15
import FluentUI 1.0

FluObject {
    property var navigationView
    property var paneItemMenu

    // 主页项，包含所有必需的属性



    FluPaneItem {
        id: item_home
        title: "Home"
        menuDelegate: paneItemMenu
        icon: "qrc:/Picture/PNG/barrage.png"
        url: "qrc:/testqml.qml"
        onTap: {
            if(navigationView) {
                console.log("navigationView is" ,navigationView)
                navigationView.push(url)
            }
        }
    }

    FluPaneItemSeparator {
        spacing: 10
        size: 1
    }


    FluPaneItem {
        id: item_treeview
        title: "Tree View"
        menuDelegate: paneItemMenu
        icon: "qrc:/Picture/PNG/brush_fill.png"
        url: "Page_TreeView.qml"
        onTap: {
             console.log("navigationView is" ,navigationView)
            if(navigationView) {
                navigationView.push(url)
            }
        }
    }
}
