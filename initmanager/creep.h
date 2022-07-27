#ifndef CREEP_H
#define CREEP_H

#include "entity/entity.h"

class creep : public entity
{
    private:
    int actMod;
    int roll; // 1 - 20

    public:
    //setters

    //getters

    
    int result() { return (fullMod() + actMod + roll); }

};


#endif