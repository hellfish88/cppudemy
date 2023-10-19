#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>

class Player {
private:
	// Attributes
	std::string name;
	int health;
	int experience;
	bool copy;
	
public:
	// methods
//	Player();
//	Player(std::string name_val);
	Player(std::string name_val = "Spelare", int health_val = 100, int xp_val = 1);
	void talk(std::string text_to_say);
	void set_name(std::string n);
	bool set_health(int hp);
	std::string get_name();
	bool set_xp(int xp);
	bool is_dead();
	int get_xp();
	int get_health();
	Player(const Player &source);

	// Destructor
	~Player() {
		std::cout << "Destructor for " << name << " called" << std::endl;
	}

}; 


#endif // PLAYER_HPP
