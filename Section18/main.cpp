#include "Checkings_acc.hpp"
#include "Trust_acc.hpp"
#include "Account_Util.hpp"
#include <memory>

int main(){

 
    // Account *test1 = new Checkings_acc{"Checking Account"};
    // Account *test2 = new Savings_acc{"Savings acc"};
    // Account *test3 = new Trust_acc{"Trust acc"};

    std::unique_ptr<Account> test1 = std::make_unique<Checkings_acc>("Testkonto", -15);


    // Account test1 = new Savings_acc();
    test1->deposit(10000);

    // test1->deposit(100);
    // test2->deposit(200);
    // test3->deposit(300);

    Checkings_acc test4;
    Savings_acc test5;
    Trust_acc test6;

    
    std::vector<std::unique_ptr<Account>> Accounts{};
    // std::vector<Account*> Accounts2{};

    // display(Accounts);
    // display(Accounts);
    // deposit(Accounts, 200);
    // withdraw(Accounts, 100);
    // delete test1;
    // delete test2;
    // delete test3;

    return 0;   
}