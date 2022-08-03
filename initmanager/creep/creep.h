#ifndef CREEP_H
#define CREEP_H

#include "entity/entity.h"

class creep : public entity
{
    private:
    int actMod;
    int rollval; // 1 - 20

    public:
    //constructors
    creep();
    creep(int rollval);
    creep(bool val) : entity(3)
    {
        actMod = 0;
        this->rollval = 1;
        setinitMod(-100);
    }
    creep(entity newEnt) : entity(newEnt.getname(), newEnt.getinitMod(), newEnt.getdexScore(), newEnt.getlucky())
    {
        actMod = 0;
        rollval = 1;
    }

    //setters
    void setactMod(int actMod) { this->actMod = actMod; }
    void setroll(int rollval) { this->rollval = rollval; }
    //getters
    int getactMod() { return actMod; }
    int getroll() { return rollval; }

    void roll();

    // void runTurn();
    void userAction();
    
    int result() { return (fullMod() + actMod + rollval); }

    //crit checks
    bool isCritF();
    bool isCritS();
    


};


#endif