#include <iostream>

using namespace std;

// asks the user enter an integer representing the number of cents
// display how to provide change

// ex
// 92 cents -> 0 dollars -> 3 quarters -> 1 dime -> 1 nickel -> 2 pennies

int main()
{
    int cents;
    
    cout << "Enter the amount of cents: ";
    cin >> cents;
    cout << endl;
    cout << endl;
    
    const int dollars = 100;
    const int quarters = 25;
    const int dimes = 10;
    const int nickels = 5;
    const int pennies = 1;
    int sub_val = 0;
    
    sub_val = cents / dollars;
    cout << "Dollars: " << sub_val << endl;
    cents -= sub_val * dollars;
    
    sub_val = cents / quarters;
    cout << "Quarters: " << sub_val << endl;
    cents -= sub_val * quarters;
    
    sub_val = cents / dimes;
    cout << "Dimes: " << sub_val << endl;
    cents -= sub_val * dimes;
    
    sub_val = cents / nickels;
    cout << "Nickels: " << sub_val << endl;
    cents -= sub_val * nickels;
    
    sub_val = cents / pennies;
    cout << "Pennies: " << sub_val << endl;
    cents -= sub_val * pennies;
    
    if (sub_val <= 0)
        cout << "I think you messed up\n";
    
    return 0;
    
}