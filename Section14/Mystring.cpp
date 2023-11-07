#include "Mystring.hpp"

// No args constructor

Mystring::Mystring()
    : str{nullptr} {
        str = new char[1];
        *str = '\0';
        // std::cout << "Empty constructor called" << str << std::endl;
}

// Overloaded

Mystring::Mystring(const char *s)
    : str{nullptr}{
        if (s==nullptr){
            str = new char[1];
            *str = '\0';
    } else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }
    // std::cout << "const char constructor called for " << str << std::endl;
}

Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
        // std::cout << "deep copy constructor called for " << str << std::endl;
    }

// Deconstructor
Mystring::~Mystring(){
    // std::cout << "Decunstructor called for " << str <<  std::endl;
    delete[] str;
    
}

Mystring::Mystring(Mystring &&src)
    :str(src.str){
        src.str = nullptr;
        // std::cout << "Move constructor called for " << str << std::endl;
    }

Mystring &Mystring::operator=(const Mystring &rhs) {// copy assignment
    // std::cout << "Copy assignment called for " << str << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) +1];
    std::strcpy(str, rhs.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) { // Move assignment
    if (this == &rhs) {
        return *this;
    }
    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    // std::cout << "Move assignment called for " << str << std::endl;
    return *this;
}


// Equality operator
bool Mystring::operator==(const Mystring &rhs) const {

    return (std::strcmp(str, rhs.str) == 0);
}

// Lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i{0}; i< std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring tmp{buff};
    delete [] buff;
    return tmp;
}

// concat

Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[(std::strlen(str) + std::strlen(rhs.str)) +1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring tmp{buff};
    delete [] buff;

    return tmp;
}


// Display

void Mystring::display() const{
    std::cout << str << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char* Mystring::get_str() const{
    return str;
}

// Equality

bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Lowercase
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str) +1];
    // std::strcpy(buff, obj.str);
    for (size_t i{0}; i<=std::strlen(buff); i++){
        buff[i] = tolower(obj.str[i]);
    }
    Mystring tmp{buff};
    delete [] buff;
    return tmp;
}


// Concat
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[(std::strlen(lhs.str) + std::strlen(rhs.str)) +1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring tmp{buff};
    delete [] buff;
    return tmp;
}

// Overloaded inserten operator

std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

// Overloaded extraction operator

std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}