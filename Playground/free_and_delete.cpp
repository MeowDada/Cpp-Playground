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
    std::cout << "foo *bar1 = new foo();\n";
    foo *bar1 = new foo();
    std::cout << "delete bar1;\n";
    delete bar1;

    std::cout << "foo *bar2 = (foo *)malloc(sizeof(foo));\n";
    foo *bar2 = (foo *)malloc(sizeof(foo));
    std::cout << "delete bar2;\n";
    free(bar2);

    std::cout << "bar1 = new foo();\n";
    std::cout << "Can we do free(bar1)?\n";
    std::cout << "Yes, but will not invoke deconstructor, which might lead to memory leaking\n";
    free(bar1);

    std::cout << "bar2 = (foo *)malloc(sizeof(foo));\n";
    bar2 = (foo *)malloc(sizeof(foo));
    std::cout << "Can we do delete bar2 ?\n";
    std::cout << "Yes, and it will also invoke deconstructor\n";
    delete bar2;


    return 0;
}