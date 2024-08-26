#ifndef RIVERBANK_ARTILLERY_H
#define RIVERBANK_ARTILLERY_H

#include "Artillery.h"
#include <iostream>
using namespace std;

class RiverbankArtillery : public Artillery 
{    
    // private:
    // int health;
    // int defense;

    
   public:
    RiverbankArtillery(int health, int defence);

     void move() override;
    void  attack(LegionUnit* enemy) override;
    void  defend() override;
     void  retreat() override;

    int setHealth(int health)override; 
    int setDefense(int beaten) override; 

      int getHealth() const override;
      int getDefense() const override;
  
};
#endif
