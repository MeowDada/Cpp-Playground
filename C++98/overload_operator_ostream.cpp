#include <iostream>

class foo
{
    public:
        int x;
        friend std::ostream& operator<<(std::ostream& stream, foo const& f)
        {
            return stream << "A foo with x = " << f.x;
        }
};

int main()
{
    foo bar;
    bar.x = 10;
    std::cout << bar << std::endl;

    return 0;
}