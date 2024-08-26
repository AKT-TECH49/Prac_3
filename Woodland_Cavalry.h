#ifndef  WOODLAND_CAVALRY_H
#define WOODLAND_CAVALRY_H

#include "Cavalry.h"

#include <iostream>
using namespace std;

class WoodlandCavalry : public Cavalry
{

     private:
    int health;
    int defense;

    
    public:
       WoodlandCavalry(int health, int defense);
        void move()override;
        void  attack(LegionUnit* enemy)override;
        void  defend() override;
        void  retreat() override;

        
         int getHealth() const override;
         //setter
         int setHealth(int health)override;
        int setDefense(int defense)override;
};
#endif