#ifndef  WOODLAND_INFANTRY_H
#define WOODLAND_INFANTRY_H

#include "Infantry.h"
#include <iostream>
using namespace std;

class WoodlandInfantry : public Infantry
{
//      private:
//     int health;
//     int defense;
    
    public:
       WoodlandInfantry(int health, int defense);
        void move()override;
        void  attack(LegionUnit* enemy)override;
        void  defend() override;
        void  retreat() override;

         int getHealth() const override;
         int getDefense() const override;

         int setHealth(int health)override;
        int setDefense(int defense)override;
};
#endif