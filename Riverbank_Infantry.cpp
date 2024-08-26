#include "Riverbank_Infantry.h"
#include "Infantry.h"

#include <iostream>
using namespace std;

RiverbankInfantry::RiverbankInfantry(int health, int defense) :Infantry(health , defense)
{
    this->name = "RiverBank Infantry";
    this->health = health;    
    this->defense = defense;
}

void RiverbankInfantry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void RiverbankInfantry::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void RiverbankInfantry::defend()
{
    std::cout << "Defending " << std::endl;
}


void RiverbankInfantry::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int RiverbankInfantry::getHealth() const
{
    return health;
}

// void RiverbankInfantry::move()
// {
//    position += 1; // Regular movement
//    std::cout << "Riverbank Infantry fords the river to position " << position << std::endl;
// }

// void RiverbankInfantry::attack()
// {
//     std::cout << "Riverbank Infantry uses the terrain for cover, dealing " << getPower() << " damage." << std::endl;
// }

// std::string RiverbankInfantry::getType() const
// {
//     return "Riverbank Infantry";
// }