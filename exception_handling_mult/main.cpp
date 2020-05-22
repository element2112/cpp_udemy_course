#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons)
{
  if (gallons == 0)
    throw 0;
  
  if (miles < 0 || gallons < 0)
    throw std::string{"Negative value error"}; // already threw an integer so using a string this time

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
  catch(int &ex)
  {
    std::cerr << "Tried to divide by zero" << std::endl;
  }
  catch(std::string &ex)
  {
    std::cerr << ex << std::endl;
  }
  catch(...) // catch all other exceptions thrown
  {
    std::cout << "Unknown exception" << std::endl;
  }

  std::cout << "Bye" << std::endl;
    

  return 0;
}