.PHONY: all clean

CC                   := g++
CPPFLAGS             := -Wall -g -std=c++11

FREE_AND_DELETE_PROG := free_and_delete
FREE_AND_DELETE_SRCS := free_and_delete.cpp

RAII_TEST_PROG       := RAII_test
RAII_TEST_SRCS       := RAII_test.cpp

all: build_free_and_delete build_raii_test

build_free_and_delete:
	$(CC) $(CPPFLAGS) -o $(FREE_AND_DELETE_PROG) $(FREE_AND_DELETE_SRCS)

build_raii_test:
	$(CC) $(CPPFLAGS) -O0 -o $(RAII_TEST_PROG) $(RAII_TEST_SRCS)

clean:
	rm -rf *.o
	rm -rf $(FREE_AND_DELETE_PROG) $(RAII_TEST_PROG)