#include "liquidingredient.h"
#include <QString>

LiquidIngredient::LiquidIngredient(const QString& name, float quantity, const QString& unit) : Ingredient(name, quantity, unit) {}

QString LiquidIngredient::getUnit() const {
    return "mL"; // Return the unit for liquid ingredients
}
