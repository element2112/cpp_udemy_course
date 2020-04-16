#include <iostream>
#include <vector>

using namespace std;

// different than pointers
// might be helpful to think of a reference as a constant pointer that is automatically dereferenced

/*
 * USE REFERENCES IN RANGE BASED FOR LOOPS
 * 
 */
 
 
void ref()
{
    vector<string> stooges {"larry", "moe", "curly"};
    
    for (auto str: stooges)
        str = "Funny"; // changes the copy (str is the copy so not actually changing the element)
        
    for (auto str: stooges)
        cout << str << endl; // Larry, Curly, Moe
        
    cout << "\n\n";
    // ============== using a reference ======================/
    for (auto &str: stooges)
        str = "Funny"; // changes the actual
    
    for (auto str: stooges)
        cout << str << endl; // Funny, Funny, Funny
    
    cout << endl;
    
    // if you want to prevent changing the data
    for (auto const &str: stooges)
        cout << str << endl; // Funny, Funny, Funny
        
    cout << endl;
    
    int num{100};
    int &ref {num}; // ref is an alias to the num
    
    cout << num << endl; // 100
    cout << ref << endl; // 100
    cout << endl;
    num = 200;
    cout << num << endl; // 200
    cout << ref << endl; // 200
    cout << endl;
    ref = 300;
    cout << num << endl; // 300
    cout << ref << endl; // 300
}