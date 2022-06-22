#!/bin/bash
# make script for unit tests


#g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o rpnDiceUT.o entity.cpp
g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o rpnDiceUT.o rpnDiceUT.cpp

g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -o unitTest rpnDiceUT.o

#  remove o file
rm -f *.o rpnDiceUT.o
#rm -f *.o entTest.o