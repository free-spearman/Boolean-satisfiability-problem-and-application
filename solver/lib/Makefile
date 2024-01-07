#####################################################################
# File   : Makefile
# Purpose: Framework for Exercise 5 of Formal Verification course 06/07
# Author : Georg Weissenbacher, georg.weissenbacher@inf.ethz.ch
#####################################################################

CPP	= g++

#tested with version 2.5.31
FLEX    = flex

# make sure bison is version 2.1
BISON   = bison

CFLAGS  =
LDFLAGS =
OBJS    = graph/graph.o \
          parsing/string_container.o parsing/dstring.o \
          parsing/scanner.o parsing/parser.o parsing/ast.o \
          parsing/parsing_context.o \
          sat/cnf.o sat/dimacs_cnf.o \
          sat/prop.o sat/cnf_clause_list.o sat/threeval.o \
          sat/skeleton.o \

DEBUG   = -g

.SUFFIXES: .cpp .o

all: DP.lib

DP.lib: $(OBJS)
	$(LD) $(OBJS) $(LIBS) -r -o $@

parsing/ast.o: parsing/ast.cpp parsing/ast.h parsing/parser.hpp

parsing/parser.o: parsing/parser.cpp parsing/parser.hpp parsing/ast.h

parsing/scanner.o: parsing/scanner.cpp parsing/parser.hpp parsing/ast.h 

parsing/scanner.cpp: parsing/scanner.l
	$(FLEX) -o$@ $<

parsing/parser.hpp: parsing/parser.cpp

parsing/parsing_context.h: parsing/ast.h

parsing/ast.h: parsing/parser.hpp

parsing/parser.cpp: parsing/parser.y
	$(BISON) -v -d $< --output-file=$@

.cpp.o:
	$(CPP) $(DEBUG) -Wall -H -Wcpp -c $(INCLUDE) $< -o $@

clean:
	rm -f $(OBJS) *~ DP.lib
	rm -f parsing/parser.cpp parsing/parser.hpp
	rm -f parsing/scanner.cpp
	rm -f *.hh semantic.cache
