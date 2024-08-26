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
        void  attack()override;
        void  defend() override;
        void  retreat() override;

         int getHealth() const override;
};

#endif
