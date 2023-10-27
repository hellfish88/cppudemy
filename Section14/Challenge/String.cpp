#include "String.hpp"

bool debug = true;

String::String()
    : str(nullptr){
    str = new char[1];
    *str = '\0';
    if(debug)
        std::cout << "Empty constructor called" << '\n';
}

String::String(const char *a)
    :str(nullptr){
        if (str == nullptr){
            str = new char[1];
            *str = '\0';
        }
        str = new char[std::strlen(a) +1 ];
        std::strcpy(str, a);
        if (debug)
            std::cout << "Constant char constructor called for " << str << '\n';
}



std::ostream &operator<<(std::ostream &os, const String &rhs){
    os << rhs.str;
    return os;
}

// std::istream &operator>>(std::istream &in, String& rhs){
//     char *buff = new char[1111];
//     in >> buff;
//     rhs = String{buff};
//     delete [] buff;
// }