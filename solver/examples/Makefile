#####################################################################
# File   : Makefile
# Purpose: Framework for Exercise 5 of Formal Verification course 06/07
# Author : Georg Weissenbacher, georg.weissenbacher@inf.ethz.ch
#####################################################################

CPP	= g++

INCLUDE = -I ../lib
LIBS    = ../lib/DP.lib

PROGRAMS = bool2cnf brute_force_sat

CFLAGS  =
LDFLAGS =

DEBUG   = -g

.SUFFIXES: .cpp .o

all: $(PROGRAMS)

bool2cnf: bool2cnf.o
	$(CPP) bool2cnf.o $(LIBS) -o $@

brute_force_sat: brute_force_sat.o
	$(CPP) brute_force_sat.o $(LIBS) -o $@

.cpp.o:
	$(CPP) $(DEBUG) -Wall -c $(INCLUDE) $< -o $@

clean:
	rm -f *.o *~ $(PROGRAMS)
	rm -f *.hh semantic.cache

