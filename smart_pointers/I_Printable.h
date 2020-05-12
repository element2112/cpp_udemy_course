#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H
#include <iostream>

class I_Printable // interface
{
  friend std::ostream &operator<<(std::ostream &os, const I_Printable &rhs);
  
public:
  virtual void print(std::ostream &os) const = 0; // pure virtual function
};

#endif // I_PRINTABLE_H
