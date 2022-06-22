// swapping ostringstream objects
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
using namespace std;


int main()
{
    std::stringstream ss;
    std::stringstream ssi;  //input from user
    string input = "";
    string output = "";
    int val = 0;

    ss << 100 << ' ' << 200;

    int foo,bar;
    ss >> foo >> bar;

    std::cout << "foo: " << foo << '\n';
    std::cout << "bar: " << bar << '\n';

    cout << "User input: ";

    cin >> input;
    output = input;
    val = 1;
    while(input.compare("X") != 0)
    {
        output.append(" ");
        cin >> input;
        output.append(input);
        val++;
    } 


    cout << "Output arguments = " << val << endl;
    cout << output << endl;

    ssi << output;

    ssi >> foo >> bar;

    std::cout << "foo: " << foo << '\n';
    std::cout << "bar: " << bar << '\n';



    return 0;
}