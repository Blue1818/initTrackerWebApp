#!/bin/bash
# make script for unit tests


g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o entity.o entity/entity.cpp
g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o initmanager.o initmanager.cpp
g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -c -o unitTest.o unitTest.cpp

g++ -g -ansi -pedantic -Wall -Werror -std=c++14 -o unitTest unitTest.o initmanager.o entity.o

#  remove o file
rm -f *.o entity.o
rm -f *.o initmanager.o
rm -f *.o unitTest.o