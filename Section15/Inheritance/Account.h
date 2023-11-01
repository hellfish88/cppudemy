#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include <iostream>
#include <string>

class Account{
    protected:
        double balance;
        std::string name;
    private:        

    public:

    // constructors
        Account();
        Account(std::string);
        Account(const Account&);
    // operators
        Account &operator = (const Account&);
    // destructor
        ~Account();
    // Functions
        bool withdraw(size_t);
        bool deposit(size_t);
        double get_balance();

};


#endif