#ifndef ZOMBİE_HPP
#define ZOMBİE_HPP
#include <iostream>

class Zombie{
private:
	std::string name1;
public:
	Zombie();
	~Zombie();
	void announce(void);
	void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif