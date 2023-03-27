#include "mealPicker.h"
#include "recipe.h"
#include <string>
#include<iostream>
using namespace std;



Recipe* recipe;
using namespace std;
mealPicker::mealPicker(string description, string arrIngredients[], int numOfIngredients,string recipeName)
    : Recipe(description, arrIngredients, numOfIngredients), mealName(recipeName) {
    recipe = this;
}
string mealPicker::getRecipeName() {
    return mealName;
}

void mealPicker::setRecipeName(string name) {
    mealName = name;
}
void mealPicker::printRecipe() {
    cout << "Name: " << mealName;
    cout << "Recipe: " << recipe -> getDescription() << endl;
    cout << "Ingridents: " << endl;
    for (int i = 0; i < recipe -> getNumOfIngredients(); i++) {
        cout << "-" << recipe -> getIngredients()[i] << endl;

}


}
mealPicker::~mealPicker() {

}
