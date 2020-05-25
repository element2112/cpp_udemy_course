#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/* MAIN ELEMENTS OF STL
 * containers 
 *  (array, vector, deque, stack, set, map, etc)
 * 
 * algorithms
 *   (find, max, count, accumulate, sort, etc.)
 * 
 * iterators
 *   (forware, reverse, by value, by reference, constant, etc.)
 */
 
int main()
{
  std::vector<int> vec{3,5,4};
  
  std::sort(vec.begin(), vec.end());
  for (auto elem : vec)
    std::cout << elem << std::endl;
    
  std::cout << std::endl;
  
  std::reverse(vec.begin(), vec.end());
  for (auto v : vec)
    std::cout << v << std::endl;
  
  int sum{};
  
  sum = std::accumulate(vec.begin(), vec.end(), 0); // starting at 0, (for doubles 0.0)
  std::cout << "sum: " << sum << std::endl;
  
  return 0;
}