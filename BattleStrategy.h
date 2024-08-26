#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include <vector>
#include <string>
#include <iostream>
#include <memory>

#include "Artillery.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "LegionFactory.h"



class BattleStrategy
{
    // interface class
    // this class needs to be integrated with the Abstract Factory(LegionFactory)
    // pattern to adapt production rates and unit types in real time
    private:
    int tacticsLevel;
    std::string name;


     std::vector<Artillery*> artilleryUnits;
    std::vector<Infantry*> infantryUnits;
    std::vector<Cavalry*> cavalryUnits;


public:
    
    BattleStrategy(const std::string &name, int tacticsLevel);
        

    virtual ~BattleStrategy() = default;
    virtual void engage() const = 0;

    // getters
    virtual std::string getUnitTypes() = 0;

    int getTacticsLevel() const;
    void setTacticsLevel(int level);

    void produceUnits(LegionFactory* factory);

    void addArtilleryUnit(Artillery* unit);
    void addInfantryUnit(Infantry* unit);
    void addCavalryUnit(Cavalry* unit);
    // Getters
    std::vector<Artillery*> getArtilleryUnits() const;
    std::vector<Infantry*> getInfantryUnits() const;
    std::vector<Cavalry*> getCavalryUnits() const;

};

#endif