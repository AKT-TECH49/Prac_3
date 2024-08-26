#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H


#include "LegionFactory.h"

class RiverBankFactory: public LegionFactory
{
     public: //
        LegionUnit* createInfantry()override;
        LegionUnit* createCavalry() override;
        LegionUnit* createArtillery()override;
    
        void delpoyArtillery();
       
};



#endif