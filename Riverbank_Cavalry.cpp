#include "Riverbank_Cavalry.h"
#include "Cavalry.h"

#include <iostream>
using namespace std;

RiverbankCavalry::RiverbankCavalry(int health, int defense) :Cavalry(health , defense)
{
     this->health = health;
     this->defense = defense;
   this->name = "RiverBank Cavalry";
}

void RiverbankCavalry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void RiverbankCavalry::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void RiverbankCavalry::defend()
{
    std::cout << "Defending " << std::endl;
}


void RiverbankCavalry::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int RiverbankCavalry::getHealth() const
{
    return this->health;
}

// void RiverbankCavalry::move()
// {
//     position += 2; // Regular movement
//     std::cout << "Riverbank Cavalry crosses the river swiftly to position " << position << std::endl;
// }

// void RiverbankCavalry::attack()
// {
//     std::cout << "Riverbank Cavalry charges from the riverbank, dealing " << (getPower() + 2) << " damage." << std::endl;
// }

// std::string RiverbankCavalry::getType() const
// {
//     return "Riverbank Cavalry";
// }