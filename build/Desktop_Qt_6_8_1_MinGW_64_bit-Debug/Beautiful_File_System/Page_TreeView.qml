import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts
import FluentUI
import "FIle_Tree_View_mirror"
import TreeView_Test 1.0  // 确保模块名称和版本号
FluPage {
    id: mainPage
    title: "主页面"
    //header: Text { text: "树视图管理器" }

    RowLayout {
        anchors.fill: parent
        spacing: 10

        // 左侧树视图 (占70%宽度)
        File_Tree_View {
            id: treeView
            Layout.fillHeight: true
            Layout.preferredWidth: parent.width * 0.7
            // 监听选中项变化
            selectionModel.onCurrentIndexChanged: {
                if (selectionModel.currentIndex!==null) {
                    // 更新名称编辑器
                    const nameRole = MyTreeModel.getRoleFromName("name");
                    nameEditor.text =MyTreeModel.data(selectionModel.currentIndex, nameRole);
                    // 更新内容编辑器
                    const contentRole = MyTreeModel.getRoleFromName("content");
                    contentEditor.text =MyTreeModel.data(selectionModel.currentIndex, contentRole);
                    // 更新路径文本展示
                    const pathRole = MyTreeModel.getRoleFromName("path");
                    pathTextShower.text =MyTreeModel.data(selectionModel.currentIndex, pathRole);
                } else {
                    // 如果没有选中项，清空编辑器
                    nameEditor.text = ""
                    contentEditor.text = ""
                }
            }
            Component.onCompleted: {
                //在创建的时候读取数据
                const filePath = appDataPath + "/data.json"
                MyTreeModel.loadFromJson(filePath)
                    ? console.log(`数据已加载：${filePath}`)
                    : console.error("加载失败！")
                //设置 展示 索引,, 应该为根节点的 子节点, 仍未完成 !!!
                //MyTreeModel.createNewRootItem("wenjianguanli","Test11")

                var topItems = MyTreeModel.getTopLevelItems();
                console.log("顶级节点数量:", topItems.length);

                topItems.forEach(function(item, index) {
                    // 如果是 QStandardItem 指针
                    // var name = item.data(MyTreeModel.NameRole);

                    // 如果是 QModelIndex
                    var name = MyTreeModel.data(item, MyTreeModel.NameRole);
                    console.log("顶级节点", index, ":", name);
                });
                console.log(topItems[0])

                treeView.rootIndex = topItems[0]

                // 确保视图更新
                Qt.callLater(function() {
                    treeView.forceLayout();
                    treeView.expand(topItems[0]); // 如果需要展开
                });
            }
        }

        // 右侧内容编辑器 (占30%宽度)
        Rectangle {
            Layout.fillHeight: true
            Layout.fillWidth: true
            color: FluTheme.dark ? "#333333" : "#f5f5f5"
            border.color: "#cccccc"
            radius: 4

            ColumnLayout {
                anchors.fill: parent
                anchors.margins: 15
                spacing: 15

                // 节点名称编辑区
                ColumnLayout {
                    spacing: 5
                    Layout.fillWidth: true

                    FluText {
                        text: "节点名称:"
                        font: FluTextStyle.BodyStrong
                        color: FluTheme.dark ? "#ffffff" : "#333333"
                    }

                    FluTextBox {
                        id: nameEditor
                        Layout.fillWidth: true
                        placeholderText: "输入节点名称"
                        onEditingFinished: {
                            if(treeView.selectionModel.currentIndex.isValid) {
                                MyTreeModel.setDataByIndex(
                                            treeView.selectionModel.currentIndex,
                                            text,
                                            MyTreeModel.NameRole
                                            )
                            }
                        }
                    }
                }

                // 路径显示区
                ColumnLayout {
                    spacing: 5
                    Layout.fillWidth: true

                    FluText {
                        text: "路径:"
                        font: FluTextStyle.BodyStrong
                        color: FluTheme.dark ? "#ffffff" : "#333333"
                    }

                    FluCopyableText {
                        id: pathTextShower
                        Layout.fillWidth: true
                        text: "未选择节点"
                        font: FluTextStyle.Caption
                        color: FluTheme.dark ? "#aaaaaa" : "#666666"
                        wrapMode: Text.WrapAnywhere
                    }
                }

                // 内容编辑区
                ColumnLayout {
                    spacing: 5
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    FluText {
                        text: "节点内容:"
                        font: FluTextStyle.BodyStrong
                        color: FluTheme.dark ? "#ffffff" : "#333333"
                    }

                    FluMultilineTextBox {
                        id: contentEditor
                        Layout.fillWidth: true
                        Layout.fillHeight: true
                        placeholderText: "输入节点内容"
                        onEditingFinished: {
                            if(treeView.selectionModel.currentIndex.isValid) {
                                const contentRole = MyTreeModel.getRoleFromName("content");
                                MyTreeModel.setDataByIndex(
                                            treeView.selectionModel.currentIndex,
                                            text,
                                            contentRole
                                            )
                            }
                        }
                    }
                }

                // 操作按钮区
                RowLayout {
                    Layout.alignment: Qt.AlignRight

                    FluButton {
                        text: "保存修改"
                        onClicked: {
                            contentEditor.editingFinished()
                            nameEditor.editingFinished()
                            showSuccess("修改已保存")
                        }
                    }

                    FluButton {
                        text: "重置"
                        onClicked: {
                            if(treeView.selectionModel.currentIndex.isValid) {
                                const nameRole = MyTreeModel.getRoleFromName("name");
                                nameEditor.text = MyTreeModel.data(treeView.selectionModel.currentIndex, nameRole);

                                const contentRole = MyTreeModel.getRoleFromName("content");
                                contentEditor.text = MyTreeModel.data(treeView.selectionModel.currentIndex, contentRole);
                            }
                        }
                    }
                }
            }

            ControlButtons{

            }
        }
    }
}
