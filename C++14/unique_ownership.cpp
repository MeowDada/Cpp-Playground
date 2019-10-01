#include <iostream>
#include <memory>
#include <utility>

struct foo { int x; };

void func(std::unique_ptr<foo> obj)
{ obj->x = 10; }

int main()
{
    // std::make_unique was introduced in C++14
    std::unique_ptr<foo> obj = std::make_unique<foo>();
    obj->x = 5;

    // std::unique_ptr is non-copyable, it must be moved instead of being copied
    func(std::move(obj));

    // after passing ownership to function func(), the main() no longer has access to the foo object
    // Error => std::cout << obj->x << std::endl;

#if defined(__WIN32)
    system("pause");
#endif

    return 0;
}