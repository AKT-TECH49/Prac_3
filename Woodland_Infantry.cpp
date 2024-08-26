#include "WoodLand_Infantry.h"
#include "Infantry.h"

#include <iostream>
using namespace std;

WoodlandInfantry::WoodlandInfantry(int health, int defense):Infantry(health , defense)
{
     this->health = health;
     this->defense = defense;
    name = "WoodLandInfantry";
}

void WoodlandInfantry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void WoodlandInfantry::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void WoodlandInfantry::defend()
{
    std::cout << "Defending " << std::endl;
}


void WoodlandInfantry::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int WoodlandInfantry::getHealth() const
{
    return this->health;
}

// void WoodlandInfantry::move()
// {
//     position += 2;
//     std::cout<< "Woodland Infantry moves stealthily through the forest to position " << position << std::endl;
// }

// void WoodlandInfantry::attack()
// {
//    std::cout << "Woodland Infantry ambushes the enemy, dealing " << (getPower() + 5) << " damage." << std::endl;
// }

