#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>
#include <QGridLayout>

#include <stdlib.h>
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;



QString timeDisplay; //global variable

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    scrollAreaLayout = new QVBoxLayout;

       // Create a new QWidget to hold the layout
       QWidget* scrollAreaWidget = new QWidget;

       // Set the layout for the scroll area's widget
       scrollAreaWidget->setLayout(scrollAreaLayout);

       // Set the scroll area's widget
       ui->scrollArea->setWidget(scrollAreaWidget);









    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_HighCal_clicked()
{
    qDebug() << "High calorie";
    Highcalorie  *highcal = new Highcalorie(this);
    connect(highcal, &Highcalorie::recipeSelected, this, &MainWindow::onMealSelected);
    highcal->show();
}



void MainWindow::on_pushButton_LowCal_clicked()
{
    qDebug() << "Low Caloire";
  Lowcaloire *lowcal = new Lowcaloire(this);
  lowcal->show();
}

void MainWindow::on_pushButton_Vegetarian_clicked()
{
    qDebug() << "Vegetarian";
    Vegetarian *vege = new Vegetarian(this);
    vege->show();

}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionRepositry_triggered()
{
    QDesktopServices::openUrl(QUrl( "https://github.com/olanhealy/Cs4076-EventDrivenProgramming-Project"));
}


void MainWindow::on_timeSlider_valueChanged(int value)
{
    timeDisplay = "";
    QString min = QString::number(value % 60);
    QString time = min + "" ;
    timeDisplay = time + " Minutes";
    ui -> timeTracker -> setText(timeDisplay);
}
void MainWindow::onMealSelected(const Recipe* selectedRecipe) {
    // Clear the previous contents of the scroll area
    QLayoutItem* item;
    while ((item = scrollAreaLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    // Add the ingredients of the selected recipe along with checkboxes
    const string* ingredients = selectedRecipe->getIngredients();
    for (int i = 0; i < selectedRecipe->getNumOfIngredients(); i++) {
        QCheckBox* checkBox = new QCheckBox(QString::fromStdString(ingredients[i]));
        scrollAreaLayout->addWidget(checkBox);
    }
}
