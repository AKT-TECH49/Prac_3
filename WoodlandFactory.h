#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H


#include "LegionFactory.h"
#include "WoodLand_Infantry.h"
#include "Woodland_Cavalry.h"
#include "Woodland_Artillery.h"


class WoodlandFactory: public LegionFactory
{
     public: 
     
        LegionUnit* createInfantry() override;
        LegionUnit* createCavalry() override;
        LegionUnit* createArtillery()override;
    
        void delpoyArtillery();
       
};

#endif