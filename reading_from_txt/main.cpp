#include <iostream>
#include <fstream>
#include <iomanip>

// include fstream -> create ifstream or ostream object or fstream(both) -> connect to file -> read data from file -> close file
int main()
{
  std::ifstream input;
  std::string line;
  int num{};
  double  total;
  
  input.open("test.txt");
  
  if (!input)
  {
    std::cerr << "Error opening file" << std::endl;
    return 1;
  }
  
//  input >> line >> num >> total;
//  std::cout << line << std::endl;
//  std::cout << num << std::endl;
//  std::cout << total << std::endl;

  while(!input.eof())
  {
    input >> line >> num >> total;
    
    std::cout << std::setw(10) << std::left << line
            << std::setw(10) << num
            << std::setw(10) << total
            << std::endl;
  }


  
  input.close();
  
  return 0;
}