#include <iostream>
#include <iomanip>

int main () {

    int num = 0;
    double num2 = 1234567.789;

    // std::cout.setf(std::ios::boolalpha);
    // std::cout << (10 == 10) << std::endl;

    // std::cout << std::noboolalpha;

    // std::cout << (10 == 10) << std::endl;

    // std::cout << std::showbase << std::uppercase << std::showpos;
    // std::cout << num << std::endl;
    // std::cout << std::hex << num << std::endl;
    // std::cout << std::oct << num << std::endl;

    // std::cout << std::resetiosflags(std::ios::showpos);
    // std::cout << std::resetiosflags(std::ios::oct);

    // std::cout << num << std::endl;
    // std::cout << std::hex << num << std::endl;
    // std::cout << std::oct << num << std::endl;
    std::cout << std::fixed;
    // std::cout << std::setprecision(4);
    // std::cout << std::showpoint;
    std::cout << num2 << std::endl;
    std::cout << std::setprecision(3) << num2 << std::endl;
    std::cout << num2 << std::endl;
    return 0;
}
