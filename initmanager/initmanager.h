#ifndef INITMANAGER_H
#define INITMANAGER_H

#include <vector>

#include "entity/entity.h"

using std::vector;

class initmanager
{
    public:
    //vector to hold all entities in tie order.
    vector<entity> tieOrder;



    private:
    //constructor
    initmanager();

    //shuffle tieOrder
    void shuffle();

    //sort tieOrder
    void sorttieOrder();

    //start encounter
    void startEncounter();

    //run round
    void runRound();

    //player turn
    void runTurn(entity* character);
    




};


#endif