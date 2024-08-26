#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include <iostream>
#include <vector>
#include <memory>
#include "BattleStrategy.h"


//memento
class TacticalMemento 
{
    private:
    BattleStrategy* strategy;


    public:
    TacticalMemento()=default;
     ~TacticalMemento()=default;

    //setter
    void storeStrategy(BattleStrategy* strategy);

    //getters
    BattleStrategy* getStrategy() const;


    
};


#endif 