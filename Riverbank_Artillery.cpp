#include "Riverbank_Artillery.h"

#include "Artillery.h"
#include <map>


RiverbankArtillery::RiverbankArtillery(int health , int defence):Artillery(health , defence)  
{
        this->name = "RiverBank Artillery";
}

void RiverbankArtillery::move()
{
     std::cout <<"Moving" <<std::endl;
     map<string,string> direction; 
   direction["Air"] =  "flying";
   direction["Ground"] = "on the ground";
   cout <<"---------------" << this->name <<"'s----------------"<<endl;
   cout << " Initial position:" << direction["Air"] <<endl;
   cout << " Current position:" << direction["Ground"] <<endl;
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

int RiverbankArtillery::getDefense() const
{
    return this->defense;
}

// void RiverbankArtillery::attack() 
// {
//         std::cout << "Riverbank Artillery bombards from a secured position near the river, dealing " << (getPower() + 3) << " damage." << std::endl;
// }




