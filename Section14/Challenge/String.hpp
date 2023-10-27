#ifndef _STRING_H
#define _MYSTRING_
#include <iostream>
#include <cstring>

class String{
    friend std::ostream &operator<<(std::ostream&, const String&);
    friend std::istream &operator>>(std::istream&, String&);

private:
    char *str;
    // bool debug = false;



public:
    // Constructor
    String();
    String(const char *a);
    // Copy/move
    String(const String &src);
    String(String &&src);
    // Destructor

    // Operators
    String &operator=(const String&);
    






};








#endif