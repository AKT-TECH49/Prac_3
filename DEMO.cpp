//Openfield
#include "OpenFieldFactory.h"
#include "OpenField_Artillery.h"
#include "Openfield_Infantry.h"
#include "Openfield_Cavalry.h"
//Riverbank
#include "RiverBankFactory.h"
#include "Riverbank_Cavalry.h"
#include "Riverbank_Infantry.h"
#include "Riverbank_Artillery.h"
//Woodland
#include "WoodlandFactory.h"
#include "Woodland_Cavalry.h"
#include "WoodLand_Infantry.h"
#include "Woodland_Artillery.h"
//Legions
#include "UnitComponent.h"
#include "LegionFactory.h"
#include "LegionUnit.h"
#include "Legion.h"
//types 
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
//strategies
#include "BattleStrategy.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"
//memento
#include "TacticalPlanner.h"
#include "TacticalMemento.h"
#include "WarArchives.h"
//strategy and memento 
#include "TacticalCommand.h"

#include <iostream>
#include <iomanip>
using namespace std;

void TestMethods();

int main()
{
    TestMethods();


    return 0;
}


void TestMethods()
{   
     OpenFieldFactory Factory ;
    LegionUnit* openFieldC  = Factory.createCavalry();
    openFieldC->move(); 
    std::cout<< openFieldC->getType();
    std::cout<<std::endl<< openFieldC->getHealth();
    std::cout<<std::endl<< openFieldC->getDefense();


     WoodlandFactory Factory1 ;
    LegionUnit* woodyC  = Factory1.createArtillery();
    std::cout<<std::endl;
    woodyC->defend();
    std::cout<<std::endl<< woodyC->getType();
     std::cout<<std::endl<< woodyC->getHealth();
      std::cout<<std::endl<< woodyC->getDefense();


    RiverBankFactory Factory2;
    LegionUnit* rivey = Factory2.createInfantry();
    std::cout<<std::endl;
    rivey->retreat();
    std::cout<<std::endl<<rivey->getType()<<std::endl;
    std::cout<<std::endl<<rivey->getHealth()<<std::endl;
    std::cout<<std::endl<<rivey->getDefense()<<std::endl;

     cout << "RiverBank Infantry attacks OpenField Cavalry" <<endl;
      rivey->attack(openFieldC); 
      std::cout<<"OpenField Cavalry after attacked: "<<std::endl
      <<openFieldC->getHealth()<<std::endl<<
      openFieldC->getDefense()<<
      std::endl;


      BattleStrategy* strat = new Flanking();
      




   
   
    
    
}











