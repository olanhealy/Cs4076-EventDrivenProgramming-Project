/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionRepositry;
    QWidget *centralwidget;
    QPushButton *pushButton_HighCal;
    QPushButton *pushButton_LowCal;
    QPushButton *pushButton_Vegetarian;
    QSlider *timeSlider;
    QLabel *timeTracker;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(760, 600);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionRepositry = new QAction(MainWindow);
        actionRepositry->setObjectName("actionRepositry");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/GitHub_logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRepositry->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_HighCal = new QPushButton(centralwidget);
        pushButton_HighCal->setObjectName("pushButton_HighCal");
        pushButton_HighCal->setGeometry(QRect(550, 120, 141, 91));
        pushButton_LowCal = new QPushButton(centralwidget);
        pushButton_LowCal->setObjectName("pushButton_LowCal");
        pushButton_LowCal->setGeometry(QRect(550, 240, 141, 91));
        pushButton_Vegetarian = new QPushButton(centralwidget);
        pushButton_Vegetarian->setObjectName("pushButton_Vegetarian");
        pushButton_Vegetarian->setGeometry(QRect(550, 360, 141, 91));
        timeSlider = new QSlider(centralwidget);
        timeSlider->setObjectName("timeSlider");
        timeSlider->setGeometry(QRect(20, 500, 551, 20));
        timeSlider->setOrientation(Qt::Horizontal);
        timeTracker = new QLabel(centralwidget);
        timeTracker->setObjectName("timeTracker");
        timeTracker->setGeometry(QRect(590, 500, 63, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(12, 20, 711, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0)\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 760, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionQuit);
        menuAbout->addAction(actionRepositry);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRepositry->setText(QCoreApplication::translate("MainWindow", "Repositry", nullptr));
#if QT_CONFIG(shortcut)
        actionRepositry->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_HighCal->setText(QCoreApplication::translate("MainWindow", "High calorie meals ", nullptr));
        pushButton_LowCal->setText(QCoreApplication::translate("MainWindow", "Low Calorie meals", nullptr));
        pushButton_Vegetarian->setText(QCoreApplication::translate("MainWindow", "Vegeterian meals", nullptr));
        timeTracker->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">                                                                                       Olan's Cooking Application (21318204)</span></p></body></html>", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
