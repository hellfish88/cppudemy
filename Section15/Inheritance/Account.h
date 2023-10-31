#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
#include <string>

class Account{
    private:

    public:
        double balance;
        std::string name;
    // constructors
        Account();
        Account(std::string);
    // destructor
        ~Account();
    // Functions
        bool withdraw(size_t);
        bool deposit(size_t);
        double get_balance();




};


#endif