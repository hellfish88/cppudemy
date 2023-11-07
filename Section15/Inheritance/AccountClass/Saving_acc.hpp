#ifndef _SAVING_ACC_HPP_
#define _SAVING_ACC_HPP_
#include "Account.hpp"


class Saving_acc : public Account {
    // friend 
    protected:
        
    public:
        double interest;
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
        friend std::ostream &operator << (std::ostream&, Saving_acc&);
};

#endif