#include "Openfield_Infantry.h"

#include<iostream>
#include "Infantry.h"
using namespace std;


OpenFieldInfantry::OpenFieldInfantry(int health , int defence):Infantry(health , defense)
{    
     this->health = health;
     this->defense = defense;
       this->name = "OpenField Infantry";
}

void OpenFieldInfantry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void OpenFieldInfantry::attack(LegionUnit* enemy)
{
     std::cout <<"Attacking "<<std::endl;
     int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten); 
}

int OpenFieldCavalry::setHealth(int health)
{
     this->health -= health;
}

int OpenFieldCavalry::setDefense(int beaten)
{
     this->defense = beaten;
}


void OpenFieldInfantry::defend()
{
    std::cout << "Defending " << std::endl;
     move();
}


void OpenFieldInfantry::retreat()
{
     std::cout << "Retreating" << std::endl;
     this->health +=3;
}

int OpenFieldInfantry::getHealth() const
{
    return health;
}

// void OpenFieldInfantry:: move() 
// {
//         position += 3; // Faster movement in open fields
//         std::cout << "OpenField Infantry advances rapidly across the field to position " << position << std::endl;
// }

// void OpenFieldInfantry:: attack() 
// {
//         std::cout << "OpenField Infantry charges with full force, dealing " << getPower() << " damage." << std::endl;
// }

// std::string OpenFieldInfantry::getType() const 
// {
//         return "OpenField Infantry";
// }


