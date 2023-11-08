#ifndef _ILLEGAL_BALANCE_EXCEPTION_HPP_
#define _ILLEGAL_BALANCE_EXCEPTION_HPP_
#include <exception>
#include <iostream>

class IllegalBalanceException : public std::exception {


public:
    IllegalBalanceException() noexcept { this->what(); };
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept { return "Balance cannot be subzero"; };

};

#endif