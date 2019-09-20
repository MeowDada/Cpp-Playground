#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> vec_0(5);
std::vector<int> vec_1;

template<typename T>
void foo(T source)
{
    std::vector<int> vec_2{std::begin(source), std::end(source)};
    std::copy(std::begin(source), std::end(source), std::begin(vec_0));
    std::copy(std::begin(source), std::end(source), std::back_inserter(vec_1));

    auto print = [](const int& n) { std::cout << " " << n; };

    std::for_each(source.begin(), source.end(), print);
}

void main()
{
    std::vector<int> src{5,3,1,7,6};
    foo(src);

    auto print = [](const int& n) { std::cout << " " << n; };

    std::for_each(vec_0.begin(), vec_0.end(), print);
    std::for_each(vec_1.begin(), vec_1.end(), print);    
}