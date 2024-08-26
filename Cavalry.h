#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include <iostream>
#include <string>


class Cavalry : public LegionUnit 
{

    public:

       Cavalry(int health, int defense);
      
       
        virtual void move() =0;
    virtual void  attack() =0 ;
   virtual void  defend() =0;
    virtual void  retreat()= 0;

};
#endif