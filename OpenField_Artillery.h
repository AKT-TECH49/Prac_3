#ifndef OPENFIELD_ARTILLERY_H
#define OPENFIELD_ARTILLERY_H

#include "Artillery.h"

#include <iostream>
using namespace std;

class OpenFieldArtillery : public Artillery 
{  
    // private:
    // int health;
    // int defense;
    
    public:
        OpenFieldArtillery(int health, int defense);
        
     void move() override;
    void  attack(LegionUnit* enemy) override;
    void  defend() override;
     void  retreat() override;

     //setter
     int setHealth(int health) override; 
    int setDefense(int beaten) override; 

    //getter
      int getHealth() const override;
      int getDefense() const override;

};

#endif
