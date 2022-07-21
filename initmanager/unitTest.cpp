// Made by Dale (Bleu) Westberg


#include "initmanager.h"







int main()
{
    initmanager manager("this is a test message");
    entity* entptr = nullptr;
    int numE = 0;
    char val = 'A';

    //initalize random seed
    srand (time(NULL)); //set seed

    cout << "How many?" << endl;
    cin >> numE;
    cout << endl;


    for(int i = 0; i < numE; i++)
    {
        val++;
        entptr = new entity((val + i));
        manager.addEntity(*entptr);
    }

    manager.




    return 0;
}