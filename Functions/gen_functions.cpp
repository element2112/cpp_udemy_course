#include <iostream>
#include <function_stuff.h>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

const double pi = 3.14159;

double calc_volume_cylinder(double, double);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();
void greeting(string name, string prefix = "Mr.", string suffix = "");
int add_numbers(int, int);
double add_numbers(double, double);
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

// using default arguments. Whenever you START using a default argument, all the ones on the 
// tail end must also be default arguments 
// for ex: double calc_cost(double base_cost = 100.0, double tax_rate, double shipping = 3.50); WILL NOT WORK
// yet double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50); // WILL WORK

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);



void run_gen_function()
{
//    area_circle();
//    volume_cylinder();

    // default args
//    double cost {0};
//    cost = calc_cost(105.0, 0.09, 4.25); // will use no defaults
//    cost = calc_cost(105.0, 0.09); // will use default shipping only
//    cost = calc_cost(200.0); // will use default base cost, tax, and shipping
//    cost = calc_cost(); // will use ALL defaults
//    
//    greeting("Glenn Jones", "Dr.", "M.D.");
//    greeting("James Rogers", "Professor", "Ph.D");
//    greeting("Frank Miller", "Dr.");
//    greeting("William Smith");
//    greeting("Mary Howard", "Mrs.", "Ph.D.");
    
    // overloading
    print(100);
    print('A');
    
    print(123.5); // double
    print(123.3F); // no float overloaded function so float is promoted to double
    
    print("C-style string (array of chars)"); // C-style string is converted to a C++ string object
    
    string s {"C++ string"}; // cpp style string object
    
    print("C-style string", s); // first arg is converted to a cpp string
    
    vector <string> stooges {"Larry", "Moe", "Curly"};
    print(stooges);
    
}

//******************** OVERLAODING ********************************//
void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(vector <string> v)
{
    cout << "Printing vector of strings: ";
    for (auto s : v)
        cout << s + " ";
        
    cout << endl;
}

void print(string s, string t)
{
    cout << "Printing 2 strings " << s << " and " << t << endl;
}


int add_numbers(int a, int b)
{
    return a + b;
}

double add_numbers(double a, double b)
{
    return a + b;
}

//**************************DEFAULT ARGS*******************************//

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}



double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

double calc_area_circle(double radius)
{
    return pi * radius *radius;
}

void area_circle()
{
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}



void volume_cylinder()
{
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}