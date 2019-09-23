.PHONY: all clean

CC                 := g++
CPPFLAGS           := -Wall -g -std=c++11

COPY_RANGE_PROG    := copy_range
COPY_RANGE_SRCS    := copy_range.cpp

SORT_PROG          := sort
SORT_SRCS          := sort.cpp

all: build_copy_range build_sort

build_copy_range:
	$(CC) $(CPPFLAGS) -o $(COPY_RANGE_PROG) $(COPY_RANGE_SRCS)

build_sort:
	$(CC) $(CPPFLAGS) -o $(SORT_PROG) $(SORT_SRCS)

clean:
	rm -rf *.o
	rm -rf $(COPY_RANGE_PROG) $(SORT_PROG)