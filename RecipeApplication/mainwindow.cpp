#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "food.h"
#include <QApplication>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>
#include <QGridLayout>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QCheckBox>

#include <stdlib.h>
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

mealPicker* recipes[7];

QString timeDisplay; //global variable

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);
    QVBoxLayout *checkboxLayout = new QVBoxLayout(ui->checkBox);
    ui->checkBox->setLayout(checkboxLayout);
    checkboxLayout->setAlignment(Qt::AlignTop);
    Food* oinon = new Food("Oinon(1) 23");
    Food* carrot = new Food("Carrot(1) 89.3");
    Food* mince = new Food("Mince 230");
    Food* beefBurger = new Food("Burger 400");
    Food* cheese = new Food("Cheese 45");
    Food* stirFryMix = new Food("StirFryMix 189.23");
    Food* pasta = new Food("Pasta 77");
    Food* rice = new Food("Rice 28");
    Food* chickenBreast = new Food("ChickenBreast(1) 239.35");
    Food* currySauce = new Food("currySauce");
    Food* lettuce = new Food("Lettuce 15");
    Food* tomato = new Food("Tomato 18");
    Food* bun = new Food("Bun 260");
    Food* beans = new Food("Beans 120.2");
    Food* salsa = new Food("Salsa 35.6");
    Food* avocado = new Food("Avocado 240");
    Food* tortilla = new Food("Tortilla 170.9");
    Food* groundBeef = new Food("Ground Beef 250.4");
    Food* peas = new Food("Peas 81");
    Food* corn = new Food("Corn 89");
    Food* mashedPotatoes = new Food("Mashed Potatoes 237.6");
    Food* gravy = new Food("Gravy 120");
    Food* broccoli = new Food("Broccoli 55.2");
    Food* soySauce = new Food("Soy Sauce 9");
    Food* ginger = new Food("Ginger 8.3");


    Food* chickenCurryIngredients[] = {oinon, currySauce, chickenBreast, rice};
    string chickenCurryIngredientsStr[] = {oinon->getName(), currySauce->getName(), chickenBreast->getName(), rice->getName()};
    mealPicker* chickenCurry = new mealPicker("hmmm", chickenCurryIngredientsStr, 4, "Chicken Curry");
    Food* beefBurgersIngredients[] = {beefBurger, lettuce, tomato, cheese, bun};
    string beefBurgersIngredientsStr[] = {beefBurger->getName(), lettuce->getName(), tomato->getName(), cheese->getName(), bun->getName()};
    mealPicker* beefBurgers = new mealPicker("Beef Burgers Recipe", beefBurgersIngredientsStr, 5, "Beef Burgers");

    Food* burritoBowlIngredients[] = {rice, beans, avocado, salsa, cheese};
    string burritoBowlIngredientsStr[] = {rice->getName(), beans->getName(), avocado->getName(), salsa->getName(), cheese->getName()};
    mealPicker* burritoBowl = new mealPicker("Burrito Bowl Recipe", burritoBowlIngredientsStr, 5, "Burrito Bowl");

    Food* shepardsPieIngredients[] = {groundBeef, peas, corn, mashedPotatoes, gravy};
    string shepardsPieIngredientsStr[] = {groundBeef->getName(), peas->getName(), corn->getName(), mashedPotatoes->getName(), gravy->getName()};
    mealPicker* shepardsPie = new mealPicker("Shepard's Pie Recipe", shepardsPieIngredientsStr, 5, "Shepard's Pie");

    Food* stirFryIngredients[] = {chickenBreast, broccoli, stirFryMix, soySauce, ginger};
    string stirFryIngredientsStr[] = {chickenBreast->getName(), broccoli->getName(), stirFryMix->getName(), soySauce->getName(), ginger->getName()};
    mealPicker* stirFry = new mealPicker("Stir Fry Recipe", stirFryIngredientsStr, 5, "Stir Fry");

    Food* pastaBakeIngredients[] = {chickenBreast, pasta, ginger};
    string pastaBakeIngredientsStr[] = {chickenBreast->getName(), pasta->getName(),ginger->getName()};
    mealPicker* pastaBake = new mealPicker("PAsta Bake", pastaBakeIngredientsStr, 3, "PastaBake");

    recipes[0] = chickenCurry;
    recipes[1] = beefBurgers;
    recipes[2] = burritoBowl;
    recipes[3] = shepardsPie;
    recipes[4] = stirFry;
    recipes[5] = pastaBake;
    connect(ui->chickenCurry, &QRadioButton::clicked, this, &MainWindow::on_chickenCurry_clicked);
    connect(ui->beefBurgers, &QRadioButton::clicked, this, &MainWindow::on_beefBurgers_clicked);
    connect(ui->buritoBowl, &QRadioButton::clicked, this, &MainWindow::on_buritoBowl_clicked);
    connect(ui->shpeardsPie, &QRadioButton::clicked, this, &MainWindow::on_shpeardsPie_clicked);
    connect(ui->stirFry, &QRadioButton::clicked, this, &MainWindow::on_stirFry_clicked);
    connect(ui->pastaBake, &QRadioButton::clicked, this, &MainWindow::on_pastaBake_clicked);




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


MainWindow::~MainWindow() {
  delete ui;
    for (int i = 0; i < 6; ++i) {
        delete recipes[i];
    }
}


void MainWindow::updateCheckBox(int recipeNo) {
    qDebug() << "updateCheckBox called with recipeNo " << recipeNo;
    QVBoxLayout *checkboxLayout = qobject_cast<QVBoxLayout*>(ui->checkBox->layout());

    // Clear the existing checkboxes
    qDebug() << "Clearing existing checkboxes";
    QLayoutItem *item;
    while ((item = checkboxLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    // Add the checkboxes for the selected recipe
    qDebug() << "Adding checkboxes for recipe" << recipeNo;
    for (int i = 0; i < recipes[recipeNo]->getNumOfIngredients(); i++) {
        QCheckBox *checkBox = new QCheckBox(QString::fromStdString(recipes[recipeNo]->getIngredients()[i]));
        checkboxLayout->addWidget(checkBox);
    }

    qDebug() << "updateCheckBox finished";
}



void MainWindow::on_checkBox_stateChanged(int state) {
    QVBoxLayout *checkboxLayout = qobject_cast<QVBoxLayout*>(ui->checkBox->layout());
    int totalCheckboxes = checkboxLayout->count();
    int checkedCount = 0;

    for (int i = 0; i < totalCheckboxes; i++) {
        QCheckBox *checkBox = qobject_cast<QCheckBox*>(checkboxLayout->itemAt(i)->widget());
        if (checkBox->isChecked()) {
            checkedCount++;
        }
    }

 }




void MainWindow::on_chickenCurry_clicked()
{
  updateCheckBox(0);
}

void MainWindow::on_beefBurgers_clicked()
{
    updateCheckBox(1);
}

void MainWindow::on_buritoBowl_clicked()
{
   updateCheckBox(2);
}


void MainWindow::on_shpeardsPie_clicked()
{
    if (ui->shpeardsPie->isChecked()) { // check if the radio button is checked
        updateCheckBox(3);
    }
}


void MainWindow::on_stirFry_clicked()
{
    updateCheckBox(4);
}


void MainWindow::on_pastaBake_clicked()
{
    updateCheckBox(5);
}

