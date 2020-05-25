#include <iostream>

// be careful using macros (specifically with args) practically
// with macros
//#define MAX(a,b) ((a > b) ? a : b)
//#define SQUARE(a) ((a) * (a)) // the parenthesis help with order of operations
//
//int main()
//{
//  std::cout << MAX(10,20) << std::endl;
//  std::cout << SQUARE(10) << std::endl;
//  std::cout << 100/SQUARE(5) << std::endl;
//  
//  return 0;
//}
template <typename T> // template <class T> is also commonly used they mean the same thing

T min(T a, T b)
{
  return (a < b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b)
{
  std::cout << a << " " << b << std::endl;
}

struct Person
{
  std::string name;
  int age;
  bool operator<(const Person &rhs) const {
    return this->age < rhs.age;
  }
  

};

std::ostream &operator<<(std::ostream &os, const Person &p)
{
  os << p.name;
  return os;
}

template <typename T>
void my_swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}
  
int main()
{
  
  int x{100};
  int y{200};
  
  std::cout << x << "," << y << std::endl;
  my_swap(x,y);
  std::cout << x << "," << y << std::endl;
  
  Person p1 {"Curly", 15};
  Person p2 {"Moe", 30};
  
  Person p3 = min(p1, p2);
  
  std::cout << p3.name << " is younger." << std::endl;
  
  func(p1, p2);
  
  std::cout << min<int>(2,3) << std::endl;
  std::cout << min(2,3) << std::endl; // compiler can deduce the types
  std::cout << min('A', 'B') << std::endl;
  std::cout << min(12.5, 9.8) << std::endl;
  std::cout << min(5+2*2, 7+40) << std::endl;
  
  // to use max with classes, we would need to overload the > operator
  
  func<int, int>(20, 10);
  func(20, 10);
  func<char, double>('A', 12.4);
  func('A', 12.4);
  func(1000, "Testing"); // c-style string
  func(2000, std::string{"Frank"});
  
  return 0;
}