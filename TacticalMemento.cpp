#include "TacticalMemento.h"
#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"



void TacticalMemento::storeStrategy(BattleStrategy* strategy)
{
  this->strategy = strategy;
}

BattleStrategy* TacticalMemento::getStrategy() const
{
   return strategy;
}


