#ifndef RIVERBANK_CAVALRY_H
#define RIVERBANK_CAVALRY_H

#include "Cavalry.h"

class RiverbankCavalry : public Cavalry
{
  //  private:
  //   int health;
  //   int defense;
    
   public:
       RiverbankCavalry(int health, int defense);
       

       void move() override;
     void  attack(LegionUnit* enemy) override;
    void  defend() override;
     void  retreat() override;

      int setHealth(int health) override; 
    int setDefense(int beaten) override;

      int getHealth() const override;
      int getDefense() const override;
     


};
#endif
