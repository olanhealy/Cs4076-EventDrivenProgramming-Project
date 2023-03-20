#ifndef RECIPEMAKER_H
#define RECIPEMAKER_H
#include "mealpicker.h"
#include "recipe.h"



class recipeMaker : public mealPicker, Recipe
{
public:
    recipeMaker();

   //going to have it so it has the ability to make the recipe and overrides the virtual function
};

#endif // RECIPEMAKER_H
