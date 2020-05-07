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

int main()
{
  std::cout << "\n=====Pointers====\n";
  
  Account *p1 = new Account();
  Account *p2 = new Savings();
  Account *p3 = new Checking();
  Account *p4 = new Trust();
  
  p1->withdraw(1000);
  p2->withdraw(1000);
  p3->withdraw(1000);
  p4->withdraw(1000);
  
  std::cout << "\n=====Array=====\n";
  
  Account *array [] = {p1,p2,p3,p4};
  
  for (size_t i{0}; i < 4; i++)
    array[i]->withdraw(1000);
  
  std::cout << "\n=====Array=====\n";
  
  array[0] = p4;
  
  for (size_t i{0}; i < 4; i++)
    array[i]->withdraw(1000);
  
  std::cout << "\n=====Vector=====\n";
  
  std::vector<Account *> accounts {p1,p2,p3,p4};
  for (auto acc_ptr : accounts)
    acc_ptr->withdraw(1000);

  std::cout << "\n=====Vector=====\n";
  accounts.push_back(p4);
  accounts.push_back(p4);
  
  for (auto acc_ptr : accounts)
    acc_ptr->withdraw(1000);
    
  std::cout << "\n====Clean up=====\n";
  
  delete p1;
  delete p2;
  delete p3;
  delete p4;
  
  return 0;
}