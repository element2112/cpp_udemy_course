#include "Player.h"

//Player::Player()
//{
//    name = "None";
//    health = 100;
//    xp = 3;
//}
//

Player::Player(std::string name_val)
{
    name = name_val;
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val)
{
    name = name_val;
    health = health_val;
    xp = xp_val;
}

void Player::set_name(std::string name_val)
{
    name = name_val;
}

std::string Player::get_name()
{
    return name;
}