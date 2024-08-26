#ifndef OPENFIELD_INFANTRY_H
#define OPENFIELD_INFANTRY_H

#include "Infantry.h"

class OpenFieldInfantry : public Infantry 
{
     private:
    int health;
    int defense;
    
    public:
        OpenFieldInfantry(int health, int defence);
        void move()override;
       void  attack(LegionUnit* enemy) override;
        void  defend() override;
        void  retreat() override;

         int setHealth(int health)override;
         int setDefense(int beaten)override;

         int getHealth() const override;
};

#endif
