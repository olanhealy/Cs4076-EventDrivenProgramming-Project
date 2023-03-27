#include "SolidIngredient.h"

SolidIngredient::SolidIngredient(const QString& name, float quantity, const QString& unit) : Ingredient(name, quantity, unit) {}

QString SolidIngredient::getUnit() const {
    return "g"; // Return the unit for solid ingredients
}
