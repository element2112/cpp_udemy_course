
#include <iostream>

using namespace std; // use entire std namespace

// or

/* 
using std::cout;
using std::cin;
using std::endl;
*/

int main(int argc, char *argv[]) {

  int input;

  cout << "Enter your favorite number between 1 and 100\n";

  cin >> input;

  cout << "You typed " << input << " as your favorite number" << std::endl;


  return 0;
}