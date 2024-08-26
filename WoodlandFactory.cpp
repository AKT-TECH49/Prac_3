#include "WoodlandFactory.h"

LegionUnit *WoodlandFactory::createInfantry()
{
    return new WoodlandInfantry(100, 60);
}

LegionUnit *WoodlandFactory::createCavalry()
{
    return new WoodlandCavalry(100, 70);
}

LegionUnit *WoodlandFactory::createArtillery()
{
    return new WoodlandArtillery(100, 65);
}

void WoodlandFactory::delpoyArtillery()
{
    // need to e creative here
}