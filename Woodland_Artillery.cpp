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
}


void WoodlandArtillery::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void WoodlandArtillery::defend()
{
    std::cout << "Defending " << std::endl;
}


void WoodlandArtillery::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int WoodlandArtillery::getHealth() const
{
    return this->health;
}
