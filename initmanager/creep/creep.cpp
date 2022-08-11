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


bool creep::isDead()
{
    if (hp > 0)
    {
        return false;
    }
    return true;
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
    cout << "what is " << getname() <<  " going to do?" << endl;
    cout << "1. Cast a Spell" << endl
         << "2. Melee, Heavy Weapon" << endl
         << "3. Melee, light or finesse weapon" << endl
         << "4. Melee, two-handed weapon" << endl
         << "5. Ranged, loading weapon" << endl;

    //modify actMod accordingly
    // - spell level
    // -2
    // +2
    // -2
    // -5
    
}