#include "OpenField_Artillery.h"
#include "Artillery.h"

#include <iostream>
using namespace std;

OpenFieldArtillery::OpenFieldArtillery(int health , int defense):Artillery(health , defense)  
{       
     this->health = health;
     this->defense = defense;
     this->name = "OpenField Artillery";      
}


void OpenFieldArtillery::move()
{
     std::cout <<"Moving" <<std::endl;
}



void OpenFieldArtillery::attack(LegionUnit* enemy)
{
     std::cout<<"Attacking"<<std::endl;
   int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten); 
}



void OpenFieldArtillery::defend()
{
    std::cout << "Defending " << std::endl;
    move();
}


void OpenFieldArtillery::retreat()
{
     std::cout << "Retreating" << std::endl;
      this->health +=3;
}


int OpenFieldArtillery::setHealth(int health)
{
     this->health -= health;
}

int OpenFieldArtillery::setDefense(int beaten)
{
     this->defense = beaten;
}


int OpenFieldArtillery::getHealth() const
{
return this->health;
}


//  void OpenFieldArtillery::attack() 
// {
//         std::cout << "OpenField Artillery bombards with precision, dealing " << getPower() << " damage." << std::endl;
// }

