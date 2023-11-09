#ifndef _CHECKINGS_ACCOUNT_HPP_
#define _CHECKINGS_ACCOUNT_HPP_
#include "Account.hpp"

// Normal account with a fee of 1.50 per withdrwawal

class Checkings_acc : public Account {
    private:
        double const fee{1.50};
    protected:
        
    public:
        Checkings_acc();
        Checkings_acc(std::string);
        Checkings_acc(std::string, double);
        virtual ~Checkings_acc();
        virtual bool withdraw(double) override;
        virtual bool deposit(double) override;
        Checkings_acc &operator -= (double);

};


#endif