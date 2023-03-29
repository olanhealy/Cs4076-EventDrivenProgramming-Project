#include "Nutrition.h"

Nutrition::Nutrition(int calorieCount) {

    calories = calorieCount; // Set calories

    // Compute fat, protein, and carbs based on calories
    fat = static_cast<int>(calories * 0.3 / 9);
    protein = static_cast<int>(calories * 0.3 / 4);
    carbs = static_cast<int>(calories * 0.4 / 4);
}

int Nutrition::getFat() const {
    return fat; //returns fat
}

int Nutrition::getProtein() const {
    return protein;//returns protein
}

int Nutrition::getCarbs() const {
    return carbs; //returns carbs
}

int Nutrition::getCalories() const {
    return calories; //returns calories
}
