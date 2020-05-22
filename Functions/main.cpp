#include <iostream>
#include <function_stuff.h>

using namespace std;

int main()
{
    run_gen_function();
    inline_fun();
    
    int n = 5;
    
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    
    n = 10;
    
    cout << "Fibbonaci of " << n << " is " << fibb(n) << endl;
    
}
