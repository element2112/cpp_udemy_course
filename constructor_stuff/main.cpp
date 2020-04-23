#include <iostream>
#include "Player.h"
#include <string>


int main()
{
    
    Player frank;
    frank.set_name("Frank");
    std::cout << frank.get_name() << std::endl;
    
    Player lisa {"Lisa", 100, 13};
    std::cout << lisa.get_name() << std::endl;
    
    Player hero{"Hero"};
    
    Player *enemy = new Player("Enemy", 1000, 0);
    delete enemy;
    
    return 0;
}