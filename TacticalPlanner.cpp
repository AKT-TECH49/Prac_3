#include "TacticalPlanner.h"


  TacticalMemento* TacticalPlanner::createMemento()
{
        TacticalMemento* menty ;
        menty->storeStrategy(currentStrategy);
        return menty;
}


void TacticalPlanner::restoreMemento(TacticalMemento* memento)
{
    // Restore the state of the tactical planner from the memento
    if(memento)
    {
        currentStrategy = memento->getStrategy();
    }
    
}

void TacticalPlanner::setStrategy(BattleStrategy* strategy)
{
    this->currentStrategy = strategy;
}


BattleStrategy* TacticalPlanner::getStrategy() const
{
    return currentStrategy;
}
