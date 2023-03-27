#include "SolidIngredient.h"

SolidIngredient::SolidIngredient(const QString& name, float quantity, const QString& unit) : Ingredient(name, quantity, unit) {}

QString SolidIngredient::getUnit() const {
    return "g"; // overriding the pure virtual fucntion to set to grams
}
