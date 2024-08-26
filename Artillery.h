#ifndef ARTILLERY_H
#define ARTILLERY_H

#include <string>
#include "LegionUnit.h"
#include "UnitComponent.h"

class Artillery : public LegionUnit
{

public:

   Artillery(int health , int defense);

   virtual  int setHealth(int health) = 0;
     virtual int setDefense(int beaten) = 0;
     virtual void move()= 0;
      virtual void  attack(LegionUnit* enemy) = 0;
     virtual void retreat()=0; 
     virtual void defend() = 0;
     virtual int getHealth() const = 0;
      virtual int getDefense() const = 0;

   void loadAmmunition(std::string ammunitionType);

};

#endif