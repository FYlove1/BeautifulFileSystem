import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import FluentUI

FluLauncher {
    id: app
    Component.onCompleted: {
        FluApp.init(app)
        //FluApp.windowIcon = "qrc:/logo.ico"
    }
    Main{
    }
}
