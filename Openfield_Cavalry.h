#ifndef OPENFIELD_CAVALRY_H
#define OPENFIELD_CAVALRY_H

#include "Cavalry.h"
#include "LegionUnit.h"

class OpenFieldCavalry : public Cavalry {
     private:
    int health;
    int defense;

public:
    OpenFieldCavalry(int health, int defense);
    

    void move() override;
    void  attack() override;
    void  defend() override;
     void  retreat() override;

      int getHealth() const override;
   
};

#endif
