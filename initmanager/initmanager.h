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
    private:
    //vector to hold all entities in tie order.
    vector<entity> tieOrder;



    public:
    //constructor
    initmanager() { cout << "-initManager created-" << endl; }

    //add entity
    void addEntity(entity newEnt) { tieOrder.push_back(newEnt); }

    //shuffle tieOrder
    void shuffle();

    //sort the entities in tieOrder by dexscore.
    //use merge sort for efficiency and to keep dup dexscores in place.
    //ties have already been resoved in suffle step.
    void sortTieOrder() { mergeSort(0, (tieOrder.size() - 1)); }

    //merge sort functions
    void mergeSort(int start, int end);
    void merge(int start, int mid, int end);

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