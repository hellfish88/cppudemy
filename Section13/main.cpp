#include <iostream>
#include <string>
#include <vector>
#include "Account.hpp"
#include "Player.hpp"

//using namespace std;


void display_player(Player &p) {
	std::cout << "Player name: " << p.get_name() << std::endl;
}

void display_num_players() {
	std::cout << "Active Player objects: " << Player::get_num_players() << std::endl;
}

int main(){
	Player anders{"Anders", 100, 15};
	// anders.set_health(100);
	// anders.set_name("Anders");
	anders.talk("Yo");
	
	Player *enemy = new Player{"Enemy"};
	const Player *goi = new Player("Goi", 99);
	Account kanya;
	kanya.set_name("Anders");
	kanya.set_balance(100);
	goi->talk("shrimp");
	
	// if (kanya.deposit(100)){
	// 	std::cout << "Deposit OK!" << std::endl;
	// } else {
	// 	std::cout << "Deposit NOT ok.." << std::endl;
	// }
	// if (kanya.withdraw(1000)){
	// 	std::cout << "Withdraw OK!" << std::endl;
	// } else {
	// 	std::cout << "Withdraw NOT ok.." << std::endl;
	// }
	display_num_players();
	display_player(anders);
	
	enemy->talk("Hej");
	

	delete goi;
	delete enemy;

// int ch = getchar(); // break to keep CMD open 
	return 0;
}