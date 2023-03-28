// Recipe.h
#ifndef RECIPE_H
#define RECIPE_H

#include <QString>
#include <vector>
#include <memory>
#include "Ingredient.h"
#include "nutrition.h"
using namespace std;

class Recipe {
public:
    Recipe(const QString& name);
    Recipe(const Recipe& other); // Copy constructor
    ~Recipe();

    void addIngredient(shared_ptr<Ingredient> ingredient);
    vector<shared_ptr<Ingredient>> getIngredients() const;
    QString getName() const;

    template <typename T>
    T getIngredientDetail(const Ingredient& ingredient) const;

    QString toString() const; // New member function to return formatted recipe information
    QString toStringIngredients() const;

private:
    QString name;
    vector<shared_ptr<Ingredient>> ingredients;
    Nutrition nutrition;
    void generateNutrition();
    friend class Nutrition;
};

// Explicitly instantiate the template function for supported types
extern template QString Recipe::getIngredientDetail<QString>(const Ingredient& ingredient) const;
extern template float Recipe::getIngredientDetail<float>(const Ingredient& ingredient) const;

#endif
