#include <iostream>


class Player
{
private:
    std::string name;
    int health;
    int xp;
    
public:
    std::string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    
    // Copy constructor
    Player(const Player &source);
    
    // Destructor
    ~Player() { std::cout << "Destructor being called for: " << name << std::endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val) : name {name_val}, health {health_val}, xp{xp_val} {
    std::cout << "Three args constructor for " + name << std::endl;
}

// when passing by value, a copy needs to be made
Player::Player(const Player &source) : Player {source.name, source.health, source.xp} { // also using constructor delegation to initialize
    std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
}


// pass by value so making a copy within this function.
// to make a copy for this function, the copy constructor above is called
//   and then used here and destroyed once the function ends
void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main()
{
    Player empty {"XXXXX", 100, 50};
    
    // creating a copy of the empty object
    Player my_new_object {empty};
    
    display_player(empty);
    
    Player frank {"Frank"};
    Player hero {"Hero", 100};
    Player villain {"Villain", 100, 55};
    
    return 0;
}

// shallow vs deep copy

// default copy
//     each data member is copied from the source object
//      