#include <iostream>

struct A {};
struct B: public A {};
struct C {};

void foo(A const& ) {std::cout << "foo(A const&)\n";}
void foo(A const&& ) {std::cout << "foo(A const&&)\n";}
void foo(B const& ) {std::cout << "foo(B const&)\n";}
void foo(B const&& ) {std::cout << "foo(B const&&)\n";}

void callFoo() {
    foo(A()); // should invoke foo(A const&&)
    foo(B()); // should invoke foo(B const&&)
    // foo(C()); Error: No matching function template
}

/* SFINAE: Substition Failure Is Not An Error */
int main()
{
    callFoo();

#if defined(__WIN32__)
    system("pause");
#endif

    return 0;
}