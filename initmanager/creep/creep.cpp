#include "creep.h"



creep::creep()
{
    actMod = 0;
    rollval = 0;
}

creep::creep(int rollval) : entity()
{
    actMod = 0;
    this->rollval = rollval;
}

void creep::roll()
{
    rollval = rand() % 20 + 1;
    //if 1 is rolled and lucky = true then reroll
    if ((rollval == 1) && (getlucky() == true))
    {
        rollval = rand() % 20 + 1;
    }
}

bool creep::isCritF()
{
    if (rollval == 1)
    {
        return true;
    } else
    {
        return false;
    }
}

bool creep::isCritS()
{
    if (rollval == 20)
    {
        return true;
    } else
    {
        return false;
    }
}

void creep::userAction()
{
    //print menu for actions

    //modify actMod accordingly
    
}