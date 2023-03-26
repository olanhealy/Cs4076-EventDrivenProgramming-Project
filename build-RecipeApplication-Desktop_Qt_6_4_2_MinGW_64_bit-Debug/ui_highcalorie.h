/********************************************************************************
** Form generated from reading UI file 'highcalorie.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHCALORIE_H
#define UI_HIGHCALORIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Highcalorie
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *chickenCurry;
    QRadioButton *beefBurgers;
    QRadioButton *homemadePizza;

    void setupUi(QDialog *Highcalorie)
    {
        if (Highcalorie->objectName().isEmpty())
            Highcalorie->setObjectName("Highcalorie");
        Highcalorie->resize(400, 300);
        Highcalorie->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127)"));
        verticalLayout = new QVBoxLayout(Highcalorie);
        verticalLayout->setObjectName("verticalLayout");
        chickenCurry = new QRadioButton(Highcalorie);
        chickenCurry->setObjectName("chickenCurry");

        verticalLayout->addWidget(chickenCurry);

        beefBurgers = new QRadioButton(Highcalorie);
        beefBurgers->setObjectName("beefBurgers");
        beefBurgers->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(beefBurgers);

        homemadePizza = new QRadioButton(Highcalorie);
        homemadePizza->setObjectName("homemadePizza");

        verticalLayout->addWidget(homemadePizza);


        retranslateUi(Highcalorie);

        QMetaObject::connectSlotsByName(Highcalorie);
    } // setupUi

    void retranslateUi(QDialog *Highcalorie)
    {
        Highcalorie->setWindowTitle(QCoreApplication::translate("Highcalorie", "Dialog", nullptr));
        chickenCurry->setText(QCoreApplication::translate("Highcalorie", "Chicken Curry", nullptr));
        beefBurgers->setText(QCoreApplication::translate("Highcalorie", "Beef Burgers", nullptr));
        homemadePizza->setText(QCoreApplication::translate("Highcalorie", "Homemade pizza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Highcalorie: public Ui_Highcalorie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHCALORIE_H
