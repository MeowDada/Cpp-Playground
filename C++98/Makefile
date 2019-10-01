.PHONY: all clean

CC               := g++
CPPFLAGS         := -Wall -g -std=c++98

INSERTER_PROG    := inserter
INSERTER_SRCS    := inserter.cpp

COUNT_PROG       := count
COUNT_SRCS       := count.cpp

SWAP_VALUE_PROG  := swap_value
SWAP_VALUE_SRCS  := swap_value.cpp

SWAP_CONTAINER_PROG := swap_container
SWAP_CONTAINER_SRCS := swap_container.cpp

OVERLOAD_OPERATOR_OSTREAM_PROG := overload_operator_ostream
OVERLOAD_OPERATOR_OSTREAM_SRCS := overload_operator_ostream.cpp

all: build_inserter build_count build_swap_value build_swap_container \
     build_overload_operator_ostream

build_inserter:
	$(CC) $(CPPFLAGS) -o $(INSERTER_PROG) $(INSERTER_SRCS)

build_count:
	$(CC) $(CPPFLAGS) -o $(COUNT_PROG) $(COUNT_SRCS)

build_swap_value:
	$(CC) $(CPPFLAGS) -o $(SWAP_VALUE_PROG) $(SWAP_VALUE_SRCS)

build_swap_container:
	$(CC) $(CPPFLAGS) -o $(SWAP_CONTAINER_PROG) $(SWAP_CONTAINER_SRCS)

build_overload_operator_ostream:
	$(CC) $(CPPFLAGS) -o $(OVERLOAD_OPERATOR_OSTREAM_PROG) $(OVERLOAD_OPERATOR_OSTREAM_SRCS)

clean:
	rm -rf *.o
	rm -rf $(INSERTER_PROG) $(COUNT_PROG) $(SWAP_VALUE_PROG) $(SWAP_CONTAINER_PROG) $(OVERLOAD_OPERATOR_OSTREAM_PROG)