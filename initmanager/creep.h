#ifndef CREEP_H
#define CREEP_H

#include "entity/entity.h"

class creep : public entity
{
    private:
    int actMod;
    int roll; // 1 - 20

    public:
    //constructor
    creep();
    //setters
    void setactMod(int actMod) { this->actMod = actMod; }
    void setroll(int roll) { this->roll = roll; }
    //getters
    int getactMod() { return actMod; }
    int getroll() { return roll; }

    void roll();

    void runTurn();
    
    int result() { return (fullMod() + actMod + roll); }

};


#endif