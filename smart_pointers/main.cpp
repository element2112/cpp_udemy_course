#include <iostream>
#include <memory>
#include <vector>
#include "I_Printable.h"

// smart pointers are objects
// can only point to heap allocated memory
// automatically calls delete when no longer needed, but can have custom deleters
// cannot do pointer arithmetic on smart pointers


// RAII (Resource Acquisition Is Initialization)
//  - common idiom or pattern used in software design based on container object lifetime
//  - RAII objects are allocated on the stack
/*
 * Resource Acquisition
 *  open a file
 *  allocate memory
 *  acquire a lock
 * 
 * Is Initialization
 *  the resource is acquired in a constructor
 * 
 * 
 * 
 * Resource Relinquishing
 *  Happens in the destructor
 *      close the file
 *      deallocate the memory
 *      release the lock
*/

// unique pointer
// points to an object of type T on the heap
// there can only be one unique_ptr<T> pointing on the object on the heap
// owns what it points to
// cannot be assigned or copied
// CAN be moved
// when the pointer is destroyed, what it points to is automatically destroyed

class Account
{
protected:
    std::string name;
    double bal;
    
public:

    Account(std::string name_v, double b) : name{name_v}, bal{b} {}
    
    virtual void withdraw() const = 0;
    
};

class Checking : public Account
{
public:
    
    Checking() : Account{"default", 0} {}
    
    Checking(std::string name, double bal) : Account(name, bal) {}
    
    void withdraw() const override { std::cout << "In checking: " << bal << " for " << name << std::endl; }
};

class Test
{
private:
    int data;
public:
    Test() : data{0}
    {
        std::cout << "Test constructor (" << data << ")" << std::endl;
    }
    
    Test(int data) : data{data}
    {
        std::cout << "Test constructor (" << data << ")" << std::endl;
    }
    
    int get_data() const { return data; }
    
    ~Test() { std::cout << "Test destructor (" << data << ")" << std::endl; }
};

int main()
{
    
//    Test t1 {1000};
//    
//    Test *t2 = new Test{1000};
//    delete t2;
//
//     unique pointer
//    std::unique_ptr<Test> t1 {new Test{100}};
//    
//    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000);  make_unique method replaces using the "new" keyword in cpp14
//    
//    std::unique_ptr<Test> t3;
//    t3 = t1; will not compile
//
//    t3 = std::move(t1);  can move it, which causes t1 to now be null
//    
//    if (!t1)
//        std::cout << "t1 is null ptr" << std::endl;
//
    std::unique_ptr<Account> a1 = std::make_unique<Checking>("Moe", 5000);
//    std::cout << *a1 << std::endl;

    std::vector<std::unique_ptr<Account>> accounts; // a vector of unique pointers
    
    accounts.push_back(std::make_unique<Checking>("James", 1000));
    accounts.push_back(std::make_unique<Checking>("Billy", 1000));
    accounts.push_back(std::make_unique<Checking>("Bobby", 1000));
    
    for (const auto &v : accounts)
        v->withdraw();
    
    return 0;
}