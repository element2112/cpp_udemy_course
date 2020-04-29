#ifndef MYSTRING_H
#define MYSTRING_H

#include <cctype>
#include <cstring>
#include <cstdlib>

class Mystring
{
    // these could also be implemented by public methods it seems
    // seems to be the standard to use friend of class
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lfs, const Mystring &rhs);
private:
    char *str; // c-style string pointer to a char[] 
    
public:
    Mystring(); // no args constructor
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source); // move constructor
    ~Mystring(); // destructor
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif // MYSTRING_H
