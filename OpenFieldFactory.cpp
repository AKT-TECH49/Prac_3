#include "OpenFieldFactory.h"
#include "LegionFactory.h"
#include "OpenField_Artillery.h"
#include "Openfield_Cavalry.h"
#include "Openfield_Infantry.h"

LegionUnit *OpenFieldFactory::createInfantry()
{
    return new OpenFieldInfantry(100 , 60);
}

LegionUnit *OpenFieldFactory::createCavalry()
{
    return new OpenFieldCavalry(100,75);
}

LegionUnit *OpenFieldFactory::createArtillery()
{
    return new OpenFieldArtillery(100,65);
}


void OpenFieldFactory::delpoyArtillery()
{
    // need to e creative here
}