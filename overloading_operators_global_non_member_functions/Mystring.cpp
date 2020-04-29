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

// overloaded ==
bool Mystring::operator==(const Mystring &rhs) const 
{
    return (std::strcmp(str, rhs.str) == 0);
}

// overloaded -
Mystring Mystring::operator -() const
{
    char *buffer = new char[std::strlen(str) + 1];
    
    std::strcpy(buffer, str);
    
    for (size_t i = 0; i < std::strlen(buffer); i++)
    {
        buffer[i] = std::tolower(buffer[i]);
    }
    
    Mystring temp {buffer};
    
    delete [] buffer;
    
    return temp;
}

// overloaded +
Mystring Mystring::operator +(const Mystring &rhs) const
{
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    
    std::strcpy(buff, str);
    
    std::strcat(buff, rhs.str); 
    
    Mystring temp {buff};
    
    delete[] buff;
    
    return temp;
}