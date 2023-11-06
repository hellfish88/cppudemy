#ifndef _SAVINGS_ACC_HPP_
#define _SAVINGS_acc_HPP_
#include "Account.hpp"


// Savings account with Account + interest rate 
class Savings_acc : public Account {
    private:

    protected:
        double interest;
    public:
    Savings_acc(std::string, double);
    Savings_acc(std::string);
    Savings_acc();
    ~Savings_acc();
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
    Account &operator += (double);
    bool set_interest(double);
    virtual void print(std::ostream &os) const override;

};


#endif