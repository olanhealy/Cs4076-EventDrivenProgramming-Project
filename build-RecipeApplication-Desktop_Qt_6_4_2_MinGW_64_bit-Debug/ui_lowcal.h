/********************************************************************************
** Form generated from reading UI file 'lowcal.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOWCAL_H
#define UI_LOWCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_lowcal
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *lowcal)
    {
        if (lowcal->objectName().isEmpty())
            lowcal->setObjectName("lowcal");
        lowcal->resize(400, 300);
        lowcal->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127)"));
        verticalLayout = new QVBoxLayout(lowcal);
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(lowcal);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(lowcal);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(lowcal);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout->addWidget(radioButton_3);


        retranslateUi(lowcal);

        QMetaObject::connectSlotsByName(lowcal);
    } // setupUi

    void retranslateUi(QDialog *lowcal)
    {
        lowcal->setWindowTitle(QCoreApplication::translate("lowcal", "Dialog", nullptr));
        radioButton->setText(QCoreApplication::translate("lowcal", "Healthy bolognese", nullptr));
        radioButton_2->setText(QCoreApplication::translate("lowcal", "Salsa verde baked eggs", nullptr));
        radioButton_3->setText(QCoreApplication::translate("lowcal", "Avocado & black bean eggs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lowcal: public Ui_lowcal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOWCAL_H
