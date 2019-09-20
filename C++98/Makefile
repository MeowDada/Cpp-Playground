.PHONY: all clean

CC               := g++
CPPFLAGS         := -Wall -g -std=c++98

INSERTER_PROG    := inserter
INSERTER_SRCS    := inserter.cpp

all: build_inserter

build_inserter:
	$(CC) $(CPPFLAGS) -o $(INSERTER_PROG) $(INSERTER_SRCS)

clean:
	rm -rf *.o
	rm -rf $(INSERTER_PROG)