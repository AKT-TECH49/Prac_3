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
     map<string,string> direction; 
   direction["Air"] =  "flying";
   direction["Ground"] = "on the ground";
   cout <<"---------------" << this->name <<"'s----------------"<<endl;
   cout << " Initial position:" << direction["Air"] <<endl;
   cout << " Current position:" << direction["Ground"] <<endl;
}


void WoodlandInfantry::attack(LegionUnit* enemy)
{
     std::cout <<"Attacking "<<std::endl;
     int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten); 
}


int WoodlandInfantry::setHealth(int health)
{
     this->health -= health;
}

int WoodlandInfantry::setDefense(int beaten)
{
     this->defense = beaten;
}




void WoodlandInfantry::defend()
{
    std::cout << "Defending " << std::endl;
    move();
}


void WoodlandInfantry::retreat()
{
     std::cout << "Retreating" << std::endl;
     this->health +=5;
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

