#include "Mystring.h"
#include <cstring>
#include <iostream>

Mystring::Mystring() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s) : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

Mystring::Mystring(Mystring &&source) : str{source.str}
{
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}

Mystring::Mystring(const Mystring &source) : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::~Mystring()
{
    delete[] str;
}

void Mystring::display() const
{
    std::cout << str << ": " << get_length() << std::endl;
}

int ::Mystring::get_length() const { return std::strlen(str); }

const char *Mystring::get_str() const { return str; }


// overloading assignment operator (copy assignment for l-values)
// uses a deep copy
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    
    // object on lhs of the "=" is represented by the "this" pointer
    if (this == &rhs) // p1 = p1;
        return *this; // return current object
    
    // "this" is being changed so delete anything that it refers to
    delete [] this->str; // deallocate storage for this->str
    
    // allocate space on heap for new string
    this->str = new char[std::strlen(rhs.str) + 1];
    
    // strpy rhs into string
    std::strcpy(this->str, rhs.str);
    
    return *this;
}

// overloading assignment operator (move assignment for r-values)
// "stealing" the pointer and nulling out the rhs pointer
Mystring &Mystring::operator =(Mystring &&rhs)
{
    std::cout << "Move assignment" << std::endl;
    
    if (this == &rhs)
        return *this;
        
    delete [] this->str; // deallocate current storge
    this->str = rhs.str; // steal the pointer
    
    rhs.str = nullptr; // null out the rhs object
    
    return *this; // return current object
}

/* the below are NOT member functions */

// equality
bool operator==(const Mystring &lhs, const Mystring &rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// make lower case
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    
    for (size_t i=0; i < std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    
    Mystring temp {buff};
    
    delete [] buff;
    
    return temp;
}

// concat
Mystring operator+(const Mystring &rhs, const Mystring &lhs)
{
    int n {std::strlen(rhs.str) + std::strlen(lhs.str) + 1};
    
    char *buff = new char[n];
    
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    
    Mystring temp{buff};
    
    delete [] buff;
    
    return temp;
}