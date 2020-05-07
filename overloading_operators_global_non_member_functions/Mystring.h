#ifndef MYSTRING_H
#define MYSTRING_H

#include <cctype>
#include <cstring>
#include <cstdlib>

class Mystring
{
private:
    char *str; // c-style string pointer to a char[] 
    
public:
    Mystring(); // no args constructor
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source); // move constructor
    ~Mystring(); // destructor
    
    // overloaded copy assignment operator (l-values)
    Mystring &operator=(const Mystring &rhs);
    
    // overloaded move assignment operator (r-values)
    Mystring &operator =(Mystring &&rhs);
    
    // makes lowercase
    Mystring operator-() const; // unary operators take no parameters
    
    // concats
    Mystring operator+(const Mystring &rhs) const; // binary operators take one parameter (the right side)
    
    // equality
    bool operator==(const Mystring &rhs) const;

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // MYSTRING_H
