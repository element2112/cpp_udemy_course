#include <iostream>


double calculate_mpg(int miles, int gallons)
{
  if (gallons == 0)
    throw 0;
    
  return static_cast<double>(miles) / gallons;
}

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
    mpg = calculate_mpg(miles, gallons);
    std::cout << "Result: " << mpg << std::endl;
  }
  catch(int &e)
  {
    std::cout << "Cannot divide by zero\n";
  }

  std::cout << "Bye" << std::endl;
  
  return 0;
}