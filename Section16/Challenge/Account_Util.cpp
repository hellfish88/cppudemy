#include "Account_Util.hpp"


void display(const std::vector<Account*> &accounts) {
    if (accounts.empty()){
        std::cout << "Array is empty" << std::endl;
    }  else{
        for (const auto account : accounts){
            std::cout << *account << '\n';
            // account->deposit(2000);
        }

    }
}


void deposit(std::vector<Account*> &accounts, double amount) {
    if (accounts.empty()){
        std::cout << "Array is empty" << std::endl;
    }  else{
        for (auto account : accounts){
            account->deposit(amount);
        }
    }
}

void withdraw(std::vector<Account*> &accounts, double amount) {
    if (accounts.empty()){
        std::cout << "Array is empty" << std::endl;
    }  else{
        for (auto account : accounts){
            account->withdraw(amount);
        }
    }
}


void withdraw(std::vector<Account*> &accounts);