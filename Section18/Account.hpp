#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <iostream>
#include <string>
#include "I_Printable.hpp"
#include "IllegalBalanceException.hpp"

// Normal account. Name and balance
class Account : public I_Printable, IllegalBalanceException {
    // friend std::ostream &operator << (std::ostream&, const Account&);
    private:
        double check_balance(double);
    protected:
        double balance;
        std::string name;
    public:
        Account();
        Account(std::string, double balance);
        Account(std::string);
        virtual ~Account() = default;
        virtual bool withdraw(double) = 0;
        virtual bool deposit(double) = 0;
        Account &operator += (double);
        Account &operator -= (double);
        virtual std::string get_name();
        virtual void print(std::ostream&) const override;
};


#endif