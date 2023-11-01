#include "Saving_acc.h"

Saving_acc::Saving_acc()
    : Account(), interest{2.0}{
}

Saving_acc::Saving_acc(std::string vname, double vint)
    : Account(vname), interest(vint) {
}

Saving_acc::Saving_acc(const Saving_acc &src)
    : Account(src), interest(src.interest) {

};

Saving_acc Saving_acc::operator = (const Saving_acc &src){
    if (this == &src)
        return *this;
    Account::operator=(src);
    interest = src.interest;
    return *this;
}

Saving_acc::~Saving_acc(){

};

void Saving_acc::set_name(std::string namn){
    name = namn;
};

void Saving_acc::deposit(double amount){
    amount = amount + (amount * interest / 100);
    Account::deposit(amount);

};

std::ostream &operator << (std::ostream &os, const Saving_acc &src) {
    os << "Saving account balance: " <<  src.balance << 
    return os;
};