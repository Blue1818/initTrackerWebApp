#ifndef RPNDICE_H
#define RPNDICE_H

#include <string>
#include <stack>
#include <cstdint>
#include <sstream>      // std::stringstream


class rpnDice
{
    private:
    std::stack<int8_t>  work;
    std::stringstream expression;  //input from user




    public:
    rpnDice()
    {
        this->expression = "X"
    }
    rpnDice()
    {
        
    }





};

#endif