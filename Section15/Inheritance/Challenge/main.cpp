#include ".\Checkings_acc.hpp"
#include ".\Trust_acc.hpp"

int main(){

    Account test1;
    test1.deposit(100);

    Savings_acc test2{"hejsan"};
    Checkings_acc test3;
    Trust_acc test4{"Förtroendekonto"};
    test4.set_interest(5);
    test4 += 49999;
    test4 += 100001;
    test4 += 99999;
    test4 -= 50;
    test4 -= 100;
    test4 -= 100;
    test4 -= 100;

    test2.deposit(100);
    test2.withdraw(99);

    test2 += 15;
    test2.set_interest(15);
    test2 += 2200;
    test2 -= 55;
    test2 -= 200;

        std::cout << test1 << std::endl;
    std::cout << test2 << std::endl;
    std::cout << test3 << std::endl;
    std::cout << test4 << std::endl;
    return 0;
}