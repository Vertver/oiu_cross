/********************************************************************************
** Form generated from reading UI file 'oiu_crossqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OIU_CROSSQT_H
#define UI_OIU_CROSSQT_H

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
    QListView *listView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuVST;
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
        QBrush brush1(QColor(25, 25, 25, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        oiu_crossqtClass->setPalette(palette);
        QIcon icon;
        QString iconThemeName = QStringLiteral("OIU");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("oiu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        }
        oiu_crossqtClass->setWindowIcon(icon);
        actionNew = new QAction(oiu_crossqtClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
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
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, -3, 70, 491));
        listView->setMinimumSize(QSize(70, 488));
        listView->setMaximumSize(QSize(70, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(41, 41, 41, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush4(QColor(57, 57, 57, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(9, 9, 9, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(32, 32, 32, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(45, 45, 45, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(215, 0, 115, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        QBrush brush10(QColor(0, 89, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush10);
        QBrush brush11(QColor(34, 34, 34, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        QBrush brush12(QColor(0, 120, 215, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush11);
        listView->setPalette(palette1);
        oiu_crossqtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(oiu_crossqtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuVST = new QMenu(menuBar);
        menuVST->setObjectName(QStringLiteral("menuVST"));
        oiu_crossqtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(oiu_crossqtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        oiu_crossqtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(oiu_crossqtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        oiu_crossqtClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuVST->menuAction());
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
        oiu_crossqtClass->setWindowTitle(QApplication::translate("oiu_crossqtClass", "oiu_crossqt", Q_NULLPTR));
        actionNew->setText(QApplication::translate("oiu_crossqtClass", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("oiu_crossqtClass", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("oiu_crossqtClass", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("oiu_crossqtClass", "Save As...", Q_NULLPTR));
        actionSave_and_exit->setText(QApplication::translate("oiu_crossqtClass", "Save and Exit", Q_NULLPTR));
        actionExit->setText(QApplication::translate("oiu_crossqtClass", "Exit", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("oiu_crossqtClass", "Copy", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("oiu_crossqtClass", "Paste", Q_NULLPTR));
        actionSelect->setText(QApplication::translate("oiu_crossqtClass", "Select", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("oiu_crossqtClass", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("oiu_crossqtClass", "Edit", Q_NULLPTR));
        menuVST->setTitle(QApplication::translate("oiu_crossqtClass", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class oiu_crossqtClass: public Ui_oiu_crossqtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OIU_CROSSQT_H
