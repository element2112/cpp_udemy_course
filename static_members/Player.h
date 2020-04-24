#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
private:
    std::string name;
    static int num_players;
    int health;
    int xp;
public:

    std::string get_name() { return name; }
    int get_health() { return health; }
    
    // constructor
    Player(std::string name = "None", int health = 0, int xp = 0);
    // copy constructor
    Player(const Player &source);
    // Destructor
    ~Player();
    
    static int get_num_players(); // only has access to static variables

};

#endif // PLAYER_H
