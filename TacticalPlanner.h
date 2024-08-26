#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include <iostream>
#include <vector>
#include <string>
#include "BattleStrategy.h"
#include "TacticalMemento.h"

//Originator

class TacticalPlanner
{
    private:
    BattleStrategy* currentStrategy ;

    public:
    TacticalPlanner()=default;
    ~TacticalPlanner()=default;


    TacticalMemento* createMemento();//should save current state into a memento

    void restoreMemento(TacticalMemento* memento);//retores from a memento
    //setter:
    void setStrategy(BattleStrategy* strategy);
    //getter:
   
    BattleStrategy* getStrategy() const;

};




#endif 