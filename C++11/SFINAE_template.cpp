#include <iostream>
#include <cstdlib>
#include <type_traits>

// typename Enable = void allow SFINAE
template <typename T, typename Enable = void>
class foo
{
    public:
        foo() {
            std::cout << "use default\n";
        }
};

template <typename T>
class foo<T, typename std::enable_if<std::is_integral<T>::value>::type>
{
    public:
        foo() {
            std::cout << "use int!\n";
        }
};

template <typename T>
class foo<T, typename std::enable_if<std::is_floating_point<T>::value>::type>
{
    public:
        foo() {
            std::cout << "use float!\n";
        }
};

int main()
{
    foo<std::string>();
    foo<int>();
    foo<float>();

#if defined(__WIN32__)
    system("pause");
#endif

    return 0;
}