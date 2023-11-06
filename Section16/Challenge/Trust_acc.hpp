#ifndef _TRUST_ACC_HPP_
#define _TRUST_ACC_HPP_
#include "Savings_acc.hpp"
// #include "I_Printable.hpp"

// Savings account with a $50 bonus to deposits > 50k
class Trust_acc : public Savings_acc {
    private:
        double bonus{50};
        int withhdrawals;
    protected:

    public:
        Trust_acc();
        Trust_acc(std::string);
        ~Trust_acc();
        bool deposit(double);
        bool withdraw(double);
        Trust_acc &operator += (double);
        Trust_acc &operator -= (double);
        // virtual void print(std::ostream &os) const override;

};


#endif