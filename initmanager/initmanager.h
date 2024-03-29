#ifndef INITMANAGER_H
#define INITMANAGER_H

#include <iostream>
#include <vector>
#include <climits>

#include "creep/creep.h"

using std::vector;

class initmanager
{
    private:
    //vector to hold all entities in tie order.
    vector<creep> tieOrder;


    protected:
    //merge sort functions
    void mergeSort(int start, int end);
    vector<creep*> mergeSortptr(vector<creep*> vect, int start, int end);
    void merge(int start, int mid, int end);
    vector<creep*> mergeptr(vector<creep*> vect, int start, int mid, int end);

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

    
    int getSize();

    //add entity
    void addEntity(entity newEnt);
    void addEntity(entity newEnt, int hp);

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

    //main process for running encounter
    void runEncounter() { runEncounter(1); }    //default case
    void runEncounter(int numR);

    //run round
    void runRound();
    //roll and returns roundOrder in ptrs
    vector<creep*> getroundOrder();
    //player turn
    void runTurn(creep* character);
    
    //printers
    void printTieOrder();
    void printroundOrder(vector<creep*> vect);


};


#endif