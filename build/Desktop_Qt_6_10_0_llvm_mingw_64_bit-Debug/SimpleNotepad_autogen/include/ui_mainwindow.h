/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelect_All;
    QAction *actionFont;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionReset_Zoom;
    QAction *actionToggle_Dark_Mode;
    QAction *actionToggle_Word_Wrap;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuNew;
    QMenu *menuOpen;
    QMenu *menuSave;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName("actionSelect_All");
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName("actionBold");
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName("actionItalic");
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName("actionUnderline");
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName("actionZoom_In");
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName("actionZoom_Out");
        actionReset_Zoom = new QAction(MainWindow);
        actionReset_Zoom->setObjectName("actionReset_Zoom");
        actionToggle_Dark_Mode = new QAction(MainWindow);
        actionToggle_Dark_Mode->setObjectName("actionToggle_Dark_Mode");
        actionToggle_Word_Wrap = new QAction(MainWindow);
        actionToggle_Word_Wrap->setObjectName("actionToggle_Word_Wrap");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, -60, 801, 621));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName("menuNew");
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        menuSave = new QMenu(menubar);
        menuSave->setObjectName("menuSave");
        menuExit = new QMenu(menubar);
        menuExit->setObjectName("menuExit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menubar->addAction(menuOpen->menuAction());
        menubar->addAction(menuSave->menuAction());
        menubar->addAction(menuExit->menuAction());
        menuNew->addSeparator();
        menuNew->addAction(actionNew);
        menuNew->addAction(actionOpen);
        menuNew->addAction(actionSave);
        menuNew->addAction(actionExit);
        menuOpen->addAction(actionUndo);
        menuOpen->addAction(actionRedo);
        menuOpen->addSeparator();
        menuOpen->addAction(actionCut);
        menuOpen->addAction(actionCopy);
        menuOpen->addAction(actionPaste);
        menuOpen->addAction(actionSelect_All);
        menuSave->addAction(actionZoom_In);
        menuSave->addAction(actionZoom_Out);
        menuSave->addAction(actionReset_Zoom);
        menuSave->addSeparator();
        menuSave->addAction(actionToggle_Dark_Mode);
        menuSave->addAction(actionToggle_Word_Wrap);
        menuExit->addAction(actionFont);
        menuExit->addSeparator();
        menuExit->addAction(actionBold);
        menuExit->addAction(actionItalic);
        menuExit->addAction(actionUnderline);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font...", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "Underline", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionReset_Zoom->setText(QCoreApplication::translate("MainWindow", "Reset Zoom", nullptr));
        actionToggle_Dark_Mode->setText(QCoreApplication::translate("MainWindow", "Toggle Dark Mode", nullptr));
        actionToggle_Word_Wrap->setText(QCoreApplication::translate("MainWindow", "Toggle Word Wrap", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuSave->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuExit->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
