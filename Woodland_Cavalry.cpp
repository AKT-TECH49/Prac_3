#include "Woodland_Cavalry.h"


#include <iostream>
using namespace std;

WoodlandCavalry::WoodlandCavalry(int health, int defense):Cavalry(health , defense)
{
     this->health = health;
     this->defense = defense;
   this->name = "WoodLand Cavalry";
}
void WoodlandCavalry::move()
{
     std::cout <<"Moving" <<std::endl;
      map<string,string> direction; 
   direction["Air"] =  "flying";
   direction["Ground"] = "on the ground";
   cout <<"---------------" << this->name <<"'s----------------"<<endl;
   cout << " Initial position:" << direction["Air"] <<endl;
   cout << " Current position:" << direction["Ground"] <<endl;
}


void WoodlandCavalry::attack(LegionUnit* enemy)
{
     std::cout <<"Attacking "<<std::endl;
     int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten); 


}

int WoodlandCavalry::setHealth(int health)
{
     this->health -= health;
}

int WoodlandCavalry::setDefense(int beaten)
{
     this->defense = beaten;
}



void WoodlandCavalry::defend()
{
    std::cout << "Defending " << std::endl;
    move();
}


void WoodlandCavalry::retreat()
{
     std::cout << "Retreating" << std::endl;
     this->health +=3;
}


int WoodlandCavalry::getHealth() const
{
    return this->health;
}

// void WoodlandCavalry::move()
// {
//     position += 2;
//     std::cout<< "Woodland Cavalry maneuvers through the forest to position " << position << std::endl;
// }

// void WoodlandCavalry::attack()
// {
//    std::cout << "Woodland Cavalry strikes swiftly from cover, dealing" << (getPower() + 3) << " damage." << std::endl;
// }

// std::string WoodlandCavalry::getType() const
// {
//     return "WoodLand Cavalry" ;
// }