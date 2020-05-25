#include <iostream>
#include <fstream>
#include <iomanip>

// include fstream -> create ifstream or ostream object or fstream(both) -> connect to file -> read data from file -> close file
int main()
{
  std::ifstream input;
  std::string line;
  int num{};
  
  input.open("poem.txt");
  
  if (!input)
  {
    std::cerr << "Error opening file" << std::endl;
    return 1;
  }

  // line by line
  while(!input.eof())
  {
    std::getline(input, line);
    std::cout << ++num << " " << line << std::endl;
  }
  
  // char by char
//  char c{};
//  while(!input.eof())
//  {
//    input.get(c);
//    std::cout << c;
//  }
  
  std::cout << std::endl;
  
  input.close();
  
  return 0;
}