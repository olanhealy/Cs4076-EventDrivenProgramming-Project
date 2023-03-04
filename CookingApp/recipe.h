#ifndef RECIPE_H
#define RECIPE_H
#include <string> //include strings
using namespace std; //instead of using std in front of things like string, cout, cin etc


class recipe
{
private:
    string name;
    int preperationTime;
    int cookTime;
    double calories;


public:
    recipe();
    string getName();
    int getPreperationTime();
    int getCookTime();
    double getCalories();

};

#endif // RECIPE_H
