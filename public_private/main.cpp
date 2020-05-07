#include <iostream>


class Player {
private:
    std::string name{"Player"};
    int health;
    int xp;
    
public:
    void talk(std::string text) { std::cout << name << " says " << text << std::endl; }
    bool is_dead() { return (health <= 0) ? 1 : 0; }
};



int main()
{
    
    Player frank;
    frank.talk("hello there");

    return 0;
}
