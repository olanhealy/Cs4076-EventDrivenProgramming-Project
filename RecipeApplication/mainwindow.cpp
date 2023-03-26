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
    ui->setupUi(this);

    qDebug() << "1st";
    QWidget *scroller = new QWidget;
    qDebug() << "2nd";
    QVBoxLayout* layout = new QVBoxLayout(scroller);
    qDebug() << "3rd";
    ui->scrollArea->setWidget(scroller);
    qDebug() << "4th";
    ui->scrollArea->setWidgetResizable(true);
    qDebug() << "5th";



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_HighCal_clicked()
{
    qDebug() << "High calorie";
    Highcalorie  *highcal = new Highcalorie(this);
    connect(highcal, &Highcalorie::mealSelected, this, &MainWindow::onMealSelected);
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
void MainWindow::onMealSelected(const mealPicker* selectedRecipe) {
    // Clear the previous contents of the scroll area
      qDebug() << "Entered onMealSelected";
      QLayoutItem* item;
      while ((item = scrollAreaLayout->takeAt(0)) != nullptr) {
          if (item->widget()) {
              item->widget()->deleteLater();
          }
          delete item;
      }

    qDebug() << "Cleared previous contents";
    if (selectedRecipe == nullptr) {
          qDebug() << "selectedRecipe is nullptr";
          return;
      }

    // Add the ingredients of the selected recipe along with checkboxes

    const string* ingredients = selectedRecipe->getIngredients();
     qDebug() << "Got ingredients";
    for (int i = 0; i < selectedRecipe->getNumOfIngredients(); i++) {
         qDebug() << "Creating checkbox for ingredient" << i;
        QCheckBox* checkBox = new QCheckBox(QString::fromStdString(ingredients[i]));
        scrollAreaLayout->addWidget(checkBox);
    }
      qDebug() << "All checkboxes added";
}
