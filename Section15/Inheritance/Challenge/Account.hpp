#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <iostream>
#include <string>

// Normal account. Name and balance
class Account {
    friend std::ostream &operator << (std::ostream&, const Account&);
    private:

    protected:
        double balance;
        std::string name;
    public:
        Account();
        Account(std::string, double balance);
        Account(std::string);
        ~Account();
        bool withdraw(double);
        bool deposit(double);
        Account &operator += (double);
        Account &operator -= (double);





};


#endif