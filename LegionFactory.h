#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H


#include "Cavalry.h"
#include "Artillery.h"
#include "Infantry.h"


class LegionFactory 
{
    public:
       virtual LegionUnit*  createInfantry() = 0;
       virtual LegionUnit*  createCavalry() = 0;
       virtual LegionUnit*  createArtillery()= 0;
       
       virtual ~LegionFactory() = default;
};
#endif