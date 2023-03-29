#ifndef LIQUID_INGREDIENT_H
#define LIQUID_INGREDIENT_H

#include "Ingredient.h"
#include <QString>

class LiquidIngredient : public Ingredient { //inherithance used access to all public and protected members of ingredient
public:
    LiquidIngredient(const QString& name, float quantity, const QString& unit);
    QString getUnit() const; // Override the pure virtual function so we can display ml
};

#endif //includes guards
