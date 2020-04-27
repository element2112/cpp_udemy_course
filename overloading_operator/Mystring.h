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

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // MYSTRING_H
