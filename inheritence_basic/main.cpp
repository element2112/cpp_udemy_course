#include <iostream>
#include "Account.h"
#include "Savings_Account.h"


int main()
{
    std::cout << "\n============ACCOUNT===================\n";
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    
    std::cout << std::endl;
    
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    
    
    std::cout << "\n===========SAVINGS ACCOUNT================\n";
    
    Savings_Account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    
    std::cout << std::endl;
    
    Savings_Account *p_sav {nullptr};
    p_sav = new Savings_Account();
    p_sav->deposit(1000.0);
    p_sav->withdraw(500.0);
    delete p_sav;
    
    std::cout << "\n===================================\n";
    return 0;
}