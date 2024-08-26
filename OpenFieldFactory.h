#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H


#include "LegionFactory.h"



class OpenFieldFactory : public LegionFactory
{
      public: //
        LegionUnit*  createInfantry()override;
        LegionUnit*   createCavalry() override;
        LegionUnit*  createArtillery()override;
    
        void delpoyArtillery();
};




#endif 