#ifndef SOLID_INGREDIENT_H
#define SOLID_INGREDIENT_H

#include "Ingredient.h"

class SolidIngredient : public Ingredient {
public:
    SolidIngredient(const QString& name, float quantity, const QString& unit);
    QString getUnit() const ; // Override the pure virtual function
};

#endif
