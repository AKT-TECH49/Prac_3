#ifndef RIVERBANK_INFANTRY_H
#define RIVERBANK_INFANTRY_H

#include "Infantry.h"

class RiverbankInfantry : public Infantry
{
  //  private:
  //   int health;
  //   int defense;

    
   public:
       RiverbankInfantry(int health, int defense);

       void move() override;
     void  attack(LegionUnit* enemy) override ;
     void  defend() override ;
    void  retreat() override;

   int setHealth(int health)override;
    int setDefense(int defense)override;

    
     int getHealth() const override;
     int getDefense() const override;
};
#endif
