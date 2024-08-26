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


void OpenFieldArtillery::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void OpenFieldArtillery::defend()
{
    std::cout << "Defending " << std::endl;
}


void OpenFieldArtillery::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int OpenFieldArtillery::getHealth() const
{
return this->health;
}


//  void OpenFieldArtillery::attack() 
// {
//         std::cout << "OpenField Artillery bombards with precision, dealing " << getPower() << " damage." << std::endl;
// }

