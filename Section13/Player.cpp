#include <iostream>
#include "Player.hpp"
#include <string>

int Player::num_players = 0;

void  Player::talk(std::string text_to_say) const{ 
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

int Player::get_health() {
	return health;
}

int Player::get_xp(){
	return experience;
}

std::string Player::get_name() {
	return name;
}

int Player::get_num_players() {
	return num_players;
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
	: name(name_val), experience(xp_val), health(health_val), copy(false) {
		// std::cout << "Three-args def constructor" << std::endl;
		++num_players;
}	 

	Player::Player(const Player &source) 
		: 	name(source.name), 
			health(source.health), 
			experience(source.experience),
			copy(true) {
				std::cout << "Made a copy of " << source.name << " Copy: " << std::boolalpha << copy << std::endl;
		}

// Destructor
Player::~Player() {
	if (this->copy){
		std::cout << "Destructor for copy " << name << " called" << std::endl;
	}
	else {
		std::cout << "Destructor for " << name << " called" << std::endl;
	}
	--num_players;
}