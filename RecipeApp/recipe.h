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
    Recipe(const Recipe& other); // Copy constructor (shallow)
    ~Recipe(); //destructor

    void addIngredient(shared_ptr<Ingredient> ingredient); //used smart pointer as otherwise would have been creating and deleting abudance of ingredients. helps clean it up
    vector<shared_ptr<Ingredient>> getIngredients() const;
    QString getName() const;
    template <typename T>
    T getIngredientDetail(const Ingredient& ingredient) const; //template function to take any template as an argument
    QString toString() const; // format it for recipe name

    const Nutrition& getNutrition() const;
 QString name;


private:

    vector<shared_ptr<Ingredient>> ingredients;
    Nutrition nutrition;
    void generateNutrition();

    friend class Nutrition; //friend of nutrition so it has access to its private data
};



#endif
