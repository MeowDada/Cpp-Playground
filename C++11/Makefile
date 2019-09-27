.PHONY: all clean

CC                 := g++
CPPFLAGS           := -Wall -g -std=c++11

COPY_RANGE_PROG    := copy_range
COPY_RANGE_SRCS    := copy_range.cpp

SORT_PROG          := sort
SORT_SRCS          := sort.cpp

CHECK_KEY_EXIST_PROG := check_key_exist
CHECK_KEY_EXIST_SRCS := check_key_exist.cpp

REMOVE_ELEMENT_FROM_CONTAINER_PROG := remove_element_from_container
REMOVE_ELEMENT_FROM_CONTAINER_SRCS := remove_element_from_container.cpp

SHARED_OWNERSHIP_PROG := shared_ownership
SHARED_OWNERSHIP_SRCS := shared_ownership.cpp

all: build_copy_range build_sort build_check_key_exist build_remove_element_from_container build_shared_ownership

build_copy_range:
	$(CC) $(CPPFLAGS) -o $(COPY_RANGE_PROG) $(COPY_RANGE_SRCS)

build_sort:
	$(CC) $(CPPFLAGS) -o $(SORT_PROG) $(SORT_SRCS)

build_check_key_exist:
	$(CC) $(CPPFLAGS) -o $(CHECK_KEY_EXIST_PROG) $(CHECK_KEY_EXIST_SRCS)

build_remove_element_from_container:
	$(CC) $(CPPFLAGS) -o $(REMOVE_ELEMENT_FROM_CONTAINER_PROG) $(REMOVE_ELEMENT_FROM_CONTAINER_SRCS)

build_shared_ownership:
	$(CC) $(CPPFLAGS) -o $(SHARED_OWNERSHIP_PROG) $(SHARED_OWNERSHIP_SRCS)

clean:
	rm -rf *.o
	rm -rf $(COPY_RANGE_PROG) $(SORT_PROG) $(CHECK_KEY_EXIST_PROG) $(REMOVE_ELEMENT_FROM_CONTAINER_PROG) $(SHARED_OWNERSHIP_PROG)