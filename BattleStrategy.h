#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <vector>
#include <string>
#include <iostream>
#include <memory>

#include "OpenField_Artillery.h"
#include "Openfield_Infantry.h"
#include "Openfield_Cavalry.h"
#include "Riverbank_Cavalry.h"
#include "Riverbank_Infantry.h"
#include "Riverbank_Artillery.h"
#include "Woodland_Cavalry.h"
#include "WoodLand_Infantry.h"
#include "Woodland_Artillery.h"

#include "LegionFactory.h"



class BattleStrategy
{
    // interface class
    // this class needs to be integrated with the Abstract Factory(LegionFactory)
    // pattern to adapt production rates and unit types in real time
    private:
    int tacticsLevel;
    std::string name;

public:
    
    BattleStrategy(std::string name);
        

    virtual ~BattleStrategy() = default;
    virtual void engage() const = 0;

    // getters
    virtual std::string getUnitTypes() = 0;

    int getTacticsLevel() const;
    void setTacticsLevel(int level);

    void addLegionUnits(LegionUnit* lg);



};

#endif