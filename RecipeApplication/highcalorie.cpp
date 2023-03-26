#include "highcalorie.h"
#include "qpushbutton.h"
#include "ui_highcalorie.h"


Highcalorie::Highcalorie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Highcalorie)
{
    ui->setupUi(this);
    createHighCalorieRecipes();

        // Manually connect the clicked() signal of the chickenCurry button to the on_chickenCurry_clicked() slot
        connect(ui->chickenCurry, &QPushButton::clicked, this, &Highcalorie::on_chickenCurry_clicked);



}

Highcalorie::~Highcalorie()
{
    memoryMangement();
    delete ui;
}

void Highcalorie::selectHighCalorieRecipe(int index) {
    if (index >= 0 && index < highCalorieRecipes.size()) {
        emit recipeSelected(highCalorieRecipes[index]);
    }
}
void Highcalorie::on_chickenCurry_clicked()
{
      selectHighCalorieRecipe(0);
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
    string chickenCurryIngredients[] = {"Chicken", "Curry Powder", "Onion", "Tomato", "Garlic", "Ginger"};
    string chickenCurryDescription = "Delicious and spicy chicken curry";
    string chickenCurryName = "Chicken Curry";

    // Create an instance of mealPicker for the Chicken Curry recipe
    mealPicker *chickenCurryRecipe = new mealPicker(chickenCurryDescription, chickenCurryIngredients, 6, chickenCurryName);

    // Add the instance to the highCalorieRecipes vector
    highCalorieRecipes.push_back(chickenCurryRecipe);

    // Add more recipes here...
}
void Highcalorie::memoryMangement() {
    for (Recipe* recipe : highCalorieRecipes) {
        delete recipe;
    }
}
