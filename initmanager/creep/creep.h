#ifndef CREEP_H
#define CREEP_H

#include <iostream>
#include "entity/entity.h"

using std::cout;
using std::cin;
using std::endl;

class creep : public entity
{
    private:
    int actMod;
    int rollval; // 1 - 20
    int hp = 1;

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
    creep(entity newEnt, int hp) : entity(newEnt.getname(), newEnt.getinitMod(), newEnt.getdexScore(), newEnt.getlucky())
    {
        actMod = 0;
        rollval = 1;
        this->hp = hp;
    }


    //setters
    void setactMod(int actMod) { this->actMod = actMod; }
    void setroll(int rollval) { this->rollval = rollval; }
    void setHp(int hp) { this->hp = hp; }
    //getters
    int getactMod() { return actMod; }
    int getroll() { return rollval; }
    int gethp() { return hp; }
    bool isDead();

    void roll();

    // void runTurn();
    void userAction();
    void doDamage(int val) { hp -= val; }
    void killIt() { hp = 0; }
    
    int result() { return (fullMod() + actMod + rollval); }

    //crit checks
    bool isCritF();
    bool isCritS();
    


};


#endif