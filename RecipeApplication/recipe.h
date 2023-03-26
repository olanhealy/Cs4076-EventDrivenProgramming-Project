#ifndef RECIPE_H
#define RECIPE_H

#include <string>


using namespace std;
const int MAX_INGREDIENTS = 15;

class Recipe
{
public:
    Recipe(string& description, string arrIngredients[], int numOfIngreidents  );
    virtual ~Recipe() ;
    string& getDescription();
    void setDescription(string& getdescription);
    const string* getIngredients() const;
    void setIngredients(string arrIngredients[], int numberOfIngredients);
    void addIngredients(string* arrIngredients);
    double getCalories(const string arrIngredients);
    int getNumOfIngredients() const;
    double getCalories(string arrIngredients[]);
    template <typename T> T getCalorieTotal(T x);
    virtual void printRecipe() = 0; //make printrecipe function pure virutal (abstract class)
    //use const for getting ingridents and number as dont want them to be changed for a particular recipe


protected:

    string description;
    string arrIngredients[MAX_INGREDIENTS];
    int numberOfIngridents; //changed from private to protected so mealPicker can modify if needed
};

#endif // RECIPE_H
