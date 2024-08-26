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
      map<string,string> direction; 
   direction["Air"] =  "flying";
   direction["Ground"] = "on the ground";
   cout <<"---------------" << this->name <<"'s----------------"<<endl;
   cout << " Initial position:" << direction["Air"] <<endl;
   cout << " Current position:" << direction["Ground"] <<endl;
}


void RiverbankInfantry::attack(LegionUnit* enemy)
{
     std::cout <<"Attacking "<<std::endl;
     int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten); 
}

int RiverbankInfantry::setHealth(int health)
{
     this->health -= health;
}

int RiverbankInfantry::setDefense(int beaten)
{
     this->defense = beaten;
}



void RiverbankInfantry::defend()
{
    std::cout << "Defending " << std::endl;
     move();
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