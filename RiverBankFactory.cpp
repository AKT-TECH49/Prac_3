#include "RiverBankFactory.h"
#include "Riverbank_Artillery.h"
#include "Riverbank_Cavalry.h"
#include "Riverbank_Infantry.h"



LegionUnit* RiverBankFactory::createInfantry()
{
    return new RiverbankInfantry(100 , 70);
}

LegionUnit* RiverBankFactory:: createCavalry()
{
      return new RiverbankCavalry(100 , 65);
}

LegionUnit* RiverBankFactory:: createArtillery()
{
     return new RiverbankArtillery(100 , 50);
}



void RiverBankFactory:: delpoyArtillery()
{
    //need to e creative here 
}