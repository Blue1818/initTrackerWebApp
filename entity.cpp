#include "entity.h"





entity::entity()
{
    //set vars to default values
    name = "default";
    rollVal = 0;
    initMod = 0;
    dexScore = 0;
    lucky = false;
}

entity::entity(string name, int rollVal, int initMod, int dexScore, bool lucky)
{
    this->name = name;
    this->rollVal = rollVal;
    this->initMod = initMod;
    this->dexScore = dexScore;
    this->lucky = lucky;
}

int entity::dexmod()
{
    return ((dexScore / 2) - 5);
}