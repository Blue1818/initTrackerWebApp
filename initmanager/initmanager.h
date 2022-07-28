#ifndef INITMANAGER_H
#define INITMANAGER_H

#include <iostream>
#include <vector>
#include <climits>

#include "creep/creep.h"

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class initmanager
{
    private:
    //vector to hold all entities in tie order.
    vector<entity> tieOrder;


    protected:
    //merge sort functions
    void mergeSort(int start, int end);
    void merge(int start, int mid, int end);

    public:
    //constructor
    initmanager() 
    {
        //tieOrder.resize(0);
        cout << "-initManager created-" << endl;
    }

    initmanager(string message)
    {
        cout << message << endl;
        cout << "-initManager created-" << endl;

    }

    //add entity
    void addEntity(entity newEnt) { tieOrder.push_back(newEnt); }

    //shuffle tieOrder
    void shuffle();

    //sort the entities in tieOrder by dexscore, decending.
    //use merge sort for efficiency and to keep dup dexscores in place.
    //ties have already been resoved in suffle step.
    void sortTieOrder() { mergeSort(0, (tieOrder.size() - 1)); }

    //call roll for each entity
    void rollAll();

    //start encounter
    void startEncounter();

    //run round
    void runRound();

    //player turn
    //void runTurn(entity* character);
    
    //printers
    void printTieOrder();



};


#endif