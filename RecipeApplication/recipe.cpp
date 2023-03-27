#include "recipe.h"
#include <iostream>


Recipe::Recipe(string& description, string arrIngredients[], int numOfIngredients) :
    description(description) //initalizer list used
{
    setIngredients(arrIngredients, numOfIngredients);
}



string& Recipe::getDescription()
{
    return description;
}

void Recipe::setDescription(string& description)
{
    this->description = description;
}
const string* Recipe::getIngredients() const {
    return arrIngredients;
}
void Recipe::setIngredients(string arrIngredients[], int numberOfIngredients)
{
    for (int i = 0; i < numberOfIngredients; i++) {
        this->arrIngredients[i] = arrIngredients[i];
    }
}
int Recipe::getNumOfIngredients() const {
    return numberOfIngredients;
}

void Recipe::addIngredients(string* arrIngredients)
{
    int numIngredients = getNumOfIngredients();
    for (int i = 0; i < MAX_INGREDIENTS && arrIngredients[i] != ""; i++) {
        arrIngredients[numIngredients + i] = arrIngredients[i];
    }
}

double getCalories(const string arrIngridents[]) {
    size_t pos = arrIngridents->find_last_of(' ');
    if (pos == string::npos) {
        return 0;
    }
    string calorie = arrIngridents->substr(pos + 1);
    char* endPtr;
    double calValue = strtod(calorie.c_str(), & endPtr);
    if (*endPtr == '\0') {
            return calValue;
}
  return 0;
}

template <typename T>
int getTotalCalories(const T& recipe) {
    int totalCalories = 0;
    for (int i = 0; i < recipe.getNumIngredients(); i++) {
        totalCalories += recipe.getIngredientCalories(i);
    }
    return totalCalories;
}

void printRecipe(Recipe& recipe) {

    cout << "Recipe: " << recipe.getDescription() << endl;
    cout << "Ingridents: " << endl;
    for (int i = 0; i < recipe.getNumOfIngredients(); i++) {
        cout << "-" << recipe.getIngredients()[i] << endl;
    }
}
Recipe::~Recipe() {

}
