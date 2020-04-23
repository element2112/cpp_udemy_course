#include <iostream>
#include <vector>
// int x {100};     x is an l-value
// void func(int &num);  // &num is an l-value ref
// func(x); // x is an l-value and &num is an l-value ref so this works
// func(200); // 200 is an r-value and func only takes l-value so does not work

// int x{100}; // x is an l-value
// void func(int &&num); 
// func(200); func only accepts r-values so this works
// func(x); x is an l-value and func only takes r-values so this does not compile

// can overload for r-values and l-values

// int x {100};
// void func(int &num);
// void func(int &&num);
// func(x); works
// func(200); works

// Move Constructor
//  instead of making a deep copy of the constructor it "moves" the resource. It
//  copies the address of the resource from source to the current object and nulls out
//  the pointer in the source pointer. Its very efficient because if you're doing a lot
//  of deep copies, then theres a bunch of memory being created and destroyed


class Move
{
private:
    int *data;
    
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    
    Move(int d); // constructor
    Move(const Move &source); // copy constructor
    Move(Move &&source); // Move constructor
    ~Move(); // Destructor
};

// "steals" the data and then nulls out the source pointer
Move::Move(Move &&source) : data{source.data} {
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *data << std::endl;
}

Move::Move(const Move &source) : Move(*source.data)
{
    std::cout << "Copy constructor - deep copy for: " << *data << std::endl;
}

Move::Move(int d)
{
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}

Move::~Move()
{
    if (data != nullptr)
    {
        std::cout << "Destructor freeing data for: " << *data << std::endl;
    }
    else
    {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    
    delete data;
}

int main()
{
    std::vector<Move> vec;
    
    // Move constructors will be called for the temp r-values
    vec.push_back(Move{10}); // Move is an r-value here. Theres no variable name, so its a temporary object
    
    vec.push_back(Move{20}); // Move is an r-value here. Theres no variable name, so its a temporary object
    vec.push_back(Move{30}); // Move is an r-value here. Theres no variable name, so its a temporary object
    vec.push_back(Move{40}); // Move is an r-value here. Theres no variable name, so its a temporary object
    vec.push_back(Move{50}); // Move is an r-value here. Theres no variable name, so its a temporary object
    vec.push_back(Move{60}); // Move is an r-value here. Theres no variable name, so its a temporary object
    vec.push_back(Move{70}); // Move is an r-value here. Theres no variable name, so its a temporary object
    vec.push_back(Move{80}); // Move is an r-value here. Theres no variable name, so its a temporary object
    
    return 0;
}
