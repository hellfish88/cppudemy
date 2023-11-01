#include <iostream>
#include "Account.h"
#include "Saving_acc.h"
int main(){


    Saving_acc ulf;
    ulf.deposit(100);
    ulf.withdraw(15);
    std::cout << ulf.get_balance() << std::endl;

    Saving_acc* kanya = nullptr;
    kanya = new Saving_acc;

    kanya->deposit(200);
    kanya->withdraw(201); 
    Saving_acc bosse;

    Saving_acc kanya2{*kanya};

    ulf = kanya2;
    
    // bosse.set_name("bosse");
    delete kanya;

    return 0;
}