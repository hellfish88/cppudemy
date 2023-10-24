#include "Mystring.hpp"

// No args constructor

Mystring::Mystring()
    : str{nullptr} {
        str = new char[1];
        *str = '\0';
        std::cout << "Empty constructor called" << str << std::endl;
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
    std::cout << "const char constructor called for" << str << std::endl;
}

Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
        std::cout << "deep copy constructor called for" << str << std::endl;
    }

// Deconstructor
Mystring::~Mystring(){
    delete[] str;
    std::cout << "Decunstructor called" << std::endl;
}

Mystring::Mystring(Mystring &&src)
    :str(src.str){
        src.str = nullptr;
        std::cout << "Move constructor called" << std::endl;
    }

Mystring &Mystring::operator=(const Mystring &rhs) {// copy assignment
    std::cout << "Copy assignment called" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) +1];
    std:strcpy(str, rhs.str);
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) { // Move assignment
    delete [] this->str;
    this->str = new char[::strlen(rhs.str) +1];
    this->str = rhs.str;
    // return this->str;


}


// Display

void Mystring::display() const{
    std::cout << str << ":" << get_length() << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char* Mystring::get_str() const{
    return str;
}