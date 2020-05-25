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

  while(!input.eof())
  {
    std::getline(input, line);
    std::cout << ++num << " " << line << std::endl;
  }
  
  input.close();
  
  return 0;
}