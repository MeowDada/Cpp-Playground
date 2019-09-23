#include <iostream>
#include <utility>
#include <string>

int main()
{
    std::string s1 = "Hello";
    std::string s2 = "World";
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    std::cout << "std::swap(s1, s2)\n";
    std::swap(s1 ,s2);
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    return 0;
}