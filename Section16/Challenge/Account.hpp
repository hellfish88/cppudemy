#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <iostream>
#include <string>
#include "I_Printable.hpp"

// Normal account. Name and balance
class Account : public I_Printable {
    // friend std::ostream &operator << (std::ostream&, const Account&);
    private:

    protected:
        double balance;
        std::string name;
    public:
        Account();
        Account(std::string, double balance);
        Account(std::string);
        ~Account();
        virtual bool withdraw(double) = 0;
        virtual bool deposit(double) = 0;
        Account &operator += (double);
        Account &operator -= (double);
        virtual std::string get_name();
        virtual void print(std::ostream&) const override;





};


#endif