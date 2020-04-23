#include <iostream>

class Deep
{
private:
    int *data;
    
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    Deep(int d); // constructor
    Deep(const Deep &source); // copy constructor
    ~Deep(); // destructor
};

Deep::Deep(int d)
{
    data = new int; // allocate storage
    *data = d;
}

Deep::~Deep()
{
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

// delegating constructor (same as commented code below)
Deep::Deep(const Deep &source) : Deep{*source.data} {
    std::cout << "Copy constructor - deep" << std::endl;
}

//Deep::Deep(const Deep &source)
//{
//    data = new int; // allocate storage for the copy
//    *data = *source.data; // deref the source object data and place into copy version of data
//    std::cout << "Copy constructor - deep" << std::endl;
//}

void display_deep(Deep s)
{
    std::cout << s.get_data_value() << std::endl;
}

int main()
{
    
    Deep obj1{100};
    display_deep(obj1);
    
    Deep obj2{obj1};
    
    obj2.set_data_value(1000);
    
    display_deep(obj2);
    
    return 0;
}