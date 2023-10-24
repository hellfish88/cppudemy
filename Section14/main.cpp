#include "Mystring.hpp"

int main(){
    Mystring tom;
    Mystring fisk{"fisk"};
    Mystring fisk2{fisk};

    tom.display();
    fisk.display();
    fisk2.display();
    
    return 0;
}