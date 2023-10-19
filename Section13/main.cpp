#include <iostream>
#include <string>
#include <vector>
#include "Account.hpp"
#include "Player.hpp"

//using namespace std;



int main(){
	Player anders;
//	anders.name = "Anders";
//	anders.health = 100;
//	anders.xp = 1;
	anders.set_health(100);
//	anders.set_name("Anders");
	anders.talk("Yo");
	
	Player *enemy = new Player;
	Player *goi = new Player("Goi", 99);
	
	Account kanya;
	kanya.set_name("Anders");
	kanya.set_balance(100);
	goi->talk("shrimp");
	
	if (kanya.deposit(100)){
		std::cout << "Deposit OK!" << std::endl;
	} else {
		std::cout << "Deposit NOT ok.." << std::endl;
	}
	if (kanya.withdraw(1000)){
		std::cout << "Withdraw OK!" << std::endl;
	} else {
		std::cout << "Withdraw NOT ok.." << std::endl;
	}
	
	
//	(*enemy).name = "Jacob";
//	enemy->xp = 1;
//	enemy->health = 19;
	enemy->talk("Hej");
	return 0;
}