import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import TreeView_Test 1.0
import FluentUI
import "Test__ALL"

FluWindow {
    id: mainWindow
    width: 1200
    height: 800
    visible: true

    property var pageList: [
        {
            title: "首页",
            icon: "qrc:/Res/Picture/Components/file.png",
            page: "Page_TreeView.qml"
        },
        {
            title: "其他",
            icon: "qrc:/Res/Picture/Components/file.png",
            page: "Test__ALL/Test.qml"
        }
    ]

    property var additionalList: [
        {
            title: "设置",
            icon: "qrc:/Res/Picture/Components/setting.png",
            page: "Page_Setting.qml"
        }
    ]

    property int currentPageIndex: 0
    property int currentAdditionalIndex: -1
    property bool __layoutGuard: false

    // 安全的页面切换函数
    function setCurrentPage(index, isAdditional) {
        if (__layoutGuard) return;
        __layoutGuard = true;

        Qt.callLater(function() {
            if (isAdditional) {
                currentAdditionalIndex = index;
                currentPageIndex = -1;
            } else {
                currentPageIndex = index;
                currentAdditionalIndex = -1;
            }
            __layoutGuard = false;
        });
    }

    RowLayout {
        anchors.fill: parent
        spacing: 0

        // 左侧导航栏
        FluRectangle {
            Layout.preferredWidth: 180
            Layout.fillHeight: true
            color: "#f5f5f5"

            ColumnLayout {
                anchors.fill: parent
                spacing: 5

                Label {
                    text: "功能导航"
                    font.bold: true
                    font.pixelSize: 16
                    leftPadding: 15
                    topPadding: 15
                    bottomPadding: 10
                    Layout.alignment: Qt.AlignHCenter
                }

                ListView {
                    id: navListView
                    Layout.fillWidth: true
                    Layout.fillHeight: true
                    clip: true
                    model: pageList
                    spacing: 2

                    delegate: Button {
                        width: parent.width
                        height: 42

                        contentItem: Row {
                            spacing: 10
                            leftPadding: 20

                            Image {
                                source: modelData.icon
                                width: 16
                                height: 16
                                anchors.verticalCenter: parent.verticalCenter
                            }

                            Text {
                                text: modelData.title
                                font: parent.parent.font
                                color: parent.parent.down ? "gray" : "black"
                                verticalAlignment: Text.AlignVCenter
                            }
                        }

                        background: Rectangle {
                            color: currentPageIndex === index ? "#e0e0e0" : "transparent"
                            border.color: currentPageIndex === index ? "#a0a0a0" : "transparent"
                        }

                        onClicked: setCurrentPage(index, false)
                    }
                }

                Rectangle {
                    Layout.fillWidth: true
                    height: 1
                    color: "#e0e0e0"
                }

                ListView {
                    id: additionalListView
                    Layout.fillWidth: true
                    Layout.fillHeight: true
                    clip: true
                    model: additionalList
                    spacing: 2
                    verticalLayoutDirection: ListView.BottomToTop

                    delegate: Button {
                        width: parent.width
                        height: 42

                        contentItem: Row {
                            spacing: 10
                            leftPadding: 20

                            Image {
                                source: modelData.icon
                                width: 16
                                height: 16
                                anchors.verticalCenter: parent.verticalCenter
                            }

                            Text {
                                text: modelData.title
                                font: parent.parent.font
                                color: parent.parent.down ? "gray" : "black"
                                verticalAlignment: Text.AlignVCenter
                            }
                        }

                        background: Rectangle {
                            color: currentAdditionalIndex === index ? "#e0e0e0" : "transparent"
                            border.color: currentAdditionalIndex === index ? "#a0a0a0" : "transparent"
                        }

                        onClicked: setCurrentPage(index, true)
                    }
                }
            }
        }

        // 右侧内容区 - 使用单个Loader代替StackLayout
        Loader {
            id: contentLoader
            Layout.fillWidth: true
            Layout.fillHeight: true
            asynchronous: true

            source: {
                if (currentPageIndex !== -1) {
                    return pageList[currentPageIndex].page;
                } else if (currentAdditionalIndex !== -1) {
                    return additionalList[currentAdditionalIndex].page;
                }
                return "";
            }

            onStatusChanged: {
                if (status === Loader.Loading) {
                    loadingIndicator.visible = true;
                } else if (status === Loader.Ready) {
                    loadingIndicator.visible = false;
                }
            }
        }
    }

    BusyIndicator {
        id: loadingIndicator
        anchors.centerIn: parent
        running: visible
        visible: false
    }
}
