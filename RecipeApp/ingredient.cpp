// Ingredient.cpp
#include "ingredient.h"

Ingredient::Ingredient(const QString& name, float quantity, const QString& unit) : name(name), quantity(quantity), unit(unit) {} //initalizer list

Ingredient::Ingredient(const Ingredient& other) : name(other.name), quantity(other.quantity), unit(other.unit) {} //initalizer list for copy constructor

Ingredient::~Ingredient() {}

QString Ingredient::getName() const {
    return name;
}

float Ingredient::getQuantity() const {
    return quantity;
}
float Ingredient::setQuantity(double newQuantity) {
    quantity = newQuantity;
}

QString Ingredient::toString() const {
    return getName() + ": " + QString::number(getQuantity()) + " " + getUnit();
}

void Ingredient::scale(int servingSize) {
    quantity *= servingSize;
}

