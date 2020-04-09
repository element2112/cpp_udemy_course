#include <iostream>
#include <vector>

using namespace std;

int main()
{
//    int total_amount {100};
//    int total_number {8};
//    double average {0.0};
//
//    average = total_amount / total_number;
//    cout << average << endl; // displays 2
//
//    average = static_cast<double>(total_amount) / total_number;
//    cout << average << endl; // displays 12.5
    int total {};
    int num1{}, num2{}, num3{}; //initialized to 0
    const int count {3};
    
    cout << "Enter 3 integers seperated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;
    
    cout << "The average is: " << average << endl;
    cout << "The sum is: " << total << endl;
    
    cout << endl;
}