#**************************************************************
#                 Makefile oTravis project
#**************************************************************

CC = g++

CXXFLAGS = #-std=c++14

EXEC = oTravis

INCDIR = -I./include

SRCDIR = ./src/Tria.cpp ./src/oTravis.cpp

all: clean release

release: $(EXEC)

clean:
	@rm -f $(EXEC)

test: all
	@./$(EXEC)

$(EXEC) :
	$(CC) $(CXXFLAGS) $(INCDIR) $(SRCDIR) -o $@

