#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
#include <cstring>

class Mystring {
    // Global friend funcs
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); 
    friend std::ostream &operator <<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator >>(std::istream &in, Mystring &rhs);


    private:
        char *str;

    public:
    // constructors
        Mystring();
        Mystring(const char *s);
        Mystring(const Mystring &source);
        Mystring( Mystring &&src);
        ~Mystring();
    // Operators
        Mystring &operator=(Mystring &&rhs);
        Mystring &operator=(const Mystring &rhs);
        //// Methods
        void display() const;
        int get_length() const;
        const char *get_str() const;
        Mystring operator-() const; // lowercase
        Mystring operator+(const Mystring &rhs) const;
        bool operator==(const Mystring &rhs) const;

};











#endif