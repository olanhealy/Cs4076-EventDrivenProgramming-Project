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
template<typename T>
T roundQuantity(T quantity) {
    if constexpr (std::is_same_v<T, int>) {
        // Do nothing, quantity is already an integer
    } else if constexpr (std::is_same_v<T, float> || std::is_same_v<T, double>) {
        quantity = static_cast<T>(std::floor(quantity));
    } else {
        throw std::runtime_error("Unsupported type for roundQuantity()");
    }

    return quantity;
}



