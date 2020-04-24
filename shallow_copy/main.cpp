#include <iostream>

// THIS CODE CRASHES BECAUSE WE ARE SHALLOW COPYING WHEN WE
//   PASS THE OBJECT BY VALUE. 
// WHAT HAPPENS IS, SINCE THE COPY USES THE SAME MEMORY LOCATION AS THE SOURCE
//   WHEN THE SCOPE OF THE DISPLAY FUNCTION ENDS, THE DESTRUCTOR OF THE COPY IS CALLED
//   AND IT FREES THE MEMORY LOCATION OF THE SOURCE SINCE BOTH THE SOURCE AND COPY HAVE
//   THE SAME MEMORY LOCATION

class Shallow
{
private:
    int *data;
    
public:
    void set_data_value(int d)
    {
        *data = d;
    }
    
    int get_data_value()
    {
        return *data;
    }
    
    // constructor
    Shallow(int d);
    
    // copy constructor
    Shallow(const Shallow &source);
    
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source) : data{source.data} {
    std::cout << "Copy constructor - shallow copy" << std::endl;
}

Shallow::~Shallow()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}

int main()
{
    Shallow obj1{100};
    display_shallow(obj1);
    
    Shallow obj2{obj1};
    obj2.set_data_value(1000);
    
    
    
    return 0;
}
