#include "highcalorie.h"
#include "qpushbutton.h"
#include "ui_highcalorie.h"


Highcalorie::Highcalorie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Highcalorie)
{
    ui->setupUi(this);
    createHighCalorieRecipes();

    qDebug() << "Connection of Chicken curry";
    connect(ui->chickenCurry, &QPushButton::clicked, this, &Highcalorie::on_chickenCurry_clicked);

  qDebug() << "Connection succesful";

}

Highcalorie::~Highcalorie()
{
    memoryMangement();
    delete ui;
     qDebug() << "High cal deleted";
}

void Highcalorie::selectHighCalorieRecipe(int index) { if (index >= 0 && index < highCalorieRecipes.size()) {
    qDebug() << "Comparing of ints successful";
    qDebug() << "Emits mealSelected";
    qDebug() << "Index: " << index;
    qDebug() << "Recipe Name: " << QString::fromStdString(highCalorieRecipes[index]->getRecipeName());
    emit mealSelected(highCalorieRecipes[index]);
} else {
    qDebug() << "Index out of bounds";
}
}
void Highcalorie::on_chickenCurry_clicked()
{
      selectHighCalorieRecipe(0);  qDebug() << "gets chicken curry ";
}


void Highcalorie::on_beefBurgers_clicked()
{
      //emit mealSelected(&beefBurgersRecipe);
}



void Highcalorie::on_homemadePizza_clicked()
{
      //emit mealSelected(&homemadePizzaRecipe);
}
void Highcalorie::createHighCalorieRecipes() {
    // Define the ingredients and description for the Chicken Curry recipe
     qDebug() << "initalizing creating recipe";
    string chickenCurryIngredients[] = {"Chicken 20", "Curry Powder 5", "Onion 6", "Tomato 8", "Garlic 89", "Ginger 21"};
    string chickenCurryDescription = "Delicious and spicy chicken curry";
    string chickenCurryName = "Chicken Curry";
     qDebug() << "strings made";

    // Create an instance of mealPicker for the Chicken Curry recipe
    mealPicker *chickenCurryRecipe = new mealPicker(chickenCurryDescription, chickenCurryIngredients, 6, chickenCurryName);
 qDebug() << "instances made";
    // Add the instance to the highCalorieRecipes vector
    highCalorieRecipes.push_back(chickenCurryRecipe);
 qDebug() << "added correctly";

}
void Highcalorie::memoryMangement() {
    for (Recipe* recipe : highCalorieRecipes) {
        delete recipe;
    }
}
