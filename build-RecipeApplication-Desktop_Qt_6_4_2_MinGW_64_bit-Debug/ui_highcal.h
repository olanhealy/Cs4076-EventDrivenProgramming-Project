/********************************************************************************
** Form generated from reading UI file 'highcal.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHCAL_H
#define UI_HIGHCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HighCal
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *chickenCurry;
    QRadioButton *thaiChickenBurgers;
    QRadioButton *chickenTeriyaki_2;

    void setupUi(QDialog *HighCal)
    {
        if (HighCal->objectName().isEmpty())
            HighCal->setObjectName("HighCal");
        HighCal->resize(400, 300);
        HighCal->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127)"));
        verticalLayout = new QVBoxLayout(HighCal);
        verticalLayout->setObjectName("verticalLayout");
        chickenCurry = new QRadioButton(HighCal);
        chickenCurry->setObjectName("chickenCurry");

        verticalLayout->addWidget(chickenCurry);

        thaiChickenBurgers = new QRadioButton(HighCal);
        thaiChickenBurgers->setObjectName("thaiChickenBurgers");

        verticalLayout->addWidget(thaiChickenBurgers);

        chickenTeriyaki_2 = new QRadioButton(HighCal);
        chickenTeriyaki_2->setObjectName("chickenTeriyaki_2");

        verticalLayout->addWidget(chickenTeriyaki_2);


        retranslateUi(HighCal);

        QMetaObject::connectSlotsByName(HighCal);
    } // setupUi

    void retranslateUi(QDialog *HighCal)
    {
        HighCal->setWindowTitle(QCoreApplication::translate("HighCal", "Dialog", nullptr));
        chickenCurry->setText(QCoreApplication::translate("HighCal", "Chicken Curry", nullptr));
        thaiChickenBurgers->setText(QCoreApplication::translate("HighCal", "Thai Turkey Burgers", nullptr));
        chickenTeriyaki_2->setText(QCoreApplication::translate("HighCal", "Chicken Teriyaki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HighCal: public Ui_HighCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHCAL_H
