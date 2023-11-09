#include "Savings_acc.hpp"

Savings_acc::Savings_acc(std::string Name, double intr)
    : Account(Name), interest(intr){

}

Savings_acc::Savings_acc()
    : Savings_acc("Default savings account"){
};

Savings_acc::Savings_acc(std::string Name)
    : Savings_acc(Name, 0.0){

};



bool Savings_acc::deposit(double amount){
    amount = amount + (amount * interest / 100);
    return Account::deposit(amount);
}

bool Savings_acc::withdraw(double amount){
    return Account::withdraw(amount);
}

Account &Savings_acc::operator += (double amount){
    deposit(amount);
    return *this;
};

bool Savings_acc::set_interest(double intr){
    if (intr < 0){
        std::cout << "Rate cannot be less than 0" << '\n';
        return false;
    }
    interest = intr;
    return true;
}

Savings_acc::~Savings_acc(){

};

void Savings_acc::print(std::ostream &os) const {
    os << "Checking account: " << name << " balance: " << balance << " Interest: " << interest << "%";
}