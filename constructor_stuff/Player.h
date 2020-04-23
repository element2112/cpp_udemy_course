#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
    
private:
    std::string name;
    int health;
    int xp;
    
public:
    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
    void set_name(std::string name_val);
    std::string get_name();
};

#endif // PLAYER_H
