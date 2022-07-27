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

entity::entity(int dexScore)
{
    name = "default";
    rollVal = 0;
    initMod = 0;
    this->dexScore = dexScore;
    lucky = false;
}

entity::entity(string name)
{
    this->name = name;
    this->rollVal = 0;
    this->lucky = false;
    this->initMod = rand() % 5;
    this->dexScore = (rand() % 18) + 3;
}

entity::entity(string name, int initMod, int dexScore, bool lucky)
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

/* void entity::roll()
{
    rollVal = rand() % 20 + 1;
    //if 1 is rolled and lucky = true then reroll
    if ((rollVal == 1) && (lucky == true))
    {
        rollVal = rand() % 20 + 1;
    }
} */

/* bool entity::isCritF()
{
    if (rollVal == 1)
    {
        return true;
    } else
    {
        return false;
    }
}

bool entity::isCritS()
{
    if (rollVal == 1)
    {
        return true;
    } else
    {
        return false;
    }
}
 */

string entity::printTieMath()
{
    //ex.
    //name: dexScore

    //start with the name
    string output = name;
    output.append(": ");
    output.append(std::to_string(dexScore));
    
    return output;
}