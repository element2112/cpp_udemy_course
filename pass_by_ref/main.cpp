#include <iostream>
#include <vector>
#include <pass_by.h>

using namespace std;

void swap(int &a, int &b);

void print(const vector <int> &v);

int main()
{
        int x {10}, y {20};
        cout << x << " " << y << endl;
        swap(x, y);
        cout << x << " " << y << endl;
        
        vector<int> data {1,2,3,4,5};
        print(data);
        
        ref_example();
        
        return 0;
}

void print(const vector<int> &v)
{
    for (auto num : v)
        cout << num << endl;
}

void swap(int &a, int &b) // reference params
{
    int temp = a;
    a = b;
    b = temp;
}