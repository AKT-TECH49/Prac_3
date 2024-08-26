#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"
using namespace std;

class Infantry : public LegionUnit
{

   public:
    Infantry( int health, int defense);

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
