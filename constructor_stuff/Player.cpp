#include <iostream>
#include "Player.h"





// delegating constructors (prevents repeated code with initialization)
// this only works with initialization lists
//This is basically calling the 3 args constructor to initialize

//Player::Player() : Player {"None", 0, 0} {
//    std::cout << "No-args constructor" << std::endl;
//}
//
//Player::Player(std::string name_val) : Player {name_val, 0, 0} {
//    std::cout << "one arg constructor" << std::endl;
//}
//
//// obviously doesn't need to delegate to anything because its the 3 param constructor
Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {
    std::cout << "three args constructor" << std::endl;
}



/* using constructor initialization lists. initializes before object is created */

//Player::Player() : name{"None"}, health{0}, xp{0} {
//}
//
//Player::Player(std::string name_val) : name{name_val}, health{0}, xp{0} {
//}
//
//Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{0}, xp{0} {
//}

/* old way below. It creates an object and then changes that object */

//Player::Player(std::string name_val)
//{
//    name = name_val;
//    health = 0;
//    xp = 0;
//}

//Player::Player(std::string name_val, int health_val, int xp_val)
//{
//    name = name_val;
//    health = health_val;
//    xp = xp_val;
//}

void Player::set_name(std::string name_val)
{
    name = name_val;
}

std::string Player::get_name()
{
    return name;
}