#ifndef SAVING_ACC.HPP
#define SAVING_ACC.HPP
#include "Account.h"


class Saving_acc : public Account {
    private:
        double interest;
    public:
        // Constructor
        Saving_acc();
        Saving_acc(std::string vname, double vint);
        // Destructor
        ~Saving_acc();

};

#endif