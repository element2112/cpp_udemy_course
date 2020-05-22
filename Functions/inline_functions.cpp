#include <iostream>
#include <function_stuff.h>

using namespace std;

inline int add_numbers_(int a, int b) // usually defined in headers
{
    return a + b;
}

void inline_fun()
{
    int result{0};
    result = add_numbers_(100,200);
}

