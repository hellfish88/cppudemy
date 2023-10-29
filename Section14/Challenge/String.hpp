#ifndef _STRING_H
#define _MYSTRING_
#include <iostream>
#include <cstring>

class String{
    friend std::ostream &operator<<(std::ostream&, const String&);
    friend std::istream &operator>>(std::istream&, String&);
    friend String operator-(const String &obj);
    friend String operator + (const String &lhs, const String &rhs);
    friend bool operator == (const String &lhs, const String &rhs);
    friend bool operator != (const String &lhs, const String &rhs);
    friend bool operator < (const String &lhs, const String &rhs);
    friend bool operator > (const String &lhs, const String &rhs);
    friend void operator += (String &lhs, const String &rhs);
    friend String operator * (const String &lhs, size_t);
    friend void operator *= (String &lhs, size_t);

private:
    char *str;
    // bool debug = false;



public:
    // Constructor
    String();
    String(const char *a);
    String(const String&);
    // Copy/move
    String &operator=(String &&src);
    // Destructor
    ~String();

    // Operators
    String &operator=(const String&);
    






};








#endif