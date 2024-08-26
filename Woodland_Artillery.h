#ifndef  WOODLAND_ARTILLERY_H
#define WOODLAND_ARTILLERY_H

#include "Artillery.h"
#include <iostream>
using namespace std;

class WoodlandArtillery : public Artillery
{
  //  private:
  //   int health;
  //   int defense;
    
    public:
        
       WoodlandArtillery(int health, int defense);

       void move() override;
     void  attack(LegionUnit* enemy) override;
   void  defend() override;
    void  retreat() override;
    int getHealth() const override;
    int getDefense() const override;

    int setHealth(int health)override;
    int setDefense(int defense)override;
       

};
#endif