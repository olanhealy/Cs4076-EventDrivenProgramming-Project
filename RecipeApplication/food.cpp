#include "food.h"

Food::Food(const string& name) : foodName(name)
{

}
Food::Food(const Food& copy) : foodName(copy.foodName) {

}
Food::~Food()
{

}

string Food::getName() const
{
    return foodName;
}
