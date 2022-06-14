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
    this->rollVal = 0;
    this->initMod = initMod;
    this->dexScore = dexScore;
    this->lucky = lucky;
}

int entity::dexmod()
{
    return ((dexScore / 2) - 5);
}

void entity::roll()
{
    rollVal = rand() % 20 + 1;
    //if 1 is rolled and lucky = true then reroll
    if ((rollVal == 1) && (lucky == true))
    {
        rollVal = rand() % 20 + 1;
    }
}
