#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

template < typename Z>
    Z dubbla(Z a, Z b){
        return a+b;
    };


std::vector<std::string> strings {"Hejsan", "Hoppsan", "Fisk", "gris", "bahs"};



int main () {

    
    if (std::all_of(strings.begin(), strings.end(), [](std::string x) {return x.empty(); })) {
        std::cout << "All strings set" << std::endl;
    }

    auto loc = strings.begin();

    // while (loc != strings.end()) {
    //     std::cout << *loc << std::endl;
    //     loc++;
    // }

    std::for_each(strings.begin(), strings.end(), [](const std::string &x){ 
        std::cout << x << std::endl;
    });
    
    // int a = 15;
    // int b = 20;


    std::string a = "a";
    std::string b = "b";
    std::cout << dubbla(a, b) << std::endl; 

    return 0;
}