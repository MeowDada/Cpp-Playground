#include <iostream>
#include <utility>
#include <memory>

#define DEFAULT_NUM_ELEMENTS 67108864 /* 64M */

class foo 
{
    public:
        foo()
            : p(new int [DEFAULT_NUM_ELEMENTS])
        {
            std::cout << "foo constructor\n"; 
        }

        ~foo()
        {
            std::cout << "foo deconstructor\n";
        }
    
    private:
        int *p;
};

int main()
{
    foo *bar1 = new foo();
    foo *bar2 = malloc(sizeof(foo));

    delete bar1;
    free(bar2);

    return 0;
}