#include "TacticalCommand.h"

TacticalCommand::TacticalCommand(WarArchives* saved, TacticalPlanner* pln)
{
    this->locked = std::move(saved);
    this->pln = std::move(pln);
}

void TacticalCommand::execute(std::string &label)
{
    auto morty = locked->getMemento(label);

    if (morty)
    {
        TacticalMemento* morty;
        pln->restoreMemento(morty);
        executeStrategy();
    }
    else
    {
        std::cerr << "Memento not found for: " << label << std::endl;
    }
}

void TacticalCommand::executeStrategy() const
{
    // Executes the current strategy
    auto strty = pln->getStrategy();
    if (strty)
    {
        strty->engage();
    }
    else
    {
        std::cerr << "No strategy set. \n";
    }
}

void TacticalCommand::chooseBestStrategy() const
{
    // - chooses an appropraite strategy based on previous results
    //(using the Memento pattern, explaination to follow)
    // - returns the chosen strategy
    // getmemento funtion has a string &label passed in how do we account for that
    // we need to get the memento from the war archives and then pass it to the planner
    // the planner will then use the memento to restore the state of the battle
    // then we can get the strategy from the planner and execute it

    int currL = pln->getStrategy()->getTacticsLevel();
    std::string bestL;
    TacticalMemento* bestM ;

    for (int level = 3; level > currL; --level)
    {
        bestL = locked->getLBTL(level);
        if (!bestL.empty())
        {
            TacticalMemento *morty = locked->getMemento(bestL);
            if (morty)
            {
                bestM = morty;
            break;
            }
        }
    }

    if (!bestM && currL > 1)
    {
        bestL = locked->getLBTL(currL - 1);
        if (!bestL.empty())
        {
            TacticalMemento *morty = locked->getMemento(bestL);
            if (morty)
            {
                bestM =morty;
            }
        }
    }

    if (bestM)
    {
        pln->restoreMemento(bestM);
        executeStrategy();
    }
    else
    {
        std::cerr << "No suitable strategy found.\n";
    }
}
