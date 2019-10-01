.PHONY: all clean

CC                    := g++
CPPFLAGS              := -Wall -g -std=c++14

UNIQUE_OWNERSHIP_PROG := unique_ownership
UNIQUE_OWNERSHIP_SRCS := unique_ownership.cpp

all: build_unique_ownership

build_unique_ownership:
	$(CC) $(CPPFLAGS) -o $(UNIQUE_OWNERSHIP_PROG) $(UNIQUE_OWNERSHIP_SRCS)

clean:
	rm -rf *.o
	rm -rf $(UNIQUE_OWNERSHIP_PROG)