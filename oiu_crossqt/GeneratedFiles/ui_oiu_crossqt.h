/********************************************************************************
** Form generated from reading UI file 'oiu_crossqt.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OIU_CROSSQT_H
#define UI_OIU_CROSSQT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oiu_crossqtClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionSave_and_exit;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelect;
    QWidget *centralWidget;
    QListView *listTools;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOptions;
    QMenu *menuHel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *oiu_crossqtClass)
    {
        if (oiu_crossqtClass->objectName().isEmpty())
            oiu_crossqtClass->setObjectName(QStringLiteral("oiu_crossqtClass"));
        oiu_crossqtClass->resize(960, 540);
        oiu_crossqtClass->setMinimumSize(QSize(960, 540));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(33, 33, 33, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(42, 42, 42, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        QBrush brush3(QColor(25, 25, 25, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(45, 45, 45, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        oiu_crossqtClass->setPalette(palette);
        oiu_crossqtClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        QString iconThemeName = QStringLiteral("OIU");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("oiu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        }
        oiu_crossqtClass->setWindowIcon(icon);
        oiu_crossqtClass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionNew = new QAction(oiu_crossqtClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setCheckable(true);
        actionOpen = new QAction(oiu_crossqtClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(oiu_crossqtClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(oiu_crossqtClass);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave_and_exit = new QAction(oiu_crossqtClass);
        actionSave_and_exit->setObjectName(QStringLiteral("actionSave_and_exit"));
        actionExit = new QAction(oiu_crossqtClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionCopy = new QAction(oiu_crossqtClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(oiu_crossqtClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionSelect = new QAction(oiu_crossqtClass);
        actionSelect->setObjectName(QStringLiteral("actionSelect"));
        centralWidget = new QWidget(oiu_crossqtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listTools = new QListView(centralWidget);
        listTools->setObjectName(QStringLiteral("listTools"));
        listTools->setEnabled(true);
        listTools->setGeometry(QRect(0, -3, 70, 4000));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listTools->sizePolicy().hasHeightForWidth());
        listTools->setSizePolicy(sizePolicy);
        listTools->setMinimumSize(QSize(70, 4000));
        listTools->setMaximumSize(QSize(70, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(41, 41, 41, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush6(QColor(57, 57, 57, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush7(QColor(9, 9, 9, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush7);
        QBrush brush8(QColor(32, 32, 32, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush9(QColor(31, 31, 31, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush10(QColor(215, 0, 115, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        QBrush brush11(QColor(0, 89, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush11);
        QBrush brush12(QColor(34, 34, 34, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush12);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush3);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        QBrush brush14(QColor(243, 243, 243, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        QBrush brush15(QColor(0, 120, 215, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        listTools->setPalette(palette1);
        listTools->setFocusPolicy(Qt::StrongFocus);
        listTools->setContextMenuPolicy(Qt::NoContextMenu);
        listTools->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        listTools->setFrameShape(QFrame::NoFrame);
        listTools->setLineWidth(0);
        listTools->setMovement(QListView::Static);
        listTools->setResizeMode(QListView::Fixed);
        oiu_crossqtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(oiu_crossqtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuHel = new QMenu(menuBar);
        menuHel->setObjectName(QStringLiteral("menuHel"));
        oiu_crossqtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(oiu_crossqtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setOrientation(Qt::Vertical);
        oiu_crossqtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(oiu_crossqtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush16(QColor(47, 47, 47, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        statusBar->setPalette(palette2);
        oiu_crossqtClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHel->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_and_exit);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionSelect);
        menuEdit->addSeparator();

        retranslateUi(oiu_crossqtClass);

        QMetaObject::connectSlotsByName(oiu_crossqtClass);
    } // setupUi

    void retranslateUi(QMainWindow *oiu_crossqtClass)
    {
        oiu_crossqtClass->setWindowTitle(QApplication::translate("oiu_crossqtClass", "oiu_crossqt", nullptr));
#ifndef QT_NO_STATUSTIP
        oiu_crossqtClass->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        actionNew->setText(QApplication::translate("oiu_crossqtClass", "New", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("oiu_crossqtClass", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("oiu_crossqtClass", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("oiu_crossqtClass", "Save As...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_and_exit->setText(QApplication::translate("oiu_crossqtClass", "Save and Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_and_exit->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("oiu_crossqtClass", "Exit", nullptr));
        actionCopy->setText(QApplication::translate("oiu_crossqtClass", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("oiu_crossqtClass", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionSelect->setText(QApplication::translate("oiu_crossqtClass", "Select", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSelect->setShortcut(QApplication::translate("oiu_crossqtClass", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        listTools->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        listTools->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        menuFile->setTitle(QApplication::translate("oiu_crossqtClass", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("oiu_crossqtClass", "Edit", nullptr));
        menuOptions->setTitle(QApplication::translate("oiu_crossqtClass", "Options", nullptr));
        menuHel->setTitle(QApplication::translate("oiu_crossqtClass", "Help", nullptr));
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class oiu_crossqtClass: public Ui_oiu_crossqtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OIU_CROSSQT_H
