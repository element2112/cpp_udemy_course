#include <iostream>

class Base
{
    // friends of Base have access to all
public:
    int a{0};
    void display() { std::cout << a << ", " << b << ", " << c << std::endl;}
    
protected:
    int b {0};
    
private:
    int c{0};
};

class Derived : public Base
{
    // Friends of derived have access to only what derived has access to
    
    // a will be public
    // b will be protected
    // c is inherited but will not be accessible
public:
    void access_base_members() {
        a = 100; // OK
        b = 200; // OK 
//        c = 300; // not accessible
    }
    
};

int main()
{
    std::cout << "========BASE CLASS MEMBER ACCESS FROM BASE OBJECTS===========" << std::endl;
    
    Base base;
    
    base.a = 100; // OK
//    base.b = 200; // Compiler error
//    base.c = 300; // compiler error
    
    std::cout << "========BASE MDEMBER ACCESS FROM DERIVED OBJECTS=============" << std::endl;
    
    Derived d;
    d.a = 100; // OK
//    d.b = 200; // compiler error
//    d.c = 300; // compiler error
    
    return 0;
}