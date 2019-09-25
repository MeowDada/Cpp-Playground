#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

std::vector<int> vec_0(5);
std::vector<int> vec_1;

template<typename T>
void foo(T source)
{
    /* copy source element by initilization */
    std::vector<int> vec_2{std::begin(source), std::end(source)};

    /* copy source element by std::copy */
    std::copy(std::begin(source), std::end(source), std::begin(vec_0));

    /* copy source element by std::copy */
    /* back_inserter will return the position of the last iterator of the vec_1 */
    std::copy(std::begin(source), std::end(source), std::back_inserter(vec_1));

    auto print = [](const int& n) { std::cout << " " << n; };

    std::for_each(source.begin(), source.end(), print);
    std::cout << std::endl;
}

int main()
{
    std::vector<int> src{5,3,1,7,6};
    foo(src);

    auto print = [](const int& n) { std::cout << " " << n; };

    std::for_each(vec_0.begin(), vec_0.end(), print);
    std::cout << std::endl;
    std::for_each(vec_1.begin(), vec_1.end(), print);
    std::cout << std::endl;

    int arr[5] = {1, 5, 7, 2, 3};
    std::cout << (&arr[2] - &arr[0]) << std::endl;

    return 0;    
}