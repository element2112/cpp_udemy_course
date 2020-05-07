#include <iostream>

class A
{
public:
  virtual void do_something();
};

class B : public A
{
public:
  // final at the member method level: method can no longer be overriden
  virtual void do_something() final;
};

// final at the class level: this class cannot be derived from
class C final : public B
{
public:
  virtual void do_something(); // compiler error - can't override
}