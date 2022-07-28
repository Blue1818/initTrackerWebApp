// Made by Dale (Bleu) Westberg


#include "initmanager.h"







int main()
{
    initmanager manager("this is a test message");
    entity* entptr = nullptr;
    int numE = 0;
    //char val = 'A';

    //initalize random seed
    srand (time(NULL)); //set seed

    cout << "How many?" << endl;
    cin >> numE;
    cout << endl;


    for(int i = 0; i < numE; i++)
    {
        string name = "Test #";
        name.append(std::to_string(i + 1));
        entptr = new entity((name));
        manager.addEntity(*entptr);
    }

    //print inital order
    manager.printTieOrder();

    //add roll to creep
    manager.rollAll();
    manager.printTieOrder();

    //order after shuffle
    manager.shuffle();
    manager.printTieOrder();

    //after sorting
    manager.sortTieOrder();
    manager.printTieOrder();

    //add roll to creep
    manager.rollAll();
    manager.printTieOrder();

    //run round
    cout << "now lets run the round" << endl;
    manager.runRound();

    return 0;
}