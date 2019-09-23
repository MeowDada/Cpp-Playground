#include <iostream>
#include <algorithm>
#include <vector>

void print_int(const int &v)
{
    std::cout << v << " ";
}

int main()
{
    int tmp[] = { 1, 3, 5, 4, 3, 1, 1, 2, 1, 1 };
    std::vector<int> vec(tmp, tmp+10);

    std::cout << "vec: ";
    std::for_each(vec.begin(), vec.end(), print_int);
    std::cout << std::endl;

    std::cout << "std::count(vec.begin(), vec.end(), 1)\n";
    int count = std::count(vec.begin(), vec.end(), 1);
    std::cout << "count = " << count << std::endl;


    return 0;
}