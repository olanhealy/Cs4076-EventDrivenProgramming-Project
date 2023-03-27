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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionRepositry;
    QWidget *centralwidget;
    QSlider *timeSlider;
    QLabel *timeTracker;
    QLabel *mainHeading;
    QLabel *totalCalories;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *beefBurgers;
    QRadioButton *pastaBake;
    QRadioButton *buritoBowl;
    QRadioButton *shpeardsPie;
    QRadioButton *stirFry;
    QRadioButton *chickenCurry;
    QGroupBox *checkBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(760, 605);
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
        timeSlider = new QSlider(centralwidget);
        timeSlider->setObjectName("timeSlider");
        timeSlider->setGeometry(QRect(10, 520, 581, 20));
        timeSlider->setOrientation(Qt::Horizontal);
        timeTracker = new QLabel(centralwidget);
        timeTracker->setObjectName("timeTracker");
        timeTracker->setGeometry(QRect(630, 520, 63, 20));
        mainHeading = new QLabel(centralwidget);
        mainHeading->setObjectName("mainHeading");
        mainHeading->setGeometry(QRect(0, 0, 761, 61));
        mainHeading->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0)\n"
""));
        totalCalories = new QLabel(centralwidget);
        totalCalories->setObjectName("totalCalories");
        totalCalories->setGeometry(QRect(0, 430, 441, 71));
        totalCalories->setStyleSheet(QString::fromUtf8("background-color: \n"
"rgb(255, 170, 255)"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(600, 60, 160, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        beefBurgers = new QRadioButton(verticalLayoutWidget);
        beefBurgers->setObjectName("beefBurgers");

        verticalLayout->addWidget(beefBurgers);

        pastaBake = new QRadioButton(verticalLayoutWidget);
        pastaBake->setObjectName("pastaBake");

        verticalLayout->addWidget(pastaBake);

        buritoBowl = new QRadioButton(verticalLayoutWidget);
        buritoBowl->setObjectName("buritoBowl");

        verticalLayout->addWidget(buritoBowl);

        shpeardsPie = new QRadioButton(verticalLayoutWidget);
        shpeardsPie->setObjectName("shpeardsPie");

        verticalLayout->addWidget(shpeardsPie);

        stirFry = new QRadioButton(verticalLayoutWidget);
        stirFry->setObjectName("stirFry");

        verticalLayout->addWidget(stirFry);

        chickenCurry = new QRadioButton(verticalLayoutWidget);
        chickenCurry->setObjectName("chickenCurry");

        verticalLayout->addWidget(chickenCurry);

        checkBox = new QGroupBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 120, 201, 211));
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
        timeTracker->setText(QString());
        mainHeading->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">                                                                                       Olan's Cooking Application (21318204)</span></p></body></html>", nullptr));
        totalCalories->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:900;\">Total Calories = </span></p></body></html>", nullptr));
        beefBurgers->setText(QCoreApplication::translate("MainWindow", "Beef Burgers", nullptr));
        pastaBake->setText(QCoreApplication::translate("MainWindow", "Pasta Bake", nullptr));
        buritoBowl->setText(QCoreApplication::translate("MainWindow", "Burito Bowl", nullptr));
        shpeardsPie->setText(QCoreApplication::translate("MainWindow", "Shepards Pie", nullptr));
        stirFry->setText(QCoreApplication::translate("MainWindow", "Stir Fry", nullptr));
        chickenCurry->setText(QCoreApplication::translate("MainWindow", "Chicken Curry", nullptr));
        checkBox->setTitle(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
