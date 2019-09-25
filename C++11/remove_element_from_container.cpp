#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 2, 5, 2, 6 };

    auto print_int = [](const int& v) { std::cout << v << " "; };

    std::cout << "vector<int> v = { 1, 2, 3, 4, 2 ,5, 2, 6 }\n";
    
    std::cout << "v.erase(std::remove(std::begin(v), std::end(v), 2), std::end(v))\n";
    v.erase(std::remove(std::begin(v), std::end(v), 2), std::end(v));
    std::for_each(std::begin(v), std::end(v), print_int);
    std::cout << "\n";

    std::cout << "v.erase(std::remove_if(std::begin(v), std::end(v), [](int i){ return i % 2 == 0; }), std::end(v))\n";
    v.erase(std::remove_if(std::begin(v), std::end(v),
        [](int i) { return i % 2 == 0; }), std::end(v));
    std::for_each(std::begin(v), std::end(v), print_int);
    std::cout << "\n";


    return 0;
}
