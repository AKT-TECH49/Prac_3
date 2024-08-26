#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"
#include <vector>
#include <list>
#include <iostream>
#include <string>


class Ambush : public BattleStrategy 
{

    private:
     std::string unitType;
     int ambushDamage;
    
    //have to be creative about how this class will function
    //its a concrete Strategy class its interface is BattleStrategy 
    //context class TacticalCommand
        //add more functionality because 
    //• Strategies influence how factories produce and deploy units, integrating with the Abstract
    //Factory pattern to adapt production rates and unit types in real-time.
    public:
    Ambush();
   ~Ambush() ;
    void engage() const override;


    //getters 
     std::string getUnitTypes() override;
    //setters

};


#endif