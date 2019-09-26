#include <utility>
#include <iostream>

#define DEFAULT_NUM_ELEMENTS 67108864

class foo
{
    public:
        foo()
            : p(new int[DEFAULT_NUM_ELEMENTS])
        {

        }

        ~foo()
        {
            delete[] p;
        }

    private:
        int *p;    
}

void test()
{
    foo *bar = new foo;
}

int main()
{
    char q = 0;

    test();

    while (q != 'q')
    {
        std::cin >> q;
    }
}