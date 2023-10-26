#include "Mystring.hpp"

int main(){
    // Mystring tom;
    // Mystring fisk{"fisk"};
    // Mystring fisk2{fisk};

    // Mystring a{"hej"};
    // Mystring b{" hoppsan"};
    // a = Mystring{"Nej"};
    // a = "Bajs";

    // a = a.operator+(b);
    // a = a.operator-();
    // tom.display();
    // fisk.display();
    // fisk2.display();
    
    // std::cout << a << std::endl;
    // a.display();


    Mystring larry{"Larry"};
    larry.display();

    larry = -larry;

    larry.display();
    std::cout << larry << std::endl;
    return 0;
}