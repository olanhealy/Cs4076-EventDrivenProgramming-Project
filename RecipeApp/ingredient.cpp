// Ingredient.cpp
#include "ingredient.h"

Ingredient::Ingredient(const QString& name, float quantity, const QString& unit) : name(name), quantity(quantity), unit(unit) {} //initalizer list for name, quantity and unit

Ingredient::Ingredient(const Ingredient& other) : name(other.name), quantity(other.quantity), unit(other.unit) {} //initalizer list for copy constructor. initalizes new Ingrident object with same values

Ingredient::~Ingredient() {} //destructor

QString Ingredient::getName() const {
    return name; //returns name
}

float Ingredient::getQuantity() const {
    return quantity; //returns quantity
}
float Ingredient::setQuantity(double newQuantity) {
    quantity = newQuantity; //set quantity
}

QString Ingredient::toString() const {
    return getName() + ": " + QString::number(getQuantity()) + " " + getUnit(); //
}



