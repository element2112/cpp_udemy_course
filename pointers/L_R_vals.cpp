#include <iostream>
#include <string>

using namespace std;

// l values: 
//    values that have names and are addressable
//    modifiable if they are not constants

// r values:
//  a va;ie that's not an l-value
//  a literal
//  a temporary which is intended to be non-modifiable

void l_r()
{
    int x {100}; // x is an l-value, 100 is an r-value
    int y = x + 200; // (x+200) is an r-value
    
    string name; // name is an l-value, "Frank" is an r-value
    name = "Frank"; // name and x can be used on the left side of an assignment statement
    
    int max_num = max(20, 30); // max(20,30) is an r-value
    
    // 100 = x; 100 is NOT an l-value
    // (100 + 20) = x // (100 + 20) is NOT an l-value
    
    // r-values can be assigned to l-values explicitly
    
    y = 100; // r-value 100 assigned to l-value y
    x = x + y; // r-value (x+y) assigned to l-value x
    
    
    // the references we've used are l-value references
    // because we are referenceing l-values
    
    int &ref1 = x; // ref1 is a reference to l-value
    ref1 = 1000;
    
// you can only reference l-values
//    int &ref2 = 100; ERROR 100 is an r-value
    
}