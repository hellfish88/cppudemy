#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
private:
	std::string name;
	double balance;
	
public:
	void set_name(std::string n);
	std::string get_name();
	
	void set_balance(double n) { balance = n; }
	double get_balance() { return balance; }
	
	
	bool deposit(double n);
	bool withdraw(double amount);
	
};

#endif // _ACCOUNT_H_
