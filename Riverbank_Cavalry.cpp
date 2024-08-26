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
      map<string,string> direction; 
   direction["Air"] =  "flying";
   direction["Ground"] = "on the ground";
   cout <<"---------------" << this->name <<"'s----------------"<<endl;
   cout << " Initial position:" << direction["Air"] <<endl;
   cout << " Current position:" << direction["Ground"] <<endl;

}


void RiverbankCavalry::attack(LegionUnit* enemy)
{
     std::cout <<"Attacking "<<std::endl;
     int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten); 
}

int RiverbankCavalry::setHealth(int health)
{
     this->health -= health;
}

int RiverbankCavalry::setDefense(int beaten)
{
     this->defense = beaten;
}


void RiverbankCavalry::defend()
{
    std::cout << "Defending " << std::endl;
     move();
}


void RiverbankCavalry::retreat()
{
     std::cout << "Retreating" << std::endl;
     this->health +=3;
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