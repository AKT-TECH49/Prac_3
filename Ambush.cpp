#include "Ambush.h"

Ambush::Ambush():BattleStrategy("Ambush",2 )
{}

Ambush::~Ambush()
{
    delete this;
}

void Ambush::engage() const
{
    std::cout << "The Ambush Strategy is now being executed!!!" << std::endl;
    
   
    int powerIncrease = 20;
    std::cout << "Boosting power by " << powerIncrease << " points!" << std::endl;

    std::vector<std::string> units = {"Calvary", "Infantry", "Artillery"};
    std::cout << "Transporting soldiers for the ambush:" << std::endl;
    
    std::cout << "Units being mobilized:" << std::endl;
    for (const auto& unit : units)
    {
        std::cout << " \t  - " << unit << std::endl;
    }

    std::cout << "Prepare to engage in a surprise ambush with a combined force of " 
              << units.size() << " types of units!" << std::endl;
    
    std::cout << "Ambush in progress... Engage with stealth and precision!" << std::endl;
}


std::string Ambush::getUnitTypes()
{
    return unitType;
}
