#ifndef RIVERBANK_CAVALRY_H
#define RIVERBANK_CAVALRY_H

#include "Cavalry.h"

class RiverbankCavalry : public Cavalry
{
   private:
    int health;
    int defense;
    
   public:
       RiverbankCavalry(int health, int defense);
       

       void move() override;
     void  attack() override;
    void  defend() override;
     void  retreat() override;

      int getHealth() const override;
     


};
#endif
