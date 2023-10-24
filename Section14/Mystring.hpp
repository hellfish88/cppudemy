#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>
#include <cstring>

class Mystring {
    private:
        char *str;

    public:
    // constructors
        Mystring();
        Mystring(const char *s);
        Mystring(const Mystring &source);
        Mystring( Mystring &&src);
        ~Mystring();
    // Copy/move
        Mystring &operator=(Mystring &&rhs);
        Mystring &operator=(const Mystring &rhs);
        //// Methods
        void display() const;
        int get_length() const;
        const char *get_str() const;
};











#endif