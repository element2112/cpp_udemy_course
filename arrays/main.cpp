#include <iostream>

using namespace std;

int main()
{
    int test_scores [5] {100,95,99,87,88};
    
    int high_score_per_level [10]{3,5}; // remaining 8 are initialized to 0
    
    const int days_in_year {365};
    
    double hi_temps [days_in_year]{0}; // init all to 0
    
    int another_array [] {1,2,3,4}; // size automatically calculated
    
//    cout << "Pointer to array " << another_array << endl;
    
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols];
    
    cout << "enter a rating\n";
    cin >> movie_rating[1][2];
    cout << "you entered " << movie_rating[1][2] << endl;
    
}