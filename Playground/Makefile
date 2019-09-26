.PHONY: all clean

CC                   := g++
CPPFLAGS             := -Wall -g -std=c++11

FREE_AND_DELETE_PROG := free_and_delete
FREE_AND_DELETE_SRCS := free_and_delete.cpp

all: build_free_and_delete

build_free_and_delete:
	$(CC) $(CPPFLAGS) -o $(FREE_AND_DELETE_PROG) $(FREE_AND_DELETE_SRCS)

clean:
	rm -rf *.o
	rm -rf $(FREE_AND_DELETE_PROG)