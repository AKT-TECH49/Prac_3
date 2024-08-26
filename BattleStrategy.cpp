#include "BattleStrategy.h"
#include <memory>
#include <iostream>

BattleStrategy::BattleStrategy(const std::string &name, int tacticsLevel)
{
    this-> name = name;
     this->tacticsLevel = tacticsLevel ;
}

int BattleStrategy::getTacticsLevel() const
{
        return tacticsLevel;
}

void BattleStrategy::setTacticsLevel(int level)
{
    tacticsLevel = level;
}

void BattleStrategy::addArtilleryUnit(Artillery *unit)
{
    artilleryUnits.push_back(unit);
}

void BattleStrategy::addInfantryUnit(Infantry* unit) {
    infantryUnits.push_back(unit);
}

void BattleStrategy::addCavalryUnit(Cavalry* unit) {
    cavalryUnits.push_back(unit);
}

std::vector<Artillery*> BattleStrategy::getArtilleryUnits() const {
    return artilleryUnits;
}

std::vector<Infantry*> BattleStrategy::getInfantryUnits() const {
    return infantryUnits;
}

std::vector<Cavalry*> BattleStrategy::getCavalryUnits() const {
    return cavalryUnits;
}