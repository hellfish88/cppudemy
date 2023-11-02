#ifndef _TRUST_ACC_HPP_
#define _TRUST_ACC_HPP_
#include ".\Savings_acc.hpp"


// Savings account with a $50 bonus to deposits > 50k
class Trust_acc : public Savings_acc {
    private:
        double bonus{50};
    protected:

    public:
        Trust_acc();
        Trust_acc(std::string);
        ~Trust_acc();
        bool deposit(double);
        Trust_acc &operator += (double);

};


#endif