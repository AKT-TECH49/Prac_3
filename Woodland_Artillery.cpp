#include "Woodland_Artillery.h"
#include "Artillery.h"

#include <iostream>
using namespace std;

WoodlandArtillery::WoodlandArtillery(int health, int defense):Artillery(health,defense)
{
     this->health = health;
     this->defense = defense;
    this->name = "WoodLand Artillery ";
}


void WoodlandArtillery::move()
{
     std::cout <<"Moving" <<std::endl;
     map<string,string> direction; 
   direction["Air"] =  "flying";
   direction["Ground"] = "on the ground";
   cout <<"---------------" << this->name <<"'s----------------"<<endl;
   cout << " Initial position:" << direction["Air"] <<endl;
   cout << " Current position:" << direction["Ground"] <<endl;
}


void WoodlandArtillery::attack(LegionUnit* enemy)
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

void WoodlandArtillery::defend()
{
    std::cout << "Defending " << std::endl;
     move();
}


void WoodlandArtillery::retreat()
{
     std::cout << "Retreating" << std::endl;
      this->health +=3;
}

int WoodlandArtillery::getHealth() const
{
    return this->health;
}
