import QtQuick 6.5
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import TreeView_Test 1.0  // 确保模块名称和版本号
import FluentUI
import "Js_Function.js" as JsFunc
import "../CommonComponents"
TreeView {
    id: treeView
    clip: true
    model: MyTreeModel

    selectionModel: ItemSelectionModel {
        id: treeViewSelectionModel
        model: MyTreeModel
        onCurrentIndexChanged: {
            console.log("选中项变更:", currentIndex)
            // 这里可以发出信号通知外部
        }
    }
    delegate: TreeViewDelegate {
        id: viewDelegate
        property real _padding: 5
        property real szHeight: contentItem.implicitHeight * 1.5
        property color backgroundColor: "transparent"
        indentation:15
        implicitWidth: _padding + contentItem.x + contentItem.implicitWidth + _padding
        implicitHeight: szHeight

        // 添加右键菜单
        FluMenu {
            id: contextMenu

            // 定义三个变量
            property string menuName: "11"
            property string menuType: "11"
            property string menuContent: "11"
            property var now_index: null // 初始化为 null
            FluMenuItem {
                text: "新建目录"
                onTriggered: {
                    console.log("准备新建目录");
                    // 清空之前的值
                    contextMenu.menuName = "";
                    contextMenu.menuType = "";
                    contextMenu.menuContent = "";

                    // 获取当前选中节点的索引
                    contextMenu.now_index = viewDelegate.treeView.index(viewDelegate.model.row, viewDelegate.model.column);
                    console.log("当前节点索引:", contextMenu.now_index);

                    // 打开创建对话框
                    creation_dialog.open();
                }
            }
            // 禁用默认的自动隐藏行为
            FluMenuItem {
                text: "打开"
                onTriggered: {
                    console.log("打开");
                    var path = model.path;
                    console.log(path);
                    FileTypeAssociationModel.OpenFileByType(path);
                }
            }
            FluMenuItem {
                text: "删除节点"
                onTriggered: {
                    const mi1 = viewDelegate.treeView.index(row, column)
                    MyTreeModel.removeItemAndChildren(mi1)

                }
            }

            FluMenuItem{
                text:"更改数据"
                onTriggered: {

                    const mi1 = viewDelegate.treeView.index(row, column)
                    creation_dialog.visible = true ;
                }
            }
            // 在菜单弹出时动态设置 now_index
            onAboutToShow: {
                now_index = viewDelegate.treeView.index(viewDelegate.model.row, viewDelegate.model.column);
            }
            // 单个连接处理保存数据
            Connections {
                target: creation_dialog
                function onSaveData(name, type, content) {
                    // 验证名称非空
                    if (name === "") {
                        console.log("错误：名称不能为空");
                        return;
                    }
                    console.log("正在添加新节点，父节点索引:", contextMenu.now_index);
                    if(contextMenu.now_index !== null){
                        MyTreeModel.addChildItem(
                                    contextMenu.now_index,  // 父节点索引
                                    name,                  // 节点名称
                                    type,                  // 节点类型
                                    content,               // 节点内容
                                    ""                    // 路径(留空)
                                    );
                        // 创建完成后重置状态
                        contextMenu.menuName = "";
                        contextMenu.menuType = "";
                        contextMenu.menuContent = "";
                        contextMenu.now_index = null;

                    }

                }
            }
        }
        onClicked: {
            const mi = viewDelegate.treeView.index(row, column)
            console.log("点击的模型索引：", mi)
        }
        Item {
            id: rootContainer
            anchors.fill: parent
            anchors.margins: _padding
            MouseArea {
                anchors.fill: parent
                acceptedButtons: Qt.RightButton

                onClicked: function(mouseEvent) {
                    if (mouseEvent.button === Qt.RightButton) {
                        contextMenu.popup();
                        // 调整菜单位置（使用全局坐标）
                        contextMenu.x = mouseEvent.x + rootContainer.x + _padding;
                        contextMenu.y = mouseEvent.y + rootContainer.y + _padding;
                    }
                }
            }
            DropArea {
                id: nodeDropArea
                anchors.fill: parent
                property var newDropFile: " "
                onEntered: function(drag) {
                    if (drag.urls.length < 1) {
                        drag.accepted = false
                        return false;
                    }
                    rootContainer.background.color = Qt.darker(rootContainer.background.color, 1.1)
                }
                onExited: {
                    rootContainer.background.color = rootContainer.background.implicitColor
                }

                onDropped: function(drop) {
                    // 获取目标父节点的索引
                    const parentIndex = treeView.index(viewDelegate.model.row, viewDelegate.model.column);

                    // 获取类型角色值（假设已正确实现getRoleFromName）
                    const typeRole = MyTreeModel.getRoleFromName("type");
                    const itemType = MyTreeModel.data(parentIndex, typeRole);

                    console.log("Parent Type is", itemType);

                    // 验证目标类型是否符合要求
                    if (itemType !== "Folder" && itemType !== "File_Set" && itemType !== "") {
                        console.log("不允许拖放到此类型节点上:", itemType);
                        showError("不允许拖放到此类型节点上")
                        return; // 取消操作
                    }

                    // 遍历所有拖放的文件路径
                    drop.urls.forEach(function(url) {
                        const rawPath = url.toString();
                        console.log("正在处理文件:", rawPath);

                        // 解析文件路径
                        const parsed = JsFunc.parseDroppedPath(rawPath);
                        if (!parsed) return; // 如果解析失败则跳过

                        // 将每个文件添加为子节点
                        MyTreeModel.addChildItem(
                                    parentIndex,
                                    parsed.name,
                                    parsed.type,
                                    " ", // 内容留空
                                    parsed.purePath
                                    );
                        showSuccess("拖入成功")

                    });
                }
            }
        }
        // 背景和选择高亮
        background: Rectangle {
            id: background
            anchors.fill: parent
            anchors.margins: 2  // 添加边距
            radius: 4  // 圆角半径

            // 统一背景色（浅灰色）
            color: "#f0f0f0"

            // 选中状态处理
            border.color: viewDelegate.model.row === treeView.currentRow
                          ? "#606060"  // 选中时的边框颜色（暗色）
                          : "transparent"
            border.width: viewDelegate.model.row === treeView.currentRow ? 1 : 0

            // 选中时的背景色（暗色）
            Rectangle {
                anchors.fill: parent
                color: viewDelegate.model.row === treeView.currentRow
                       ? "#e0e0e0"  // 选中时的背景色（比默认稍暗）
                       : "transparent"
                radius: parent.radius
            }

            // 左侧指示条（圆角）
            Rectangle {
                width: 4
                height: parent.height
                anchors.left: parent.left
                radius: 2
                visible: !viewDelegate.model.column
                color: treeView.currentRow === viewDelegate.model.row
                       ? "#404040"  // 暗色指示条
                       : "transparent"
            }
        }

        // 展开/折叠指示器
        indicator: Item {
            x: _padding + depth * indentation
            implicitWidth: szHeight
            implicitHeight: szHeight
            visible: isTreeNode && hasChildren

            rotation: expanded ? 90 : 0
            TapHandler {
                onSingleTapped: {
                    const index = treeView.index(viewDelegate.model.row, viewDelegate.model.column)
                    treeView.selectionModel.setCurrentIndex(index, ItemSelectionModel.NoUpdate)
                    treeView.toggleExpanded(viewDelegate.model.row)
                }
            }

            // 替换为图片
            Image {
                id: indicatorImage
                source: expanded ? "qrc:/Res/Picture/Components/shouqi.png" : "qrc:/Res/Picture/Components/xiala.png"
                width: 14  // 保持与原来文本相同大小
                height: 14
                anchors.centerIn: parent

                // 如果需要调整图片位置，可以使用这些属性
                // anchors.horizontalCenterOffset: 1  // 微调水平位置
                // anchors.verticalCenterOffset: 1   // 微调垂直位置
            }
        }

        // 内容区域
        contentItem: RowLayout {
            anchors.verticalCenter: parent.verticalCenter
            //spacing: 5

            // 名称和图标组合（带缩进）
            Row {
                spacing: 5  // 名称和图标间距
                //leftPadding: depth * indentation  // 关键：树形缩进

                // 名称标签
                Label {
                    text: model.name
                    font.bold: true
                    elide: Text.ElideRight
                    width: implicitWidth  // 自动宽度
                }

                // 文件类型图标
                Rectangle_File_Type_Picture {
                    fileType: model.type
                    width: 24
                    height: 24
                }
            }

            // 右侧：路径+内容（固定在最右侧）
            Column {
                spacing: 2
                Layout.alignment: Qt.AlignRight  // 关键：右对齐

                Label {
                    text: "路径: " + model.path
                    font.pointSize: 9
                    color: "darkgray"
                    elide: Text.ElideLeft
                    horizontalAlignment: Text.AlignRight
                }

                Label {
                    text: "内容: " + model.content
                    font.pointSize: 9
                    color: "darkgray"
                    elide: Text.ElideLeft
                    horizontalAlignment: Text.AlignRight
                }
            }
        }
    }

    // 列宽自适应
    columnWidthProvider: column => width

    Creation_Dialog{
        id: creation_dialog
    }


}





