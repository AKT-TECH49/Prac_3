#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"
using namespace std;

class Infantry : public LegionUnit
{

   public:
    Infantry( int health, int defense);

    virtual void move() =0;
    virtual void  attack() =0 ;
   virtual void  defend() =0;
    virtual void  retreat()= 0;


};

#endif 
