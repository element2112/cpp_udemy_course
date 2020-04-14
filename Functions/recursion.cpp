#include <iostream>
#include <function_stuff.h>

using namespace std;

int factorial(int n);

int factorial(int n)
{
    if (n < 1)
        return 1;
        
    return n * factorial(n-1);
}

unsigned long long fibb(int n)
{
    if (n <= 1)
        return n;
        
    return fibb(n-1) + fibb(n-2);
}