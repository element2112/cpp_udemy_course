#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

// used for strings written in memory
// input data validation
// for guis sometimes keep strings in memory and then display them out through stringstreams

int main()
{
  int num{};
  double total{};
  std::string name{};
  
  std::string info {"Moe 100 1234.5"}; // want to take the contents of this string and store them into 3 variables (basically parsing the string)
  std::istringstream iss{info};
  
  iss >> name >> num >> total;
  std::cout << std::setw(10) << std::left << name
            << std::setw(5) << num
            << std::setw(10) << total << std::endl;
            
            
  std::cout << "\n------------------------------" << std::endl;
  
  // writing to the output stream instead of reading like above (turning it back into a string)
  std::ostringstream oss{};
  oss << std::setw(10) << std::left << name
      << std::setw(5) << num
      << std::setw(10) << total << std::endl;
  std::cout << oss.str() << std::endl;
  
  std::cout << "\n------------DATA VALIDATION-----------------" << std::endl;
  
  int value{};
  // instead of taking input into a typed variable, take input as a string
  //   and then validate it 
  std::string entry{};
  bool done = false;
  
  do
  {
    std::cout << "Please enter an integer: ";
    std::cin >> entry;
    std::stringstream validator {entry};
    if (validator >> value) // trying to extract value from the stream. If its not an integer, it will fail. If its the string "123" will be turned into int 123 and it will pass
      done = true;
    else
      std::cout << "Sorry, not an integer" << std::endl;
      
    // discards the input buffer
    // clearing out the stream in case there are things left over
    // for instance: 12.3, 12 will be taken and .3 will stay in stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
  }
  while(!done);
  
  std::cout << "You entered integer: " << value << std::endl;
  std::cout << std::endl;
  
  return 0;
}