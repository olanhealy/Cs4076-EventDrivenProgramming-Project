#ifndef SOLID_INGREDIENT_H
#define SOLID_INGREDIENT_H

#include "ingredient.h"

class SolidIngredient : public Ingredient { //inherithance used
public:
    SolidIngredient(const QString& name, float quantity, const QString& unit);
    QString getUnit() const ; // Override the pure virtual function so can display grams
};

#endif
