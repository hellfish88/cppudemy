#include "String.hpp"



int main() {

    String test{"NEJj"};
    String test2{"BAJS"};

    // test2 = test;

    // String test3{test2};

    // test2 = -test;

    if (test < test2)
        std::cout << "< fungerar" << std::endl;
    
    // std::cin >> test;

    test *=2;

    std::cout << test << std::endl;

    return 0;
}