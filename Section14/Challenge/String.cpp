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
    :str{nullptr}{
        if (a == nullptr){
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(a) +1 ];
            std::strcpy(str, a);
        }
        if (debug)
            std::cout << "Constant char constructor called for " <<      a << '\n';
}

String::String(const String &rhs){
    if (rhs.str == nullptr){
        str = new char[1];
        *str = '\0';
    }
    this->str = new char[std::strlen(rhs.str) +1];
    std::strcpy(str, rhs.str);

    if (debug)
        std::cout << "Copy constructor for " << rhs.str << '\n';
}

String &String::operator=(String &&src){
    if (this == &src)
        return *this;
    delete [] this->str;
    this->str = src.str;
    src.str = nullptr;
    if (debug)
        std::cout << "Move assignment for " << this->str << "called" << '\n';
    return *this;

}

// Copy operator

String &String::operator=(const String &rhs){
    if (this == &rhs)
        return *this;
    delete [] this->str;
    this->str = new char[std::strlen(rhs.str) +1];
    std::strcpy(this->str, rhs.str);
    if (debug)
        std::cout << "Copy operator called for " << this->str << '\n';
    return *this;
}
 

// Operators

// make lowercase
String operator - (const String &obj) {
    char *buff = new char [std::strlen(obj.str) +1];
    std::strcpy(buff, obj.str);
    for (size_t i{0}; i < std::strlen(obj.str); i++){
        buff[i] = tolower(buff[i]);
    }
    String tmp{buff};
    delete [] buff;
    return tmp;
}

// concat
String operator + (const String &lhs, const String &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) +1 ];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    String tmp{buff};
    delete [] buff;
    return tmp;
}

bool operator == (const String &lhs, const String &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0) ? true : false;
}

bool operator != (const String &lhs, const String &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0) ? false : true;
}

bool operator < (const String &lhs, const String &rhs) {
    if (std::strcmp(lhs.str, rhs.str) < 0 )
        return true;
    else { 
        return false;
    }
}
bool operator > (const String &lhs, const String &rhs) {
    if (std::strcmp(lhs.str, rhs.str) > 0 )
        return true;
    else { 
        return false;
    }
}

void operator += (String &lhs, const String &rhs){
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) +1];
    std::strcpy(buff, lhs.str);
    delete [] lhs.str;
    lhs.str = new char[std::strlen(buff) + std::strlen(rhs.str) +1];
    std::strcat(buff, rhs.str);
    std::strcpy(lhs.str, buff);
    delete [] buff;
}

String operator * (const String &lhs, size_t multiple) {
    // if (multiple <= 0) {
    //     return String{};
    // }
    char *buff = new char[(std::strlen(lhs.str) * multiple) + 1];
    std::strcpy(buff, lhs.str);
    for (size_t i{1}; i <= multiple - 1; i++)
        std::strcat(buff, lhs.str);
    String tmp{buff};
    delete [] buff;
    return tmp;
}

void operator *= (String &lhs, size_t multiple) {
    char *buff = new char[(std::strlen(lhs.str) * multiple) + 1];
    std::strcpy(buff, lhs.str);
    delete [] lhs.str;
    lhs.str = new char[(std::strlen(buff) * multiple) + 1];
    std::strcpy(lhs.str, buff);
    for (size_t i{1}; i <= multiple - 1; i++)
        std::strcat(lhs.str, buff);
    delete [] buff;

}
    // for (size_t i{0}; i < smallest; i++){
    //     if (std::strcmp(lhs.str[i], rhs.str[i]) )
    // }


std::ostream &operator<<(std::ostream &os, const String &rhs){
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &in, String& rhs){
    char *buff = new char[1111];
    in >> buff;
    rhs = String{buff};
    delete [] buff;
    return in;
}



// Destructor

String::~String(){
    if (debug)
        std::cout << "Destructor for " << str << '\n' << std::flush;
    delete [] str;
}