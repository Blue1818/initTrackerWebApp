#include <iostream>
#include "entity.h"

using std::cout;
using std::endl;

int main()
{
    entity tester("test", 0, 13, false);

    srand (time(NULL)); //set seed

    tester.roll();
    cout << "Roll: " << tester.getrollVal() << endl;
    tester.roll();
    cout << "Roll: " << tester.getrollVal() << endl;
    tester.roll();
    cout << "Roll: " << tester.getrollVal() << endl;


}