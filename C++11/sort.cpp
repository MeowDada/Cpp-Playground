#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#include <functional>

int main()
{
    auto print_int = [](const int &v) { std::cout << v << " "; };

    std::array<int, 5> arr = { 3, 4, 5, 1, 2 };
    std::cout << "arr = { ";
    std::for_each(std::begin(arr), std::end(arr), print_int);
    std::cout << "}\n";

    std::cout << "std::sort(std::begin(arr), std::end(arr))\n";
    std::sort(std::begin(arr), std::end(arr));
    std::cout << "arr = { ";
    std::for_each(std::begin(arr), std::end(arr), print_int);
    std::cout << "}\n";

    std::cout << "std::sort(std::begin(arr), std::end(arr), std::greater<int>{});\n";
    std::sort(std::begin(arr), std::end(arr),
              std::greater<int>{});
    std::cout << "arr = { ";
    std::for_each(std::begin(arr), std::end(arr), print_int);
    std::cout << "}\n";

    return 0;
}