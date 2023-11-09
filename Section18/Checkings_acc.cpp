#include "Checkings_acc.hpp"

Checkings_acc::Checkings_acc(std::string Name)
    : Account(Name){

};

Checkings_acc::Checkings_acc(std::string Name, double bal)
    : Account(Name, bal){

};

Checkings_acc::Checkings_acc()
    : Checkings_acc("Default checkings account"){

};

Checkings_acc::~Checkings_acc(){

};

bool Checkings_acc::withdraw(double amount){
    amount += fee;
    return Account::withdraw(amount);
}

bool Checkings_acc::deposit(double amount){
    return Account::deposit(amount);
}

Checkings_acc &Checkings_acc::operator -= (double amount) {
    Checkings_acc::withdraw(amount);
    return *this;
};

