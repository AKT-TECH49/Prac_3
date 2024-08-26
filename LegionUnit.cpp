#include "LegionUnit.h"

#include <iostream>
using namespace std;


LegionUnit::LegionUnit(int health, int defense, std::string LegionType)
{
    this->health = health;
    this->defense = defense;
    this->name = LegionType;
}

LegionUnit::~LegionUnit()
{
    for(auto&m :LegionUnits)
    {
        delete m;
    }
    LegionUnits.clear();
}

bool LegionUnit::isAlive()
{
    
    if (this->health > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}


void LegionUnit::takeDamage(int damage)
{
     int actualDamage = damage - defense;
        if (actualDamage > 0) {
            health -= actualDamage;
            std::cout << getType() << " takes " << actualDamage << " damage. Health is now " << health << "." << std::endl;
        } else {
            std::cout << getType() << " deflects the attack!" << std::endl;
        }
}


std::string LegionUnit::getType() const
{
    return name;
}
