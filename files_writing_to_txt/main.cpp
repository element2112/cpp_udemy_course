#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

// std::ios::truncate overwrite previosly existing file
// std::ios::app for append
// std::ios::ate seek to end of stream when opening  (random access files?)
int main()
{
  std::ifstream input {"poem.txt"};
  std::ofstream output {"poem_out.txt", std::ios::app};
  
  if (!input)
  {
    std::cerr << "Error opening input file" << std::endl;
    return 1;
  }
  
  if (!output)
  {
    std::cerr << "Error creating output file" << std::endl;
    return 1;
  }
  
//  std::string line {};
//  std::cout << "Enter something to write to the file: ";
//  std::getline(std::cin, line);
//  output << line << std::endl;


  std::string line {};
  
  // formatted
  while(std::getline(input, line))
    output << line << std::endl;

    // not formatted char by char
//  char c{};
//  while(input.get(c))
//    output.put(c);
    
  std::cout << "File copied" << std::endl;
  input.close();
  output.close();
  
  return 0;
}