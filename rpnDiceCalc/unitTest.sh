#!/bin/bash
# make script for unit tests


#g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o reduce.o reduce.cpp
g++ -g -ansi -pedantic -Wall -Werror -std=c++14 reduce.cpp -pthread -o reduce

# remove o files
#rm -f *.o reduce.o