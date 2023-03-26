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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QPushButton *pushButton_HighCal;
    QPushButton *pushButton_LowCal;
    QPushButton *pushButton_Vegetarian;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *ingridentTen;
    QCheckBox *ingridentOne;
    QCheckBox *ingridentNine;
    QCheckBox *ingridentTwo;
    QCheckBox *ingridentThree;
    QCheckBox *ingridentFour;
    QCheckBox *ingridentFive;
    QCheckBox *ingridentSeven;
    QCheckBox *ingridentSix;
    QCheckBox *ingridentEight;
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
        pushButton_HighCal = new QPushButton(verticalLayoutWidget);
        pushButton_HighCal->setObjectName("pushButton_HighCal");

        verticalLayout->addWidget(pushButton_HighCal);

        pushButton_LowCal = new QPushButton(verticalLayoutWidget);
        pushButton_LowCal->setObjectName("pushButton_LowCal");

        verticalLayout->addWidget(pushButton_LowCal);

        pushButton_Vegetarian = new QPushButton(verticalLayoutWidget);
        pushButton_Vegetarian->setObjectName("pushButton_Vegetarian");

        verticalLayout->addWidget(pushButton_Vegetarian);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 60, 441, 371));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127)"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 439, 369));
        ingridentTen = new QCheckBox(scrollAreaWidgetContents);
        ingridentTen->setObjectName("ingridentTen");
        ingridentTen->setGeometry(QRect(0, 0, 88, 24));
        ingridentOne = new QCheckBox(scrollAreaWidgetContents);
        ingridentOne->setObjectName("ingridentOne");
        ingridentOne->setGeometry(QRect(0, 20, 88, 24));
        ingridentNine = new QCheckBox(scrollAreaWidgetContents);
        ingridentNine->setObjectName("ingridentNine");
        ingridentNine->setGeometry(QRect(0, 40, 88, 24));
        ingridentTwo = new QCheckBox(scrollAreaWidgetContents);
        ingridentTwo->setObjectName("ingridentTwo");
        ingridentTwo->setGeometry(QRect(0, 60, 88, 24));
        ingridentThree = new QCheckBox(scrollAreaWidgetContents);
        ingridentThree->setObjectName("ingridentThree");
        ingridentThree->setGeometry(QRect(0, 80, 88, 24));
        ingridentFour = new QCheckBox(scrollAreaWidgetContents);
        ingridentFour->setObjectName("ingridentFour");
        ingridentFour->setGeometry(QRect(0, 100, 88, 24));
        ingridentFive = new QCheckBox(scrollAreaWidgetContents);
        ingridentFive->setObjectName("ingridentFive");
        ingridentFive->setGeometry(QRect(0, 120, 88, 24));
        ingridentSeven = new QCheckBox(scrollAreaWidgetContents);
        ingridentSeven->setObjectName("ingridentSeven");
        ingridentSeven->setGeometry(QRect(0, 140, 88, 24));
        ingridentSix = new QCheckBox(scrollAreaWidgetContents);
        ingridentSix->setObjectName("ingridentSix");
        ingridentSix->setGeometry(QRect(0, 160, 88, 24));
        ingridentEight = new QCheckBox(scrollAreaWidgetContents);
        ingridentEight->setObjectName("ingridentEight");
        ingridentEight->setGeometry(QRect(0, 180, 88, 24));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 760, 26));
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
        pushButton_HighCal->setText(QCoreApplication::translate("MainWindow", "High calorie meals ", nullptr));
        pushButton_LowCal->setText(QCoreApplication::translate("MainWindow", "Low Calorie meals", nullptr));
        pushButton_Vegetarian->setText(QCoreApplication::translate("MainWindow", "Vegeterian meals", nullptr));
        ingridentTen->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentOne->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentNine->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentTwo->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentThree->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentFour->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentFive->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentSeven->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentSix->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        ingridentEight->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
