#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
    string name;
    int health;
    int xp;

    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();
    
};

class Account
{
public:
  string name {"Account"};
  double balance{0.0};
  
  bool deposit(double bal) { balance += bal; cout << "In deposit" << endl;};
  bool withdraw(double bal) { balance -= bal; cout << "In withrawel" << endl;};
  
};

int main()
{
    Account *frank_account = new Account;
    frank_account->name = "Frank's account";
    frank_account->balance = 5000.00;
    
    frank_account->deposit(1000.0);
    frank_account->withdraw(500);
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hi there");
    
    Player *enemy = new Player;
    
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    
    return 0;
}
