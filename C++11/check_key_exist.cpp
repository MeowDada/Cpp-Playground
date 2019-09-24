#include <iostream>
#include <map>
#include <string>

int main()
{
    std::cout << "std::map<std::string, int> m = {{\"a\" 1}, {\"b\", 2}, {\"c\", 3}};\n";
    std::map<std::string, int> m = {{"a", 1}, {"b", 2}, {"c", 3}};

    std::cout << "if (m.count(\"b\"))\n";
    if (m.count("b")) {
        std::cout << "map has key \"b\"\n";
    }

    return 0;
}