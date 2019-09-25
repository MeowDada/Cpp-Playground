#include <map>
#include <memory>
#include <string>
#include <vector>

int main()
{
    /* RAII = Resouce Acquisition Is Initialization */

    /* The code below will internally manage some dynamically allocated memory.
       They are all, however, implemented such that they deallocate the memory
       when they are destroyed. This practice is know as RAII */
     
    std::vector<int> vec = { 1, 2, 3, 4, 5 };
    std::map<std::string, int> map = {{"Foo",10}, {"Bar",20}};
    std::string str = "some text";
    std::unique_ptr<int> ptr1 = std::make_unique<int>(8);
    std::shared_ptr<int> ptr2 = std::make_shared<int>(16);
}