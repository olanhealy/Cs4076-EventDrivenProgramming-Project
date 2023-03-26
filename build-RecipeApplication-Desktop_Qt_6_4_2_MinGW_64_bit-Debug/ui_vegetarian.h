/********************************************************************************
** Form generated from reading UI file 'vegetarian.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEGETARIAN_H
#define UI_VEGETARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Vegetarian
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *veggieBurger;
    QRadioButton *sweetAndSour;
    QRadioButton *pineappleFriedRice;

    void setupUi(QDialog *Vegetarian)
    {
        if (Vegetarian->objectName().isEmpty())
            Vegetarian->setObjectName("Vegetarian");
        Vegetarian->resize(400, 300);
        Vegetarian->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127)"));
        verticalLayout = new QVBoxLayout(Vegetarian);
        verticalLayout->setObjectName("verticalLayout");
        veggieBurger = new QRadioButton(Vegetarian);
        veggieBurger->setObjectName("veggieBurger");

        verticalLayout->addWidget(veggieBurger);

        sweetAndSour = new QRadioButton(Vegetarian);
        sweetAndSour->setObjectName("sweetAndSour");

        verticalLayout->addWidget(sweetAndSour);

        pineappleFriedRice = new QRadioButton(Vegetarian);
        pineappleFriedRice->setObjectName("pineappleFriedRice");

        verticalLayout->addWidget(pineappleFriedRice);


        retranslateUi(Vegetarian);

        QMetaObject::connectSlotsByName(Vegetarian);
    } // setupUi

    void retranslateUi(QDialog *Vegetarian)
    {
        Vegetarian->setWindowTitle(QCoreApplication::translate("Vegetarian", "Dialog", nullptr));
        veggieBurger->setText(QCoreApplication::translate("Vegetarian", "Veggie Burger", nullptr));
        sweetAndSour->setText(QCoreApplication::translate("Vegetarian", "Sweet and Sour", nullptr));
        pineappleFriedRice->setText(QCoreApplication::translate("Vegetarian", "Pineapple Fried Rice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vegetarian: public Ui_Vegetarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEGETARIAN_H
