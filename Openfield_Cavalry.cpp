#include "Openfield_Cavalry.h"



OpenFieldCavalry::OpenFieldCavalry(int health , int defense):Cavalry(health , defense)
{
    this->name = "OpenField Cavalry";
}


void OpenFieldCavalry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void OpenFieldCavalry::attack(LegionUnit* enemy)
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


void OpenFieldCavalry::defend()
{
    std::cout << "Defending " << std::endl;
     move();
}


void OpenFieldCavalry::retreat()
{
     std::cout << "Retreating" << std::endl;
     
     this->health +=3;
}

int OpenFieldCavalry::getHealth() const
{
    return health;
}

int OpenFieldCavalry::getDefense() const
{
    return this->defense;
}
