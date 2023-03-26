#include "food.h"

Food::Food(const string& name) : foodName(name)
{

}
Food::Food(const Food& copy) : foodName(copy.foodName) {

}
