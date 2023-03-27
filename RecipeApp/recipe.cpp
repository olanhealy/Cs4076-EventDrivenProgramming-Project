#include "Recipe.h"

// Global variable
int recipeCounter = 0;

Recipe::Recipe(const QString& name) : name(name) {
    recipeCounter++; // Increment global variable
}

Recipe::Recipe(const Recipe& other) : name(other.name), ingredients(other.ingredients) {
    recipeCounter++; // Increment global variable
}

Recipe::~Recipe() {
    recipeCounter--; // Decrement global variable
}

void Recipe::addIngredient(std::shared_ptr<Ingredient> ingredient) {
    ingredients.push_back(ingredient);
}

std::vector<std::shared_ptr<Ingredient>> Recipe::getIngredients() const {
    return ingredients;
}

QString Recipe::getName() const {
    return name;
}

template <typename T>
T Recipe::getIngredientDetail(const Ingredient& ingredient) const {
    if constexpr (std::is_same_v<T, QString>) {
        return ingredient.getName();
    } else if constexpr (std::is_same_v<T, float>) {
        return ingredient.getQuantity();
    } else {
        throw std::runtime_error("Unsupported type for getIngredientDetail()");
    }
}

QString Recipe::toString() const {
    QString result = "Recipe: " + name + "\n";
    for (const auto& ingredient : ingredients) {
        result += "- " + ingredient->getName() + ": " + QString::number(ingredient->getQuantity()) + " " + ingredient->getUnit() + "\n";
    }
    return result;
}


