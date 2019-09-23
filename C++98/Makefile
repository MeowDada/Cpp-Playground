.PHONY: all clean

CC               := g++
CPPFLAGS         := -Wall -g -std=c++98

INSERTER_PROG    := inserter
INSERTER_SRCS    := inserter.cpp

SWAP_VALUE_PROG  := swap_value
SWAP_VALUE_SRCS  := swap_value.cpp

SWAP_CONTAINER_PROG := swap_container
SWAP_CONTAINER_SRCS := swap_container.cpp

all: build_inserter build_swap_value build_swap_container

build_inserter:
	$(CC) $(CPPFLAGS) -o $(INSERTER_PROG) $(INSERTER_SRCS)

build_swap_value:
	$(CC) $(CPPFLAGS) -o $(SWAP_VALUE_PROG) $(SWAP_VALUE_SRCS)

build_swap_container:
	$(CC) $(CPPFLAGS) -o $(SWAP_CONTAINER_PROG) $(SWAP_CONTAINER_SRCS)

clean:
	rm -rf *.o
	rm -rf $(INSERTER_PROG) $(SWAP_VALUE_PROG) $(SWAP_CONTAINER_PROG)