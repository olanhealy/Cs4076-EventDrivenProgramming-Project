#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>
#include <initializer_list>

using namespace std;
const int MAX_INGREDIENTS = 15;

class Recipe
{
public:
    Recipe(string& name, string& description, string arrIngredients[], int numOfIngreidents  );
    string& getName();
    void setName(string& name);
    string& getdescription();
    void setDescription(string& getdescription);
     string* getIngridents();
     void setIngridents(string arrIngridients[], int numberOfIngreidents);
    void addIngreidents(string* arrIngredients);
    double getCalories(const string arrIngredients);
    int getNumOfIngreidents();
    double getCalories(string arrIngridents[]);
     template <typename T> T getCalorieTotal(T x);

private:
    string name;
    string description;
    string arrIngreidents[MAX_INGREDIENTS];
    int numberOfIngridents;
};

#endif // RECIPE_H
