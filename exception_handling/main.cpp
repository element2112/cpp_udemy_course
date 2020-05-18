#include <iostream>


// exception handling in cpp should only be used for synchronous code and not synchronous code

int main()
{
  
  int miles{};
  int gallons{};
  double mpg{};
  
  std::cout << "Enter the miles: ";
  std::cin >> miles;
  std::cout << "Enter the gallons: ";
  std::cin >> gallons;
  
  try
  {
    if (gallons == 0)
      throw 0; 
      
    mpg = static_cast<double>(miles) / gallons;
    std::cout << "Result: " << mpg << std::endl;
  }
  catch (int &ex)
  {
    std::cerr << "Sorry, you can't divide by zero" << std::endl;
  }
  

  
  std::cout << "Bye" << std::endl;
  
  
  // mpg with no exception handle
//  int miles{};
//  int gallons{};
//  double mpg{};
//  
//  std::cout << "Enter the miles: ";
//  std::cin >> miles;
//  std::cout << "Enter the gallons: ";
//  std::cin >> gallons;
//  
////  mpg = miles / gallons; // crashes bc integer div by 0
//
//  if (gallons != 0)
//  {
//    mpg = static_cast<double>(miles) / gallons;
//    std::cout << "Result: " << mpg << std::endl;
//  }
//  else
//  {
//    std::cerr << "Sorry, can't divide by zero" << std::endl;
//  }
//  
//
//  
//  std::cout << "Bye" << std::endl;
  
  return 0;
}