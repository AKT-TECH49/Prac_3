#include "Openfield_Cavalry.h"



OpenFieldCavalry::OpenFieldCavalry(int health , int defense):Cavalry(health , defense)
{
     this->health = health;
     this->defense = defense;
    this->name = "OpenField OpenFieldCavalry";
}


void OpenFieldCavalry::move()
{
     std::cout <<"Moving" <<std::endl;
}


void OpenFieldCavalry::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void OpenFieldCavalry::defend()
{
    std::cout << "Defending " << std::endl;
}


void OpenFieldCavalry::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int OpenFieldCavalry::getHealth() const
{
    return health;
}

// void OpenFieldOpenFieldCavalry:: move()  
// {
//         position += 4; // Very fast movement in open fields
//         std::cout << "OpenField OpenFieldCavalry charges across the open field to position " << position << std::endl;
// }

// void OpenFieldOpenFieldCavalry::attack()
// {
//         std::cout << "OpenField OpenFieldCavalry delivers a powerful charge, dealing " << (getPower() + 5) << " damage." << std::endl;
// }

// std::string OpenFieldOpenFieldCavalry:: getType() const 
//     {
//         return "OpenField OpenFieldCavalry";
//     }
