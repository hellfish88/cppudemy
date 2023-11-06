#include "Trust_acc.hpp"
#include <cmath>

Trust_acc::Trust_acc(std::string Name)
    : Savings_acc(Name), withhdrawals(0){

};


Trust_acc::Trust_acc()
    : Trust_acc("Default trust account"){

};

Trust_acc::~Trust_acc(){

};

bool Trust_acc::deposit(double amount){
    int bonus_multiple = std::floor(amount / 50000);
    amount += bonus * bonus_multiple;
    
    return Savings_acc::deposit(amount);
    
};

bool Trust_acc::withdraw(double amount){
    if (withhdrawals >= 3){
        return false;
    }
    withhdrawals++;
    return Savings_acc::withdraw(amount);

};

Trust_acc &Trust_acc::operator += (double amount){
    deposit(amount);
    return *this;
}
Trust_acc &Trust_acc::operator -= (double amount){
    withdraw(amount);
    return *this;
}

void Trust_acc::print(std::ostream &os) const {
    os << "Trust account: " << name << " balance: " << balance << '\n' << "Interest: " << interest << "%";
}