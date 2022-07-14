#ifndef INITMANAGER_H
#define INITMANAGER_H

#include <iostream>
#include <vector>

#include "entity/entity.h"

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class initmanager
{
    public:
    //vector to hold all entities in tie order.
    vector<entity> tieOrder;



    private:
    //constructor
    initmanager() { cout << "-initManager created-" << endl;}

    //add entity
    void addEntity(entity newEnt) { tieOrder.push_back(newEnt); }

    //shuffle tieOrder
    void shuffle();

    //sort tieOrder
    void sortTieOrder();

    //call roll for each entity
    void rollAll();

    //start encounter
    void startEncounter();

    //run round
    void runRound();

    //player turn
    void runTurn(entity* character);
    




};


#endif