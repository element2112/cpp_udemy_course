#include <iostream>

using namespace std;

int main()
{
    bool result {false};

    result = (100 == (50+50));

    int num1{5}, num2{5};
    
    cout << (num1 == num2) << endl;
    cout << boolalpha; // changes the output stream to represent booleans as "true/false" instead of "1/0"
    cout << (num1 == num2) << endl;
    cout << noboolalpha;
    cout << (num1 != num2) << endl;
    cout << boolalpha;
    cout << (num1 != num2) << endl;

    
    return 0;
}