#include "Recipe.h"

// Global variable
int recipeCounter = 0;

Recipe::Recipe(const QString& name) : name(name), nutrition(0) {
    generateNutrition();
    recipeCounter++; // Increment global variable
}

Recipe::Recipe(const Recipe& other) : name(other.name), ingredients(other.ingredients), nutrition(other.nutrition) {
    recipeCounter++; // Increment global variable
}

Recipe::~Recipe() {
    recipeCounter--; // Decrement global variable
}

void Recipe::addIngredient(shared_ptr<Ingredient> ingredient) {
    ingredients.push_back(ingredient);
    generateNutrition();
}

vector<shared_ptr<Ingredient>> Recipe::getIngredients() const {
    return ingredients;
}

QString Recipe::getName() const {
    return name;
}

template <typename T>
T Recipe::getIngredientDetail(const Ingredient& ingredient) const {
    if constexpr (is_same_v<T, QString>) {
        return ingredient.getName();
    } else if constexpr (is_same_v<T, float>) {
        return ingredient.getQuantity();
    } else {
        throw runtime_error("Unsupported type for getIngredientDetail()");
    }
}

QString Recipe::toString() const {
    QString result = "Recipe: " + name + "\n";
    return result;
}
QString Recipe::toStringIngredients() const {
    QString result;
    for (const auto& ingredient : ingredients) {
        result += "- " + ingredient->getName() + ": " + QString::number(ingredient->getQuantity()) + " " + ingredient->getUnit() + "\n";
    }
    return result;
}
void Recipe::generateNutrition() {
    int ingredientCount = static_cast<int>(ingredients.size());

     switch (ingredientCount) {
         case 1:
             nutrition = Nutrition(100);
             break;
         case 2:
             nutrition = Nutrition(150);
             break;
         default:
             nutrition = Nutrition(ingredientCount * 100);
             break;
}
}



