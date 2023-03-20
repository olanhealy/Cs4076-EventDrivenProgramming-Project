#ifndef RECIPE_H
#define RECIPE_H

#include <string>


using namespace std;
const int MAX_INGREDIENTS = 15;

class Recipe
{
public:
    Recipe(string& description, string arrIngredients[], int numOfIngreidents  );

    string& getDescription();
     void setDescription(string& getdescription);
     string* getIngridents();
     void setIngridents(string arrIngridients[], int numberOfIngreidents);
    void addIngreidents(string* arrIngredients);
    double getCalories(const string arrIngredients);
    int getNumOfIngreidents();
    double getCalories(string arrIngridents[]);
    template <typename T> T getCalorieTotal(T x);
    virtual void printRecipe() {
    }

private:

    string description;
    string arrIngreidents[MAX_INGREDIENTS];
    int numberOfIngridents;
};

#endif // RECIPE_H
