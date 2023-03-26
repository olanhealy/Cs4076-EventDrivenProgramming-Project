/********************************************************************************
** Form generated from reading UI file 'lowcaloire.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOWCALOIRE_H
#define UI_LOWCALOIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Lowcaloire
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *tikkaMasala;
    QRadioButton *thaiBeefStirFry;
    QRadioButton *chickenKorma;

    void setupUi(QDialog *Lowcaloire)
    {
        if (Lowcaloire->objectName().isEmpty())
            Lowcaloire->setObjectName("Lowcaloire");
        Lowcaloire->resize(400, 300);
        Lowcaloire->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127)"));
        verticalLayout = new QVBoxLayout(Lowcaloire);
        verticalLayout->setObjectName("verticalLayout");
        tikkaMasala = new QRadioButton(Lowcaloire);
        tikkaMasala->setObjectName("tikkaMasala");

        verticalLayout->addWidget(tikkaMasala);

        thaiBeefStirFry = new QRadioButton(Lowcaloire);
        thaiBeefStirFry->setObjectName("thaiBeefStirFry");

        verticalLayout->addWidget(thaiBeefStirFry);

        chickenKorma = new QRadioButton(Lowcaloire);
        chickenKorma->setObjectName("chickenKorma");

        verticalLayout->addWidget(chickenKorma);


        retranslateUi(Lowcaloire);

        QMetaObject::connectSlotsByName(Lowcaloire);
    } // setupUi

    void retranslateUi(QDialog *Lowcaloire)
    {
        Lowcaloire->setWindowTitle(QCoreApplication::translate("Lowcaloire", "Dialog", nullptr));
        tikkaMasala->setText(QCoreApplication::translate("Lowcaloire", "Tikka Masala ", nullptr));
        thaiBeefStirFry->setText(QCoreApplication::translate("Lowcaloire", "Thai Beef Stir Fry", nullptr));
        chickenKorma->setText(QCoreApplication::translate("Lowcaloire", "Chicken Korma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lowcaloire: public Ui_Lowcaloire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOWCALOIRE_H
