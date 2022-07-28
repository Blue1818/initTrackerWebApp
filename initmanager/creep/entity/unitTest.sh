#!/bin/bash
# make script for unit tests


g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o entity.o entity/entity.cpp
g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o entTest.o entTest.cpp

g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -o entUnitTest entTest.o entity.o

#  remove o file
rm -f *.o entity.o
rm -f *.o entTest.o