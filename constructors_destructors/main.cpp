#include <iostream>

// destructors execute when an object is destroyed


class Player
{
private:
    std::string name;
    int health;
    int xp;
    
public:
    void set_name(std::string name_val)
    {
        name = name_val;
    }
    
    // overloaded constructors
    Player()
    {
        std::cout << "No args constructor called" << std::endl;
    }
    
    Player(std::string name)
    {
        std::cout << "String arg constructor called" << std::endl;
    }
    
    Player(std::string name, int health, int xp)
    {
        std::cout << "Three args constructor called" << std::endl;
    }
    
    // destructor
    ~Player()
    {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main()
{
    // using this scope block to automatically call the player's destructor once
    // the player falls out of scope
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    // destructors are called
    delete enemy;
    delete level_boss;
    
    return 0;
}