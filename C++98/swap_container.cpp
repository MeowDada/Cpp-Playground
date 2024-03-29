#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

void print_int(const int &v)
{
    std::cout << v << " ";
}

int main()
{
    /* C++98 vector must initialize by constructor
    std::vector<int> v1 = { 1, 3, 5, 7 };
    std::vector<int> v2 = { 2, 4, 6, 8 };
    */

   int tmp_v1[] = { 1, 3, 5, 7 };
   int tmp_v2[] = { 2, 4, 6, 8 };
   std::vector<int> v1(tmp_v1, tmp_v1+4);
   std::vector<int> v2(tmp_v2, tmp_v2+4);

    std::cout << "v1: ";
    std::for_each(v1.begin(), v1.end(), print_int);
    std::cout << std::endl;

    std::cout << "v2: ";
    std::for_each(v2.begin(), v2.end(), print_int);
    std::cout << std::endl;

    std::cout << "std::swap_range(v1.begin(), v1.end(), v2.begin())\n";
    std::swap_ranges(v1.begin(), v1.end(), v2.begin());
    std::cout << "v1: ";
    std::for_each(v1.begin(), v1.end(), print_int);
    std::cout << std::endl;

    std::cout << "v1.swap(v2)\n";
    v1.swap(v2);
    std::cout << "v1: ";
    std::for_each(v1.begin(), v1.end(), print_int);
    std::cout << std::endl;

    std::cout << "std::swap(v1, v2)\n";
    std::swap(v1, v2);
    std::cout << "v1: ";
    std::for_each(v1.begin(), v1.end(), print_int);
    std::cout << std::endl;

    return 0;
}