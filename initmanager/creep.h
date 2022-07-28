#ifndef CREEP_H
#define CREEP_H

#include "entity/entity.h"

class creep : public entity
{
    private:
    int actMod;
    int rollval; // 1 - 20

    public:
    //constructor
    creep();
    //setters
    void setactMod(int actMod) { this->actMod = actMod; }
    void setroll(int rollval) { this->rollval = rollval; }
    //getters
    int getactMod() { return actMod; }
    int getroll() { return rollval; }

    void roll();

    void runTurn();
    
    int result() { return (fullMod() + actMod + rollval); }

};


#endif