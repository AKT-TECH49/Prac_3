#include "Fortification.h"



Fortification::Fortification():BattleStrategy("Fortification",3 )
{};


void Fortification::engage() const
{
    std::cout << "The Fortification Strategy is now being executed!!!" << std::endl;
    
    // Increase health and defense
    int healthIncrease = 30;
    int defenseIncrease = 25;
    std::cout << "Fortifying the units!" << std::endl;
    std::cout << "Increasing health by " << healthIncrease << " points!" << std::endl;
    std::cout << "Increasing defense by " << defenseIncrease << " points!" << std::endl;

    // Display fortification progress
    std::cout << "Constructing defensive structures:" << std::endl;
    std::vector<std::string> fortifications = {"Walls", "Watchtowers", "Trenches", "Bunkers"};
    for (const auto& fortification : fortifications)
    {
        std::cout << " \t - Building " << fortification << std::endl;
    }

    std::cout << "All units are now fortified and ready for a strong defense!" << std::endl;
    std::cout << "Prepare to hold the line with enhanced fortifications!" << std::endl;
}

std::string Fortification::getUnitTypes()
{
    return this->unitType;
}
