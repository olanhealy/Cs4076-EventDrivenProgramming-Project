/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        radioButton = new QRadioButton(Dialog);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(160, 150, 121, 24));
        radioButton_2 = new QRadioButton(Dialog);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(160, 180, 161, 24));
        radioButton_3 = new QRadioButton(Dialog);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(160, 210, 141, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Chicken Curry", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Thai Turkey Burgers", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Chicken Teriyaki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
