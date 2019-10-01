#include <utility>
#include <iostream>

class foo
{
    public:
        foo() :
        x(0), arr(new int[5])
        { 
            std::cout << "default constructor" << std::endl;
        }

        foo(const foo& other)
        : x (other.x), arr{new int{*other.arr}}
        {
            std::cout << "normal constructor" << std::endl;
        }

        foo(foo& other)
        : x (other.x), arr{other.arr}
        {
            std::cout << "copy constructor" << std::endl;
        }

        foo(foo&& other)
        {
            std::cout << "move constructor" << std::endl;
            *this = std::move(other);
        }
        
        foo& operator=(const foo& other)
        {
            std::cout << "copy assignment" << std::endl;

            if (this != &other) {
                delete[] arr;
                arr = nullptr;
                arr = new int{*(other.arr)};
            }
            return *this;
        }

        foo& operator=(foo&& other)
        {
            std::cout << "move assignment" << std::endl;

            if (this != &other) {
                delete[] arr;
                x = other.x;
                arr = other.arr;
                other.arr = nullptr;
            }
            return *this;
        }

        ~foo()
        {
            std::cout << "destructor" << std::endl;

            delete[] arr;
        }

        friend void swap(foo& first, foo& second)
        {
            using std::swap;

            swap(first.x, second.x);
            swap(first.arr, second.arr);
        }
    private:
        int x;
        int *arr;
};

foo build_foo(foo f) { return f; }

int main()
{
    foo bar0, bar1;
    foo bar2(bar0);
    foo bar3(build_foo(bar2));
    foo bar4(foo());
    foo bar5 = build_foo(foo());

    return 0;
}