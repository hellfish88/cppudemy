#include "Account.hpp"

void Account::set_name(std::string n){
	name = n;
}

std::string Account::get_name() {
	return name;
}

bool Account::deposit(double amount) {
	// todo if-statement
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	} else {
		return false;
	}
}