#include <iostream>
#include <iomanip>
#include <string>


void ruler(){
    std::cout << "\n12345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}


int main () {

    int num = 1234;
    double num2 = 1234567.890;
    std::string str{"Hejsan"};
    int num3 = 1;
    int num4 = 2;
    int num5 = 3;



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
    // std::cout << std::fixed;
    // std::cout << std::setprecision(4);
    // std::cout << std::showpoint;
    // std::cout << num2 << std::endl;
    // std::cout << std::setprecision(3) << num2 << std::endl;
    // std::cout << num2 << std::endl;

    std::cout << std::setprecision(2) << std::fixed << std::setfill('-');
    ruler();
    std::cout << std::setw(15) << num3 << std::setw(10)<< num4 << num5 << std::endl;

    return 0;
}
