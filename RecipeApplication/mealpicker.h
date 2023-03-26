#ifndef MEALPICKER_H
#define MEALPICKER_H

#include "recipe.h"
#include <string>
using namespace std;

class mealPicker : public Recipe {
public:
    mealPicker(string& description, string arrIngredients[], int numOfIngredients, string recipeName);

    string& getRecipeName();
    void setRecipeName(string name);
    void printRecipe() override;
     ~mealPicker();


protected:
    string mealName;
};

#endif // MEALPICKER_H
