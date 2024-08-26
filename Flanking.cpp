#include "Flanking.h"



Flanking::Flanking():BattleStrategy("Flanking",1 )
{};


void Flanking::engage() const
{
        std::cout<<"The Flanking Strategy is now being executed!!! "<<std::endl;
        std::cout << "Loading Equipment onto boats:" << std::endl;
       std::vector<std::string> equipment = {"Weapons", "Shields", "Medical Supplies", "Rations"};
       for(auto i : equipment)
       {
            std::cout<<"\t -"<<"LOADING EQUIPMENT: "<<i<<std::endl;
       }
       std::cout<<"ALL UNITS IMPLEMENTING THE FLANKING STRATEGY: "<<std::endl;
}
    
    
std::string Flanking::getUnitTypes()
{
    return unitType;
}
