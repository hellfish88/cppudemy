#include ".\Trust_acc.hpp"
#include <cmath>

Trust_acc::Trust_acc(std::string Name)
    : Savings_acc(Name){

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

Trust_acc &Trust_acc::operator += (double amount){
    deposit(amount);
    return *this;
}