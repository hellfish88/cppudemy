#include "Account.hpp"

Account::Account(std::string Name, double Balance)
    : name(Name), balance(Balance){

};

Account::Account(std::string Name)
    : Account(Name, 0.0){
};

Account::Account()
    : Account("Unnamed Account", 0.0){

};


Account::~Account(){

};

bool Account::deposit(double amount){
    if (amount <=0)
        return false;
    balance += amount;
    return true;
};


bool Account::withdraw(double amount){
    if (balance < amount){
        std::cout << "Insufficiant funds" << '\n';
        return false;
    }
    balance -= amount;
    std::cout << "Withdrew " << amount << " from " << name << '\n';
    return true;
}

Account &Account::operator += (double amount){
    deposit(amount);
    return *this;
}

Account &Account::operator -= (double amount){
    withdraw(amount);
    return *this;
}

// std::ostream &operator << (std::ostream &os, const Account &acc){
//     os << "Balance of " << acc.name << ": " << acc.balance;
//     return os;
// }

void Account::print(std::ostream &os) const {
    os << "Balance of " << name << ": " << balance;
}