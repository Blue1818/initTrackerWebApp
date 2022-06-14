#ifndef ENTITY_H
#define ENTITY_H

#include <string>

using std::string;


class entity
{
    private:
    // vars:
    // name -> string
    string name;
    // rollVal -> int from 1 - 20 representing the die value
    int rollVal;
    // initMod -> signed moddifier to init excluding dex
    int initMod;
    // dexScore -> unsigned int (used to determin dexmod)
    int dexScore;
    // lucky -> binary val for rerolling 1's
    bool lucky;


    public:
    // methods:
    // default constructor() -> set everything to 0
    entity();
    // constructor(name, rollVal, initMod, dexScore, lucky)
    entity(string name, int rollVal, int initMod, int dexScore, bool lucky);
    // getters
    string getname() { return name; }
    int getrollVal() { return rollVal; }
    int getinitMod() { return initMod; }
    int getdexScore() { return dexScore; }
    bool getlucky() { return lucky; }
    //setters

    // signed int dexmod -> ((dexScore / 2) - 5)
    int dexmod();
    // signed int fullMod -> (dexmod + initMod) 
    int fullMod();
    // roll -> get random int 1 to 20, assign to rollVal. (reroll on 1 if lucky = true)
    // signed int getInit -> (rollVal + fullMod())
    


};


#endif