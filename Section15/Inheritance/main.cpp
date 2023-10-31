#include <iostream>
#include "Account.h"

int main(){


    Account ulf;
    ulf.deposit(100);
    ulf.withdraw(15);
    std::cout << ulf.get_balance() << std::endl;

    return 0;
}