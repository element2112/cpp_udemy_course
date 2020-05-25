#include <iostream>
#include <iomanip>

int main()
{
  std::cout << "noboolalpha - default " << (10 == 10) << std::endl;
  std::cout << "noboolalpha - default " << (10 == 20) << std::endl;
  
  std::cout << std::boolalpha << std::endl; // stream manipulator changes all boolean values in stream to display true/false instead of 1/0
  std::cout << "boolalpha " << (10 == 10) << std::endl;
  std::cout << "boolalpha " << (10 == 20) << std::endl;
  std::cout << "boolalpha " << (10 == 10) << std::endl;
  std::cout << "boolalpha " << (10 == 20) << std::endl;
  
  std::cout << std::noboolalpha << std::endl; // changes back to 1/0
  std::cout << "boolalpha " << (10 == 10) << std::endl;
  std::cout << "boolalpha " << (10 == 20) << std::endl;
  
  // another way to do it
  std::cout.setf(std::ios::boolalpha);
  std::cout << "boolalpha " << (10 == 10) << std::endl;
  std::cout << "boolalpha " << (10 == 20) << std::endl;
  
  // reset to default 1/0
  std::cout << std::resetiosflags(std::ios::boolalpha);
  std::cout << "Default " << (10 == 10) << std::endl;
  std::cout << "Default " << (10 == 20) << std::endl;
  
  std::cout << "================= INTEGER OUTPUT ======================" << std::endl;
  
  int num {255};
  
  std::cout << std::showbase << std::uppercase; // showbase manipulator
  std::cout << std::dec << num << std::endl;
  std::cout << std::hex << num << std::endl;
  std::cout << std::oct << num << std::endl;
  std::cout << std::noshowbase;
  
  // changing back to decimal
//  std::cout << std::dec;
  // or can do this way
  std::cout << std::resetiosflags(std::ios::basefield);
  
  int num1 {255};
  int num2 {-255};
  
  std::cout << num1 << std::endl;
  std::cout << num2 << std::endl;
  
  std::cout << std::showpos; //shows +/- symbols
  
  std::cout << num1 << std::endl; // +255
  std::cout << num2 << std::endl; // -255
  
  std::cout << std::resetiosflags(std::ios::showpos);
  std::cout << "============================ FLOATING POINT ==========================" << std::endl;
  
  double n1 {123456789.987654321};
  double n2 {1234.5678};
  double n3 {1234.0};
  
  // using defaults
  std::cout << "--defaults--" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  
  std::cout << std::setprecision(2);
  std::cout << "---- Precision 2 -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  std::cout << std::setprecision(5);
  std::cout << "---- Precision 5 -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  std::cout << std::setprecision(9);
  std::cout << "---- Precision 9 -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  // using precision 3 and fixed (precision happens after decimal)
  std::cout << std::setprecision(3) << std::fixed;
  std::cout << "----- precision 3 fixed -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  // the bottom two don't exactly work for my machine.
  // the first still only displays 2 0's for scientific notation
  // for the last, E is always uppercase for some reason regardless of the uppercase
  std::cout << std::setprecision(3) << std::scientific;
  std::cout << "----- precision 3 scientific -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  std::cout << std::setprecision(3) << std::scientific << std::uppercase;
  std::cout << "----- precision 3 scientific uppsercase -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  // show positive
  std::cout << std::setprecision(3) << std::fixed << std::showpos;
  std::cout << "----- precision 3 scientific -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  // back to defaults
  std::cout.unsetf(std::ios::scientific | std::ios::fixed);
  std::cout << std::resetiosflags(std::ios::showpos);
  
  // show trailing zeros up to precision 10
  std::cout << std::setprecision(10) << std::showpoint;
  std::cout << "----- precision 10 showpoint -------------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  // back to defaults
  std::cout.unsetf(std::ios::scientific | std::ios::fixed);
  std::cout << std::setprecision(6);
  std::cout << std::resetiosflags(std::ios::showpos);
  std::cout << std::resetiosflags(std::ios::showpoint);
  
  std::cout << "---back to defaults-------" << std::endl;
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  
  return 0;
}