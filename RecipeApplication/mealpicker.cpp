#include "mealPicker.h"
#include <string>
using namespace std;

#include "mealPicker.h"
#include "recipe.h"

using namespace std;

mealPicker::mealPicker(string& description, string arrIngredients[], int numOfIngredients,string recipeName)
    : Recipe(description, arrIngredients, numOfIngredients), mealName(recipeName) {}

string& mealPicker::getRecipeName() {
    return mealName;
}

void mealPicker::setRecipeName(string name) {
    mealName = name;
}
