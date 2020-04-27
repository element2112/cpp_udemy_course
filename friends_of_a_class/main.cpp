#include <iostream>

/* FRIENDS OF A CLASS
 * 
 * Friendship must be granted NOT taken
 *  Declared explicityly in the class that is granting friendship
 *  Declared in the function prototype with the keyword friend
 * 
 * Friendship is not symmetric
 *   Must be explicity granted
 *      if A is a friend of B
 *      B is NOT a friend of A
 * 
 * Friendship is not transitive
 *      Must be explicitly granted
 *          If A is a friend of B AND
 *          B is a friend of C
 *          then A is NOT a friend of C
 * 
 * Friendship is not inherited
 */
 
class Other_class
{
    int data;
    int more_data;
    
public:
    void display_player(Player &p)
    {
        std::cout << p.name << std::endl;
        std::cout << p.health << std::endl;
        std::cout << p.xp << std::endl;
    }
};

class Player
{
private:
    std::string name;
    int health;
    int xp;
    friend void display(Player &p);
    friend void Other_class::display_player(Player &p);
    friend class Other_class; // all the methods in Other_class now have access to all data in Player class
};

// can also change these values now
void display(Player &p)
{
    std::cout << p.name << std::endl;
    std::cout << p.health << std::endl;
    std::cout << p.xp << std::endl;
}

int main()
{
    
    
    return 0;
}