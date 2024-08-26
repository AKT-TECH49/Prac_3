#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

#include <vector>
#include <list>
#include <iostream>
#include <string>


class Flanking : public BattleStrategy 
{
    //have to be creative about how this class will function
    //its a concrete Strategy class its interface is BattleStrategy 
    //context class TacticalCommand
    private:
    std::string unitType;
    std::vector<int> unitCount;


    public:
    Flanking();
    ~Flanking() override = default;
    
    void engage() const override;
    //add more functionality because 
    //• Strategies influence how factories produce and deploy units, integrating with the Abstract
    //Factory pattern to adapt production rates and unit types in real-time.
 
     //getters 
    std::string getUnitTypes() override;

};


#endif