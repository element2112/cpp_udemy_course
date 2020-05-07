#include <iostream>

/* using a class as an interface is using an abstract class that only has pure virtual functions 
 *  functions provide a general set of services to the user of the class
 *  provided as public
 *  each subclass is free to implement these services as needed
 *  every service (method) must be implemented
 *  the service type information is strictly enforced
 * 
 *  cpp does not provide true interfaces with a special keyword like java and c#
 * 
 * 
 *  typically an I_ before a class name to show its an interface
 *      ex: class I_Shape { ... };
 */
 
class I_Printable // interface
{
  friend std::ostream &operator<<(std::ostream &os, const I_Printable &rhs);
  
public:
  virtual void print(std::ostream &os) const = 0; // pure virtual function
};

std::ostream &operator<<(std::ostream &os, const I_Printable &rhs)
{
  rhs.print(os);
  
  return os;
}
 
class Account : public I_Printable
{
public:
 virtual void withdraw(double amount)
 {
   std::cout << "In account withdraw" << std::endl;
 }
 
 virtual void print(std::ostream &os) const override
 {
   os << "Account display";
 }
 
 virtual ~Account(){}
};

class Checking : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "in checking withdraw" << std::endl;
  }
  
 virtual void print(std::ostream &os) const override
 {
   os << "Checking display";
 }
  
  virtual ~Checking(){}
};

class Savings : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "in savings withdraw" << std::endl;
  }
  
 virtual void print(std::ostream &os) const override
 {
   os << "Savings display";
 }

  virtual ~Savings(){}
};

class Trust : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "in trust withdraw" << std::endl;
  }

 virtual void print(std::ostream &os) const override
 {
   os << "Trust display";
 }
 
  virtual ~Trust(){}
};

class Dog : public I_Printable
{
public:
  virtual void print(std::ostream &os) const override
  {
    os << "Woof woof";
  }
};

// or
void print(const I_Printable &obj)
{
  std::cout << obj << std::endl;
}

int main()
{
    Dog *dog = new Dog();
    
    print(*dog);
    
    std::cout << *dog << std::endl;
    
    Account *p1 = new Account();
    std::cout << *p1 << std::endl;
    
    Account *p2 = new Checking();
    std::cout << *p2 << std::endl;
  
  return 0;
}


