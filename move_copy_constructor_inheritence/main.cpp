#include <iostream>

class Base
{
private:
    int val;
    
public:
    Base() : val{0}
    {
      std::cout << "Base no-args constructor" << std::endl;
    }
    
    Base(int x) : val{x}
    {
      std::cout << "int Base constructor" << std::endl;
    }
    
    Base(const Base &other) : val(other.val)
    {
      std::cout << "Base copy constructor" << std::endl;
    }
    
    Base &operator=(const Base &rhs)
    {
      std::cout << "Base operator=" << std::endl;
      
      if (this == &rhs)
        return *this;
        
      val = rhs.val;
      return *this;
    }
    
    ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived: public Base
{
private:
  int doubled_val;
  
public:
  Derived() : Base{}
  {
    std::cout << "Derived no-args constructor" << std::endl;
  }
  
  Derived(int x) : Base{x}, doubled_val{x*2}
  {
    std::cout << "int Derived constructor" << std::endl;
  }
  
  Derived(const Derived &other) : Base(other), doubled_val{other.doubled_val}
  {
    std::cout << "Derived copy constructor" << std::endl;
  }
  
  Derived &operator=(const Derived &rhs)
  {
    std::cout << "Derived operator=" << std::endl;
    
    if (this == &rhs)
      return *this;
      
    Base::operator =(rhs);
    
    doubled_val = rhs.doubled_val;
    
    return *this;
  }
  
  ~Derived() { std::cout << "Derived destructor" << std::endl; }
  
};

int main()
{
  
//  Base b {100};
//  Base b1{b};
//  b = b1;
//  

  Derived d{100};
  Derived d1{d};
  d = d1;
  
  return 0;
}