#include <iostream>
#include <vector>

// all classes with virtual functions need a virtual destructor

class Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "In account::withdraw" << std::endl;
  }
  
  virtual ~Account() { std::cout << "account destructor" << std::endl; }
};

class Savings : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "In savings::withdraw" << std::endl;
  }
  virtual ~Savings() { std::cout << "savings destructor" << std::endl; }
};

class Checking : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "In checking::withdraw" << std::endl;
  }
  
  virtual ~Checking() { std::cout << "checking destructor" << std::endl; }
};

class Trust : public Account
{
public:
  virtual void withdraw(double amount)
  {
    std::cout << "In trust::withdraw" << std::endl;
  }
  
  virtual ~Trust() { std::cout << "trust destructor" << std::endl; }
};

// since withdraw is virtual it will be bound dynamically and
// will use the withdraw method of whatever type of account that is
// passed in
void do_withdraw(Account &acc, double amount)
{
  acc.withdraw(amount);
}

int main()
{
  Account a;
  Account &ref = a;
  ref.withdraw(1000); // in account withdraw
  
  Trust t;  Account &ref1 = t;
  ref1.withdraw(10000); // in trust withdraw
  
  Account a1;
  Savings a2;
  Checking a3;
  Trust a4;
  
  do_withdraw(a1, 1000);
  do_withdraw(a2, 2000);
  do_withdraw(a3, 3000);
  do_withdraw(a4, 4000);
  
  
  return 0;
}