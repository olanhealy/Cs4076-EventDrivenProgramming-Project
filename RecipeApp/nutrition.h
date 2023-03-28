#ifndef NUTRITION_H
#define NUTRITION_H

#include <ctime>
#include <random>


namespace NutritionalValues {
    const int MIN_FAT = 2;
    const int MAX_FAT = 8;
    const int MIN_PROTEIN = 5;
    const int MAX_PROTEIN = 20;
    const int MIN_CARBS = 10;
    const int MAX_CARBS = 50;
}

class Nutrition {
public:
    Nutrition(int calorieCount);

    int getFat() const;
    int getProtein() const;
    int getCarbs() const;
    int getCalories() const;

private:
    int fat;
    int protein;
    int carbs;
    int calories;

    friend class Recipe;
};

#endif // NUTRITION_H
