#include <iostream>
#include <iomanip>


void ruler()
{
  std::cout << "\n12345678901234567890123456789012345678901234567890" << std::endl;
}

int main()
{
  int num1 {1234};
  double num2 {1234.5678};
  std::string hello {"Hello"};
  
  // defaults
  std::cout << "\n--------Defaults----------------" << std::endl;
  ruler();
  std::cout << num1 << num2 << hello << std::endl;
  
  // defults - one per line
  std::cout << "\n-------Defults one per line-------" << std::endl;
  ruler();
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  std::cout << hello << std::endl;
  
  // set field width to 10
  // the default justification is right for num1 only
  std::cout << "\n-------- width 10 for num 1-----------" << std::endl;
  ruler();
  std::cout << std::setw(10) << num1 << num2 << hello << std::endl;
  
  // set field to 10 for the first 2 outputs
  // default is right for both
  std::cout << "\n-------- width 10 for num 1 and 2 -----------" << std::endl;
  ruler();
  std::cout << std::setw(10) << num1 << std::setw(10) << num2 << hello << std::endl;
  
  // set field width to 10 for all 3
  std::cout << "\n-------- width 10 for num 1 and 2 and hello -----------" << std::endl;
  ruler();
  std::cout << std::setw(10) << num1 << std::setw(10) << num2 << std::setw(10) << hello << std::endl;
  
  // set field width to 10 for all 3
  std::cout << "\n-------- width 10 for num 1 and 2 and hello left justified for all-----------" << std::endl;
  ruler();
  std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << std::setw(10) << std::left << hello << std::endl;
  
  
  // setfill to a dash
  // this is persistent
  // then repeat the previous display
  
  std::cout << std::setfill('*');
  std::cout << "\n--------width 10 for num1 and num2 and hello left just for all setfill to dash--------" << std::endl;
  ruler();
  std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << std::setw(10) << std::left << hello << std::endl;
  
  // set width to 10 for all, left just, and cary the setfill character
  std::cout << "\n-------width 10 for num1 and num2 and hello - setfill varies ---------" << std::endl;
  ruler();
  std::cout 
    << std::setw(10) << std::left << std::setfill('*') << num1 
    << std::setw(10) << std::left << std::setfill('#') << num2 
    << std::setw(10) << std::left << std::setfill('-') << hello 
    << std::endl;
  
  
  return 0;
}