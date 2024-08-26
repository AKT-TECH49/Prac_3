#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include <iostream>
#include <string>


class Cavalry : public LegionUnit 
{

    public:

       Cavalry(int health, int defense);
        virtual  int setHealth(int health) = 0;
     virtual int setDefense(int beaten) = 0;
     virtual void move()= 0;
      virtual void  attack(LegionUnit* enemy) = 0;
     virtual void retreat()=0; 
     virtual void defend() = 0;
     virtual int getHealth() const = 0;
      virtual int getDefense() const = 0;
};
#endif