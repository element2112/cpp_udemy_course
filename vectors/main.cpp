#include <iostream>
#include <vector>
using namespace std;

// a vector is just a dynamic array like an arraylist
// vectors are an object

int main()
{
    vector <char> vowels;
    
    vector <int> test_scores {100, 95, 99, 87, 88};
    
    vector <char> more_vowels (5); // constructor initialization. initalizing arraylist to 5
    
    vector <char> some_vowels {'a', 'e', 'i', 'o', 'u'};
    
    vector <double> hi_temps (365, 90.5); // 365 indicies and initializing them all to 90.5
    
    
    cout << "First score: " << test_scores[0] << endl;
    cout << "Second score: " << test_scores[1] << endl;
    
    // etc etc
    
    cout << "First score " << test_scores.at(0) << endl;
    cout << "Second score " << test_scores.at(1) << endl;
    cout << "Third score " << test_scores.at(2) << endl;
    
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
//    cin >> test_scores.at(2);
//    cin >> test_scores.at(3);
//    cin >> test_scores.at(4);
    test_scores.push_back(80);
    test_scores.push_back(100);
    cout << test_scores.at(5) << endl;
    cout << test_scores.at(6) << endl;
    
    cout << "Size of vector: " << test_scores.size() << endl;
    
    for (int i = 0; i < test_scores.size(); i++)
    {
        if (test_scores.at(i) < 50)
            test_scores.push_back(70);
            
        cout << "Score: " << test_scores.at(i) << endl;
    
    }
    
    // 2D vector (vector of vectors)
    vector <vector<int>> my_vect
    {
        {1,2,3,4},
        {5,6,7,8,9},
        {10, 11, 12}
    };
    
    int n = my_vect.size();
    
    for (int i = 0; i < n; i++)
    {
        int k = my_vect.at(i).size();
        
        for (int j = 0; j < k; j++)
        {
            cout << "Element: " << my_vect.at(i).at(j) << endl;
        }
    }
    
}