#include <iostream>

class Base
{
public:
  virtual void say_hello() const
  {
    std::cout << "i'm a base class object" << std::endl;
  }
  
  virtual ~Base() { };
};

class Derived : public Base
{
  // if i forgot the const,so when called it will redifine say_hello instead of override without me knowing
  // by adding "override" the compiler lets me know theres an issue
public:
  virtual void say_hello() const override
  {
    std::cout << "im a derived class object" << std::endl;
  }
  
  virtual ~Derived() {}
};

int main()
{
  Base *p1 = new Base();
  p1->say_hello();
  
  Derived *p2 = new Derived();
  p2->say_hello();
  
  Base *p3 = new Derived();  // without override calls base class say_hello bc accidentally redefined instead of overrode bc of forgetting const
  p3->say_hello();
  
  return 0;
}