#include "Openfield_Infantry.h"

#include<iostream>
#include "Infantry.h"
using namespace std;


OpenFieldInfantry::OpenFieldInfantry(int health , int defense):Infantry(health , defense)
{    
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

int OpenFieldInfantry::setHealth(int health)
{
     this->health -= health;
}

int OpenFieldInfantry::setDefense(int beaten)
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

int OpenFieldInfantry::getDefense() const
{
    return this->defense;
}
