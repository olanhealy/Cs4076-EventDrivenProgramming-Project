// Ingredient.h
#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QString>

class Ingredient {
public:
    Ingredient(const QString& name, float quantity, const QString& unit);
    Ingredient(const Ingredient& other); // Copy constructor
    virtual ~Ingredient() = 0; //virtual destructor

    virtual QString getName() const;
    virtual float getQuantity() const;
    virtual QString getUnit() const = 0; // Pure virtual function (abstact class)

protected:
    QString name;
    float quantity;
    QString unit;
};
#endif
