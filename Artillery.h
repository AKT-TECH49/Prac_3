#ifndef ARTILLERY_H
#define ARTILLERY_H

#include <string>
#include "LegionUnit.h"
#include "UnitComponent.h"

class Artillery : public LegionUnit
{

public:

   Artillery(int health , int defense);

   virtual void move() =0;
    virtual void  attack() =0 ;
   virtual void  defend() =0;
    virtual void  retreat()= 0;

   void loadAmmunition(std::string ammunitionType);

};

#endif