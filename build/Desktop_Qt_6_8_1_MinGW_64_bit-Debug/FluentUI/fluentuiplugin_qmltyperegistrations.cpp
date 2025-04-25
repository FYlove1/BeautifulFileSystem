/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<Def.h>)
#  include <Def.h>
#endif
#if __has_include(<FluAccentColor.h>)
#  include <FluAccentColor.h>
#endif
#if __has_include(<FluApp.h>)
#  include <FluApp.h>
#endif
#if __has_include(<FluCaptcha.h>)
#  include <FluCaptcha.h>
#endif
#if __has_include(<FluColors.h>)
#  include <FluColors.h>
#endif
#if __has_include(<FluFrameless.h>)
#  include <FluFrameless.h>
#endif
#if __has_include(<FluHotkey.h>)
#  include <FluHotkey.h>
#endif
#if __has_include(<FluQrCodeItem.h>)
#  include <FluQrCodeItem.h>
#endif
#if __has_include(<FluRectangle.h>)
#  include <FluRectangle.h>
#endif
#if __has_include(<FluTableModel.h>)
#  include <FluTableModel.h>
#endif
#if __has_include(<FluTableSortProxyModel.h>)
#  include <FluTableSortProxyModel.h>
#endif
#if __has_include(<FluTextStyle.h>)
#  include <FluTextStyle.h>
#endif
#if __has_include(<FluTheme.h>)
#  include <FluTheme.h>
#endif
#if __has_include(<FluTools.h>)
#  include <FluTools.h>
#endif
#if __has_include(<FluTreeModel.h>)
#  include <FluTreeModel.h>
#endif
#if __has_include(<FluWatermark.h>)
#  include <FluWatermark.h>
#endif
#if __has_include(<FluentIconDef.h>)
#  include <FluentIconDef.h>
#endif
#if __has_include(<TimePlot.h>)
#  include <TimePlot.h>
#endif
#if __has_include(<axis.h>)
#  include <axis.h>
#endif
#if __has_include(<baseplot.h>)
#  include <baseplot.h>
#endif
#if __has_include(<grid.h>)
#  include <grid.h>
#endif
#if __has_include(<ticker.h>)
#  include <ticker.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_FluentUI()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<FluAccentColor>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluApp>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluCalendarViewType::staticMetaObject;},
            "FluCalendarViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluCalendarViewType::staticMetaObject, "FluentUI", 1, nullptr, &FluCalendarViewType::staticMetaObject, nullptr);
    QMetaType::fromType<FluCalendarViewType::DisplayMode>().id();
    qmlRegisterTypesAndRevisions<FluCaptcha>("FluentUI", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluColors>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluContentDialogType::staticMetaObject;},
            "FluContentDialogType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluContentDialogType::staticMetaObject, "FluentUI", 1, nullptr, &FluContentDialogType::staticMetaObject, nullptr);
    QMetaType::fromType<FluContentDialogType::ButtonFlag>().id();
    qmlRegisterTypesAndRevisions<FluFrameless>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluHotkey>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluNavigationViewType::staticMetaObject;},
            "FluNavigationViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluNavigationViewType::staticMetaObject, "FluentUI", 1, nullptr, &FluNavigationViewType::staticMetaObject, nullptr);
    QMetaType::fromType<FluNavigationViewType::DisplayMode>().id();
    QMetaType::fromType<FluNavigationViewType::PageMode>().id();
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluPageType::staticMetaObject;},
            "FluPageType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluPageType::staticMetaObject, "FluentUI", 1, nullptr, &FluPageType::staticMetaObject, nullptr);
    QMetaType::fromType<FluPageType::LaunchMode>().id();
    qmlRegisterTypesAndRevisions<FluQrCodeItem>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluRectangle>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluSheetType::staticMetaObject;},
            "FluSheetType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluSheetType::staticMetaObject, "FluentUI", 1, nullptr, &FluSheetType::staticMetaObject, nullptr);
    QMetaType::fromType<FluSheetType::Position>().id();
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluStatusLayoutType::staticMetaObject;},
            "FluStatusLayoutType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluStatusLayoutType::staticMetaObject, "FluentUI", 1, nullptr, &FluStatusLayoutType::staticMetaObject, nullptr);
    QMetaType::fromType<FluStatusLayoutType::StatusMode>().id();
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluTabViewType::staticMetaObject;},
            "FluTabViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluTabViewType::staticMetaObject, "FluentUI", 1, nullptr, &FluTabViewType::staticMetaObject, nullptr);
    QMetaType::fromType<FluTabViewType::TabWidthBehavior>().id();
    QMetaType::fromType<FluTabViewType::CloseButtonVisibility>().id();
    qmlRegisterTypesAndRevisions<FluTableModel>("FluentUI", 1);
    qmlRegisterAnonymousType<QAbstractItemModel, 254>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluTableSortProxyModel>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluTextStyle>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluTheme>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluThemeType::staticMetaObject;},
            "FluThemeType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluThemeType::staticMetaObject, "FluentUI", 1, nullptr, &FluThemeType::staticMetaObject, nullptr);
    QMetaType::fromType<FluThemeType::DarkMode>().id();
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluTimePickerType::staticMetaObject;},
            "FluTimePickerType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluTimePickerType::staticMetaObject, "FluentUI", 1, nullptr, &FluTimePickerType::staticMetaObject, nullptr);
    QMetaType::fromType<FluTimePickerType::HourFormat>().id();
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluTimelineType::staticMetaObject;},
            "FluTimelineType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluTimelineType::staticMetaObject, "FluentUI", 1, nullptr, &FluTimelineType::staticMetaObject, nullptr);
    QMetaType::fromType<FluTimelineType::Mode>().id();
    qmlRegisterTypesAndRevisions<FluTools>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<FluTreeModel>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluTreeViewType::staticMetaObject;},
            "FluTreeViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluTreeViewType::staticMetaObject, "FluentUI", 1, nullptr, &FluTreeViewType::staticMetaObject, nullptr);
    QMetaType::fromType<FluTreeViewType::SelectionMode>().id();
    qmlRegisterTypesAndRevisions<FluWatermark>("FluentUI", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluWindowType::staticMetaObject;},
            "FluWindowType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluWindowType::staticMetaObject, "FluentUI", 1, nullptr, &FluWindowType::staticMetaObject, nullptr);
    QMetaType::fromType<FluWindowType::LaunchMode>().id();
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &FluentIcons::staticMetaObject;},
            "FluentIcons");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&FluentIcons::staticMetaObject, "FluentUI", 1, nullptr, &FluentIcons::staticMetaObject, nullptr);
    QMetaType::fromType<FluentIcons::Type>().id();
    QMetaType::fromType<QAbstractProxyModel *>().id();
    QMetaType::fromType<QAbstractTableModel *>().id();
    QMetaType::fromType<QSortFilterProxyModel *>().id();
    qmlRegisterTypesAndRevisions<QmlQCustomPlot::Axis>("FluentUI", 1);
    QMetaType::fromType<QmlQCustomPlot::Axis::TickerType>().id();
    qmlRegisterTypesAndRevisions<QmlQCustomPlot::BasePlot>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<QmlQCustomPlot::Grid>("FluentUI", 1);
    QMetaType::fromType<QmlQCustomPlot::Grid::LineType>().id();
    qmlRegisterTypesAndRevisions<QmlQCustomPlot::Ticker>("FluentUI", 1);
    qmlRegisterTypesAndRevisions<QmlQCustomPlot::TimePlot>("FluentUI", 1);
    QT_WARNING_POP
    qmlRegisterModule("FluentUI", 1, 0);
}

static const QQmlModuleRegistration fluentUIRegistration("FluentUI", qml_register_types_FluentUI);
