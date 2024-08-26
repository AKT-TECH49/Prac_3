#include "Riverbank_Artillery.h"

#include "Artillery.h"


RiverbankArtillery::RiverbankArtillery(int health , int defence):Artillery(health , defence)  
{
     this->health = health;
     this->defense = defence;
        this->name = "RiverBank Artillery";
}

void RiverbankArtillery::move()
{
     std::cout <<"Moving" <<std::endl;
}


void RiverbankArtillery::attack()
{
     std::cout <<"Attacking "<<std::endl;
}


void RiverbankArtillery::defend()
{
    std::cout << "Defending " << std::endl;
}


void RiverbankArtillery::retreat()
{
     std::cout << "Retreating" << std::endl;
}

int RiverbankArtillery::getHealth() const
{
    return health;
}

// void RiverbankArtillery::attack() 
// {
//         std::cout << "Riverbank Artillery bombards from a secured position near the river, dealing " << (getPower() + 3) << " damage." << std::endl;
// }




