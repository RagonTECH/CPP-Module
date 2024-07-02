#ifndef ZOMBİE_HPP
#define ZOMBİE_HPP

#include <iostream>

class Zombie{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce(void);
	Zombie(std::string name) : name(name) {}

};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif