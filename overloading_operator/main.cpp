#include <iostream>
#include <vector>
#include "Mystring.h"


int main()
{
    Mystring t{"Hello"}; // overloaded constructor
    t = Mystring{"Hola"}; // overloaded constructor then move assignment
    t = "Bonjour";  // overloaded constructor then move assignment
    


    Mystring a{"Hello"};
    Mystring b;
    b = a;
    
    b = "This is a test"; // rhs gets created as an object and then assigned to be
    
    Mystring empty; // no-args constructor
    Mystring larry{"Larry"}; // overloaded constructor
    Mystring stooge{larry}; // copy constructor
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooge = "Larry, Moe, and Curly";
    stooge.display();
    
    std::vector<Mystring> vec;
    vec.push_back("Larry");
    vec.push_back("Moe");
    vec.push_back("Curly");
    
    std::cout << "===Loop 1 ==================" << std::endl;
    
    for (const Mystring &s: vec)
        s.display();
        
    std::cout << "===Loop 2 ==================" << std::endl;
    for (Mystring &s : vec)
        s = "Changed"; // copy assignment overloaded
        
    std::cout << "===Loop 3 ==================" << std::endl;
    for (const Mystring &s : vec)
        s.display();
    
    return 0;
}