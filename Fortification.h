#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

#include <vector>
#include <list>
#include <iostream>
#include <string>


class Fortification : public BattleStrategy 
{
    //have to be creative about how this class will function
    //its a concrete Strategy class its interface is BattleStrategy 
    //context class TacticalCommand
    private:
    std::string unitType;
   




    public:
    Fortification();
    ~Fortification() override = default;
    
    void engage() const override;
    //add more functionality because 
    //• Strategies influence how factories produce and deploy units, integrating with the Abstract
    //Factory pattern to adapt production rates and unit types in real-time.

     //getters 
     std::string getUnitTypes() override;
    //setters

};


#endif