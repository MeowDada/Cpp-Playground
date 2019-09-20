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
    std::cout << "foo:";
    std::for_each(foo.begin(), foo.end(), print);
    std::cout << std::endl;
}

int main()
{
    std::list<int> foo, bar;
    for (int i = 0; i < 5; i++) {
        foo.push_back(i);
        bar.push_back(i*10);
    }

    std::cout << "foo:";
    std::for_each(foo.begin(), foo.end(), print);
    std::cout << std::endl;

    std::cout << "bar:";
    std::for_each(bar.begin(), bar.end(), print);
    std::cout << std::endl;

    std::list<int>::iterator it = foo.begin();
    advance(it, 3);

    std::copy(bar.begin(), bar.end(), std::inserter(foo,it));
    print_foo(foo);

    std::copy(bar.begin(), bar.end(), std::back_inserter(foo));
    print_foo(foo);

    std::copy(bar.begin(), bar.end(), front_inserter(foo));
    print_foo(foo);

    return 0;
}
