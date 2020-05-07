#include <iostream>
#include "Account.h"

Account::Account() : balance{0.0}, name{"An account"}
{
}

Account::~Account()
{
}

void Account::deposit(double amount)
{
    std::cout << "Account depost called with " << amount << std::endl;
}

void Account::withdraw(double amount)
{
    std::cout << "Account withdraw called with " << amount << std::endl;
}

