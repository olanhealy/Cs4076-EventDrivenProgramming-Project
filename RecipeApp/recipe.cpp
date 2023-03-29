#include "Recipe.h"



Recipe::Recipe(const QString& name) : name(name), nutrition(0) { //initalizer list: sets name and then nutrition is set to 0
    generateNutrition();

}

Recipe::Recipe(const Recipe& other) : name(other.name), ingredients(other.ingredients), nutrition(other.nutrition) { //copy constructor initializes the name, ingredients, and nutrition member variables of the class with the corresponding variables from the passed other object.

}


void Recipe::addIngredient(shared_ptr<Ingredient> ingredient) { //adds new ingredient to vector of ingredients. Used vectors as I didnt want to fix a size of an array. also easier for memory mangement
    ingredients.push_back(ingredient);
    generateNutrition(); //it also generates nutrition for the recipe
}

vector<shared_ptr<Ingredient>> Recipe::getIngredients() const {
    return ingredients; //gets the ingriendts
}

QString Recipe::getName() const {
    return name; //returns recipe name
}



QString Recipe::toString() const {
    QString result = "Recipe: " + name + "\n";
    return result; //format string to return name of recipe
}

void Recipe::generateNutrition() {
    int ingredientCount = static_cast<int>(ingredients.size()); //calculates nutrional values based on the number of ingredients in the recip

     switch (ingredientCount) {
         case 1:
             nutrition = Nutrition(100);
             break;
         case 2:
             nutrition = Nutrition(150);
             break;
        case 3:
         nutrition = Nutrition(200);
            break;
         default:
             nutrition = Nutrition(ingredientCount * 100);
             break;
}


}
const Nutrition& Recipe::getNutrition() const {
    return nutrition; //returns nutrition
}
Recipe::~Recipe() {

}



