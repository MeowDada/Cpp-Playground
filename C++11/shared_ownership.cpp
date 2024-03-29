#include <iostream>
#include <memory>
#include <utility>

struct foo { int x; };

void func(std::shared_ptr<foo> obj)
{ obj->x = 10; }

int main()
{
    std::shared_ptr<foo> obj = std::make_shared<foo>();
    obj->x = 5;

    std::cout << "struct foo { int x; };\n";
    std::cout << "shared_ptr<foo> obj = std::make_shared<foo>();\n";
    std::cout << "obj->x = 5;\n";
    std::cout << obj->x << std::endl;
    std::cout << "func(obj);" << std::endl;

    func(obj);
    std::cout << "obj->x = " << obj->x << std::endl;

    return 0;
}