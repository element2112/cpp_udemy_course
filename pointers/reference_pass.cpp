#include <iostream>
#include <vector>
#include <pointers_header.h>

using namespace std;

void double_data(int *int_ptr);

void swap(int *a, int *b);

void display(const vector<string> *const v) // vector pointer. can't change vector or pointer
{
    for (auto s : *v)
        cout << s << " ";
    
//    (*v).at(0) = "Funny"; // deref vector to change the first position to "funny"
    
    cout << endl;
}

void display(int *array, int sentinel)
{
    cout << array << endl;
    
    while (*array != sentinel)
        cout << *array++ << " "; // increment pointer after each print
}

void reference_pass_ex1()
{
    int value {10};
    int *int_ptr{nullptr};
    
    cout << "Value: " << value << endl; // 10
    double_data(&value);
    cout << "Value: " << value << endl;
    
    cout << "====================================" << endl;
    
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    
    cout << endl;
    
    int x{100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    cout << "=================================" << endl;
    
    vector <string> stooges {"larry", "moe", "curly"};
    display(&stooges);
    
    cout << "=================================" << endl;
    
    int scores[] {100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    cout << endl;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}