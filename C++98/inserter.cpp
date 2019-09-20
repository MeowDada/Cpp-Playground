#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

void print(const int& n)
{
    std::cout << n << " ";
}

void print_foo(std::list<int>& foo)
{
    std::cout << "foo: ";
    std::for_each(foo.begin(), foo.end(), print);
    std::cout << std::endl;
}

int main()
{
    std::list<int> foo, bar;
    for (int i = 0; i < 3; i++) {
        foo.push_back(i);
        bar.push_back(i*10);
    }

    /* foo = { 0, 1, 2 } */
    std::cout << "foo:";
    std::for_each(foo.begin(), foo.end(), print);
    std::cout << std::endl;

    /* bar = { 0, 10, 20 } */
    std::cout << "bar:";
    std::for_each(bar.begin(), bar.end(), print);
    std::cout << std::endl;

    std::list<int>::iterator it = foo.begin();
    advance(it, 1);

    /* foo = { 0, { 0, 10, 20 }, 1, 2 } */
    std::copy(bar.begin(), bar.end(), std::inserter(foo,it));
    print_foo(foo);

    /* foo = { 0, 0, 10, 20, 1, 2, { 0, 10, 20 } } */
    std::copy(bar.begin(), bar.end(), std::back_inserter(foo));
    print_foo(foo);

    /* foo = { { 0 }, 0, 0, 10, 20, 1, 2, 0, 10, 20 } 
       foo = { { 10, 0 }, 0, 0, 10, 20, 1, 2, 0, 10, 20 }
       foo = { { 20, 10, 0 }, 0, 0, 10, 20, 1, 2, 0, 10, 20 } */
    std::copy(bar.begin(), bar.end(), front_inserter(foo));
    print_foo(foo);

    return 0;
}
