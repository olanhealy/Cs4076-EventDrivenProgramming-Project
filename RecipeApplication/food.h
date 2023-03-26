#ifndef FOOD_H
#define FOOD_H
#include <string>


using namespace std;


class Food
{
public:
    Food(const string& name);
    Food(const Food& copy);
    ~Food();
    string getName() const;
    friend class MainWindow; //so Mainwindow can have access to its "private parts" without using inherithance

private:
    string foodName;
};

#endif // FOOD_H
