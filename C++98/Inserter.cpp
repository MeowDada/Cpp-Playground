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

    /* foo = { 0, 1, 2, 3 ,4 } */
    std::cout << "foo:";
    std::for_each(foo.begin(), foo.end(), print);
    std::cout << std::endl;

    /* bar = { 0, 10, 20, 30, 40 } */
    std::cout << "bar:";
    std::for_each(bar.begin(), bar.end(), print);
    std::cout << std::endl;

    /* move iterator to the position 3 */
    std::list<int>::iterator it = foo.begin();
    advance(it, 3);

    /* insert the bar to foo */
    /* foo = { 0, 1, 2, { 0, 10, 20, 30, 40 }, 3, 4 } */
    std::copy(bar.begin(), bar.end(), std::inserter(foo,it));
    print_foo(foo);

    /* insert the bar to the back of the foo */
    /* foo = { 0, 1, 2, 0, 10, 20, 30, 40, 3, 4, { 0, 10, 20, 30 ,40 } } */
    std::copy(bar.begin(), bar.end(), std::back_inserter(foo));
    print_foo(foo);

    /* keep inserting the bar to the front of the foo */
    /* Note : insert element by element */ 
    /* foo = { 0 }, 0, 1, 2, ... } */
    /* foo = { 10, 0 }, 0, 1, 2, ...} */
    /* foo = { 20, 10, 0 }, 0, 1, 2, ...} */
    /* foo = { 30, 20, 10, 0 }, 0, 1, 2, ...} */
    /* foo = { 40, 30, 20, 10, 0 }, 0, 1, 2, ... } */
    std::copy(bar.begin(), bar.end(), std::front_inserter(foo));
    print_foo(foo);

    return 0;
}
