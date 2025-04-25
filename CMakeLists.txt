cmake_minimum_required(VERSION 3.16)

project(Beautiful_File_System_main VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt6 REQUIRED COMPONENTS Quick Gui Widgets Qml)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appBeautiful_File_System_main
    main.cpp
    Csrc/filetypeassociationmanager.cpp
    Csrc/filetypeassociationmanager.h
    Csrc/My_Tree_Model.cpp
    Csrc/My_Tree_Model.h
    Resource.qrc
)

qt_add_qml_module(appBeautiful_File_System_main
    URI Beautiful_File_System
    VERSION 1.0
    QML_FILES
    Main.qml
    QML_FILES FIle_Tree_View_mirror/File_Tree_View.qml
    QML_FILES FIle_Tree_View_mirror/ControlButtons.qml
    QML_FILES Page_TreeView.qml
    QML_FILES FIle_Tree_View_mirror/Js_Function.js
    QML_FILES FIle_Tree_View_mirror/Creation_Dialog.qml
    QML_FILES ItemsOriginal.qml
    QML_FILES ItemsFooter.qml
    QML_FILES Test__ALL/Test.qml
    QML_FILES App.qml
    QML_FILES CommonComponents/Rectangle_File_Type_Picture.qml
    QML_FILES Test__ALL/TestICON.qml
    QML_FILES OpenFileSetting/OpenFileSetting.qml
    QML_FILES Page_Setting.qml
)


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appBeautiful_File_System_main PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appBeautiful_File_System_main
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appBeautiful_File_System_main
    PRIVATE Qt6::Quick
    Qt6::Core
    Qt6::Gui 
    Qt6::Qml
    Qt6::Widgets
    fluentuiplugin
)

include(GNUInstallDirs)
install(TARGETS appBeautiful_File_System_main
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

add_subdirectory(FluentUI)


