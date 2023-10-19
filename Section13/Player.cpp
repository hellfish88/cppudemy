#include <iostream>
#include "Player.hpp"
#include <string>

void  Player::talk(std::string text_to_say){ 
	std::cout << name << " says: " << text_to_say << std::endl; 
}

bool Player::set_health(int hp){
	 health = hp;
	 return 0;
}

bool Player::set_xp(int xp){
	experience = xp;
	return 0;
}

void Player::set_name(std::string n){
	name = n;
}

//Player::Player()
//	: Player("Spelare", 100, 1) {
//		std::cout << "No-args def constructor" << std::endl;
//}
//
//Player::Player(std::string name_val)
//    : Player(name_val, 100, 1) {
//}

Player::Player(std::string name_val, int health_val, int xp_val)
	: name(name_val), experience(xp_val), health(health_val) {
		std::cout << "Three-args def constructor" << std::endl;
}	 