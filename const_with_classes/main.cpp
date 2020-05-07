#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;
    
public:
    Player(std::string name = "None", int health = 0, int xp = 0);
    
    // - adding const tells the compiler that this method does not change the object so that we can
    //   call this method from a read-only object.
    // - rule of thumb is that all methods that don't modify the object (ex. getters)
    //   should be const
    std::string get_name() const { return name; } 
    
    void set_name(std::string name_val) { name = name_val; }
   
};

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val},  xp{xp_val} {
}

void display_player_name(const Player &p)
{
    std::cout << p.get_name() << std::endl;
}

int main()
{
    const Player villain{"Villain", 100, 55};
    Player hero{"Hero", 100, 15};
    
    std::cout << villain.get_name() << std::endl;
    std::cout << hero.get_name() << std::endl;
    

    display_player_name(villain);
    display_player_name(hero);
    
    return 0;
}