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
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuVST;
    QMenu *menuOptions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *oiu_crossqtClass)
    {
        if (oiu_crossqtClass->objectName().isEmpty())
            oiu_crossqtClass->setObjectName(QStringLiteral("oiu_crossqtClass"));
        oiu_crossqtClass->resize(960, 540);
        oiu_crossqtClass->setMinimumSize(QSize(960, 540));
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
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
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
        menuBar->addAction(menuOptions->menuAction());
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
        menuVST->setTitle(QApplication::translate("oiu_crossqtClass", "VST", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("oiu_crossqtClass", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class oiu_crossqtClass: public Ui_oiu_crossqtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OIU_CROSSQT_H
