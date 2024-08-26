#include "Woodland_Cavalry.h"


#include <iostream>
using namespace std;

WoodlandCavalry::WoodlandCavalry(int health, int defense):Cavalry(health , defense)
{
     this->health = health;
     this->defense = defense;
   this->name = "WoodLand Cavalry";
}
void WoodlandCavalry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void WoodlandCavalry::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void WoodlandCavalry::defend()
{
    std::cout << "Defending " << std::endl;
}


void WoodlandCavalry::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int WoodlandCavalry::getHealth() const
{
    return this->health;
}

// void WoodlandCavalry::move()
// {
//     position += 2;
//     std::cout<< "Woodland Cavalry maneuvers through the forest to position " << position << std::endl;
// }

// void WoodlandCavalry::attack()
// {
//    std::cout << "Woodland Cavalry strikes swiftly from cover, dealing" << (getPower() + 3) << " damage." << std::endl;
// }

// std::string WoodlandCavalry::getType() const
// {
//     return "WoodLand Cavalry" ;
// }