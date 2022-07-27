#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::string;

//set srand in main before calling roll

class entity
{
    private:
    // vars:
    // name -> string
    string name;
    // rollVal -> int from 1 - 20 representing the die value
    //int rollVal;
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
    // constructor for sorting
    entity(int dexScore);

    // constructor for random dexScore (3 to 20) and initMod (0 - 4). lucky = false
    entity(string name);

    // constructor(name, rollVal, initMod, dexScore, lucky)
    entity(string name, int initMod, int dexScore, bool lucky);

    
    // getters
    string getname() { return name; }
    //int getrollVal() { return rollVal; }
    int getinitMod() { return initMod; }
    int getdexScore() { return dexScore; }
    bool getlucky() { return lucky; }
    //setters
    void setname(string name) { this->name = name; }
    //void setrollVal(int rollVal) { this->rollVal = rollVal; }
    void setinitMod(int initMod) { this->initMod = initMod; }
    void setdexScore(int dexScore) { this->dexScore = dexScore; }
    void setlucky(bool lucky) { this->lucky = lucky; }
    // signed int dexmod -> ((dexScore / 2) - 5)
    int dexmod();
    // signed int fullMod -> (dexmod + initMod) 
    int fullMod() { return (dexmod() + initMod); }
    // roll -> get random int 1 to 20, assign to rollVal. (reroll on 1 if lucky = true)
    //void roll();
    // signed int getInit -> (rollVal + fullMod())
    //int getInit() { return (rollVal + fullMod()); }
    // is crit bool fuctions
    bool isCritF(); //returns true if rollVal = 1
    bool isCritS(); //returns true if rollVal = 20

    //print images:
    string printTieMath();

};


#endif