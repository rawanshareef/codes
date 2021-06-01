# A generic makefile for running single-file C++ projects.
#
# AUTHOR: Erel Segal-Halevi

CXX=clang++-9
CXXFLAGS=-std=c++2a -Werror -Wsign-conversion

RM=rm -f

ifndef MAIN
  MAIN=./FractionMain.cpp
endif

MAINEXECUTABLE=$(subst .cpp,,$(MAIN)).exe

SOURCES=$(MAIN) Fraction.cpp

HEADERS=Fraction.hpp

all: $(MAINEXECUTABLE)
	$(MAINEXECUTABLE)

$(MAINEXECUTABLE): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(MAINEXECUTABLE)

valgrind:
	valgrind --leak-check=full -v ./$(MAINEXECUTABLE)

clean:
	$(RM) *.exe a.out *.class