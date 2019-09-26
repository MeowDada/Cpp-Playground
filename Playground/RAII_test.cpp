#include <utility>
#include <iostream>

#define DEFAULT_NUM_ELEMENTS 134217728

class foo
{
    public:
        foo()
            : p(new int[DEFAULT_NUM_ELEMENTS])
        {
            std::cout << "foo constructor\n";
        }

        ~foo()
        {
            std::cout << "foo deconstructor\n";
            delete[] p;
        }

        void show_addr()
        {
            for(int i = 0 ; i < DEFAULT_NUM_ELEMENTS; i++)
                p[i] = i;
            std::cout << p << std::endl;
        }

    private:
        int *p;    
};

void test()
{
    foo bar;
    bar.show_addr();
}

int main()
{
    char q = 0;

    std::cout << "use RAII type correctly\n"; 
    std::cout << "foo bar;\n"
    test();
    std::cout << "deallocate memory internally successfully";

    std::cout << "use RAII type incorrectly\n";
    std::cout << ""
    foo *bar = new foo();
    bar->show_addr();
    std::cout << "the memory will not be deallocated until the deconstructor is being invoked\n";

    std::cout << "enter \'q\' to exit the program\n";
    while (q != 'q')
    {
        std::cin >> q;
    }

    return 0;
}