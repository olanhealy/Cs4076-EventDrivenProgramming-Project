#include "recipe.h"
#include <iostream>

Recipe::Recipe(string& description, string arrIngredients[], int numOfIngredients) :
    description(description) //initalizer list used
{
    setIngridents(arrIngredients, numOfIngredients);
}



string& Recipe::getDescription()
{
    return description;
}

void Recipe::setDescription(string& description)
{
    this->description = description;
}
string* Recipe::getIngridents()
{
    return arrIngreidents;
}

void Recipe::setIngridents(string arrIngridients[], int numberOfIngreidents)
{
    for (int i = 0; i < numberOfIngreidents; i++) {
        this->arrIngreidents[i] = arrIngridients[i];
    }
}
int Recipe::getNumOfIngreidents(){
    return numberOfIngridents;
}

void Recipe::addIngreidents(string* arrIngredients)
{
    int numIngredients = getNumOfIngreidents();
    for (int i = 0; i < MAX_INGREDIENTS && arrIngredients[i] != ""; i++) {
        arrIngreidents[numIngredients + i] = arrIngredients[i];
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
    for (int i = 0; i < recipe.getNumOfIngreidents(); i++) {
        cout << "-" << recipe.getIngridents() << endl;
    }
}
