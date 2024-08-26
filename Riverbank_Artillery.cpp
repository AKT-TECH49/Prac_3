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


void RiverbankArtillery::attack(LegionUnit* enemy)
{
     std::cout <<"Attacking "<<std::endl;
     int strength = (this->health + this->defense)/9; 
   int beaten = (this->health + this->defense)/10;
   enemy->setHealth(strength);
   enemy->setDefense(beaten);  

}


int RiverbankArtillery::setHealth(int health)
{
     this->health -= health;
}

int RiverbankArtillery::setDefense(int beaten)
{
     this->defense = beaten;
}



void RiverbankArtillery::defend()
{
    std::cout << "Defending " << std::endl;
      move();
}


void RiverbankArtillery::retreat()
{
     std::cout << "Retreating" << std::endl;
     this->health +=3;
}

int RiverbankArtillery::getHealth() const
{
    return health;
}

// void RiverbankArtillery::attack() 
// {
//         std::cout << "Riverbank Artillery bombards from a secured position near the river, dealing " << (getPower() + 3) << " damage." << std::endl;
// }




