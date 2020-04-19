#include <iostream>
#include "Account.h"


int main()
{
    Account frank_account;
    
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200))
        std::cout << "(2)Deposit OK" << std::endl;
    else
        std::cout << "(2)Deposit not allowed" << std::endl;
        
    if (frank_account.withdraw(500))
        std::cout << "(2)Withdrawal OK" << std::endl;
    else
        std::cout << "(2)Insufficient funds" << std::endl;
        
    if (frank_account.withdraw(1500))
        std::cout << "(2)Withdraw OK" << std::endl;
    else
        std::cout << "(2)Insufficient funds" << std::endl;
    
    return 0;
}
