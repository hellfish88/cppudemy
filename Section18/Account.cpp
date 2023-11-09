#include "Account.hpp"


 
Account::Account(std::string Name, double Balance)
    : name(Name), balance(check_balance(Balance)){
        // if (Balance < 0.0 )
        //     throw IllegalBalanceException();
}



Account::Account(std::string Name)
    : Account(Name, 0.0){
};

Account::Account()
    : Account("Unnamed Account", 0.0){

};


// Account::~Account(){

// };

bool Account::deposit(double amount){
    if (amount <=0)
        return false;
    balance += amount;
    return true;
};

double Account::check_balance(double bal){
    try {
        if (bal < 0.0){
            throw IllegalBalanceException();
        } else {
            return bal;
        }
    } catch (const IllegalBalanceException &ex) {
        std::cerr << ex.what() << std::endl;
        return 0;
    }
}

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


std::string Account::get_name() {
    return name;
}

void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "Balance of " << name << ": " << balance;
}