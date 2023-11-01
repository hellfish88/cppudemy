#include "Account.hpp"



// Default constructor
Account::Account()
    : balance{0.0}, name{"Default account"} {
    
}

Account::Account(std::string n)
    :  balance{0.0}, name{n}{

}

Account::Account(const Account& src)
    : balance(src.balance), name("Copy of " + src.name){
}

Account &Account::operator = (const Account &src){
    if (this == &src)
        return *this;
    balance = src.balance;
    return *this;
}

// Defauly destructor
Account::~Account(){

}

bool Account::withdraw(size_t moneyz){
    if (balance > moneyz){
        balance -= moneyz;
        std::cout << moneyz << " withthdrawn from account" << '\n';
        return true;
    } else {
        std::cout << "Balance too low" << '\n';
        return false;
    }
}

bool Account::deposit(size_t moneyz){
    balance+=moneyz;
    return true;
}

double Account::get_balance(){
    return balance;
}

