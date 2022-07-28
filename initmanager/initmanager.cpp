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


/*
void initmanager::sortTieOrder()
{
    //merge sort into decending order.
    mergeSort(0, (tieOrder.size() - 1));

}
*/


//merge Sort function
void initmanager::mergeSort(int start, int end)
{
    // IF start < end
    if (start < end)
    {
        //     mid = (start+end)/2
        int mid = (start+end)/2;
        //     Merge-Sort(A,start,mid)
        mergeSort(start,mid);
        //     Merge-Sort(A,mid+1,end)
        mergeSort((mid + 1), end);
        //     Merge(A,start,mid,end)
        merge(start, mid, end);
    }
}

//merge step
void initmanager::merge(int start, int mid, int end)
{
    //make a entity with -infinity dexscore
    entity lowEnt(INT_MIN);
    // sizeR = mid-start+1
    //int sizeR = mid - start + 1;
    // sizeL = end-mid
    //int sizeL = end - mid;
    // Create Array L[1..sizeR+1]
    vector<entity> L;
    // Create Array R[1..sizeL+1]
    vector<entity> R;
    // Copy A[start..mid] to L
    for (int i = start; i <= mid; i++)
    {
        L.push_back(tieOrder.at(i));
    }
    // Copy A[mid+1..end] to R
    for (int i = (mid + 1); i <= end; i++)
    {
        R.push_back(tieOrder.at(i));
    }
    // L[sizeR+1] = R[sizeL+1] = -∞
    //basicly add -infinity to the end of L and R
    L.push_back(lowEnt);
    R.push_back(lowEnt);
    // i = j = 0
    int i = 0;
    int j = 0;
    // FOR k from start to end
    for (int k = start; k <= end; k++)
    {
        // IF L[i] >= R[j]
        if (L.at(i).getdexScore() >= R.at(j).getdexScore())
        {
            // A[k] = L[i]
            tieOrder.at(k) = L.at(i);
            // Increase i
            i++;
        } else
        {
            // ELSE
            // A[k] = R[j]
            tieOrder.at(k) = R.at(j);
            // Increase j
            j++;
        }
    }
}


void initmanager::addEntity(entity newEnt)
{
    creep* creepptr = nullptr;
    creepptr = new creep(newEnt);
    tieOrder.push_back(*creepptr);
}


void initmanager::rollAll()
{
    for (int i = 0; i < tieOrder.size(); i++)
    {
        tieOrder.at(i).roll();
    }
}


void initmanager::startEncounter()
{
    //call shuffle to get order for dexscore ties.
    shuffle();
    //sort tieOrder vector
    sortTieOrder();
}



void initmanager::printTieOrder()
{
    cout << "Size = " << tieOrder.size() << endl;
    cout << "Name: dexscore" << endl;

    for (size_t i = 0; i < tieOrder.size(); i++)
    {
        cout << tieOrder.at(i).getname() << ": " << tieOrder.at(i).getdexScore() << " : "
            << tieOrder.at(i).getactMod() << " : "
            << tieOrder.at(i).getroll() << endl;
    }
}

