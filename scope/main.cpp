#include <iostream>

using namespace std;

void global_example();
void local_example(int x);
void static_local_example();

int num {300}; // global var - decalred outside any class or function

void static_local_example()
{
    static int num{5000}; // local to static local example - retains its value between calls, but can only be changed locally
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local statuc num is: " << num << " in static_local_example - end" << endl;
}

void global_example()
{
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void local_example(int x)
{
    int num{1000}; // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num = x; // always chooses local over global
    cout << "Local num is: " << num << " in local_example - end" << endl;
    // num1 in main is not within scope - so it can't be used here
}

int main()
{
    int num{100}; // local to main
    int num2{500}; // local to main
    
    cout << "Local num is: " << num << " main" << endl;
    
    { // creates new level of scope
        int num{200}; // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out. num 1 is: " << num2 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    static_local_example();
    static_local_example();
    
}
