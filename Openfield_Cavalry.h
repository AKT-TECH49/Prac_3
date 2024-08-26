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
   void  attack(LegionUnit* enemy) override;
    void  defend() override;
     void  retreat() override;

     //setter
     int setHealth(int health)override;
    int setDefense(int beaten)override;
    //getter
      int getHealth() const override;
   
};

#endif
