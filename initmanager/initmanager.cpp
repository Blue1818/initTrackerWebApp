#include "initmanager.h"

//use to shuffle tieOrder before sorted.
//this order will be used to brake ties
void initmanager::shuffle()
{
    int numS = tieOrder.size();
    int randNum = 0;
    entity temp;

    //for each element in tie order
    for (int i = 0; i < numS; i++)
    {
        //get a random possition between i and (numS - 1)
        randNum = (rand() % (numS - i)) + i;
        //swap it with i
        temp = tieOrder.at(i);
        tieOrder.at(i) = tieOrder.at(randNum);
        tieOrder.at(randNum) = temp;
    }
}