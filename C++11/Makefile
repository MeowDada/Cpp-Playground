.PHONY: all clean

CC                 := g++
CPPFLAGS           := -Wall -g -std=c++11

COPY_RANGE_PROG    := copy_range
COPY_RANGE_SRCS    := copy_range.cpp

all: build_copy_range

build_copy_range:
	$(CC) $(CPPFLAGS) -o $(COPY_RANGE_PROG) $(COPY_RANGE_SRCS)

clean:
	rm -rf *.o
	rm -rf $(COPY_RANGE_PROG)