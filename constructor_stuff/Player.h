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
//    Player(); // just an FYI you can implement these here in .h file
//    Player(std::string name_val);

    // this single default constructor does the work for several constructors
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    void set_name(std::string name_val);
    std::string get_name();
};

#endif // PLAYER_H
