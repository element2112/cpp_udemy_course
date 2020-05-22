#include <iostream>
#include <memory>

class B; // forward declaration (kind of like a function prototype for classes) so A can see it to simulate the circlular pointer ref

class A
{
    std::shared_ptr<B> b_ptr;
public:
    void set_B(std::shared_ptr<B> &b)
    {
        b_ptr = b;
    }
    
    A() { std::cout << "A Constructor" << std::endl; }
    ~A() { std::cout << "A Destructor" << std::endl; }
};

class B
{
    std::weak_ptr<A> a_ptr; // made a weak ptr
public:
    void set_A(std::shared_ptr<A> &a)
    {
        a_ptr = a;
    }
    
    B() { std::cout << "B constructor" << std::endl; }
    ~B() { std::cout << "B Destructor" << std::endl; }
};

int main()
{
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->set_B(b);
    b->set_A(a);
    
    return 0;
}