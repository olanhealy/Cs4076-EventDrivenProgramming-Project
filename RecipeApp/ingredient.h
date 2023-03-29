// Ingredient.h
#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QString>
/*Igredient is an abstract class and can't be instantiated directly. solid and liquid ingredient are used to implement the pure virtual function. */

class Ingredient {
public:
    Ingredient(const QString& name, float quantity, const QString& unit); //references passed in constructor and copy
    Ingredient(const Ingredient& other); // Copy constructor performs shallow copy. New object will have same values for its data members as original
    virtual ~Ingredient() = 0; //virtual destructor called when object of dervied class destroyed (solid and liquid)

    virtual QString getName() const;
    virtual float getQuantity() const;
    float setQuantity(double newQuantity);
    virtual QString getUnit() const = 0; // Pure virtual function (abstact class)
    QString toString() const;
    template<typename T>
    T roundQuantity(T quantity);





protected:
    QString name;
    float quantity;
    QString unit;
};
#endif //includes guards
