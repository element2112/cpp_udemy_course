#include <iostream>
#include <vector>
#include <string>
#include <pointers_header.h>


using namespace std;


void pointers_exe()
{
    int *ptr{nullptr}; // always initialize to nullptr
    
    int *p;
    
    int num{10};
    
    cout << "Value of num is: " << num << endl; // 10
    
    cout << "Sizeof of num is: " << sizeof(num) << endl; // 4
    
    cout << "Address of num is: " << &num << endl; // 0x61fde4
    
    cout << "\n\n";
    
    cout << "Value of ptr is: " << ptr << endl; // some machines will print out garbage since it's not initalized. For mine it auto initalizes to null
    
    cout << "Address of ptr is: " << &ptr << endl;
    
    cout << "sizeof of ptr is: " << sizeof(ptr) << endl;
    
    ptr = nullptr;
    
    cout << "Value of ptr is now: " << ptr << endl;
    
    cout << "\n\n";
    
    
    
    
    int score{100};
    int *score_ptr{&score};
    
    cout << *score_ptr << endl; // 100
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl; // 200
    cout << score << endl; // 200
    
    cout << endl;
    
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};
    
    cout << *temp_ptr << endl; // 100.7
    
    temp_ptr = &low_temp;
    
    cout << *temp_ptr << endl; // 37.4
    
    cout << endl;
    
    string name{"Frank"};
    
    string *string_ptr{&name};
    
    cout << *string_ptr << endl; // Frank
    
    name = "James";
    
    cout << *string_ptr << endl; // James
    
    
    cout << endl;
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry
    cout << "Stooges: ";
    for (auto s : *vector_ptr)
        cout << s << " ";
        
    cout << "\n\n";
    
}