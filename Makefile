/****************************************
File: Makefile
Authors: Ashutosh Rai and Niraj Parajuli

Description: Makefile for sorting-program
****************************************/

EXPENDABLES = algorithms.o main-program.o
EXECUTABLES = main-program
CFLAGS = -Wall -ggdb
CPPFLAGS = $(CFLAGS)

main-program: main-program.o algorithms.o
	g++ $(CPPFLAGS) algorithms.o main-program.o -o main-program

algorithms.o:algorithms.h algorithms.cpp
	g++ $(CPPFLAGS) -c algorithms.cpp

main-program.o: algorithms.h main-program.cpp
	g++ $(CPPFLAGS) -c main-program.cpp

clean:
	rm -f $(EXPENDABLES)

distclean:
	rm -f $(EXPENDABLES) $(EXECUTABLES)

all:
	rm -f $(EXPENDABLES) $(EXECUTABLES)
	@make $(EXECUTABLES)
