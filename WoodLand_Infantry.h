#ifndef  WOODLAND_INFANTRY_H
#define WOODLAND_INFANTRY_H

#include "Infantry.h"
#include <iostream>
using namespace std;

class WoodlandInfantry : public Infantry
{
     private:
    int health;
    int defense;
    
    public:
       WoodlandInfantry(int health, int defense);
        void move()override;
        void  attack()override;
        void  defend() override;
        void  retreat() override;

         int getHealth() const override;
};
#endif