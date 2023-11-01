#ifndef _SAVING_ACC_HPP_
#define _SAVING_ACC_HPP_
#include "Account.h"


class Saving_acc : public Account {
    friend std::ostream &operator << (std::ostream&, Saving_acc&);
    protected:
        double interest;
    public:
        // Constructor
        Saving_acc();
        Saving_acc(std::string vname, double vint);
        Saving_acc(const Saving_acc&); //Copy Constructor
        Saving_acc operator = (const Saving_acc&);
        // Destructor
        ~Saving_acc();

        // operators
        void set_name(std::string);

        // Functions
        void deposit(double);

};

#endif