#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanA(const std::string name1, Weapon& weapon1);
	~HumanA();
	void attack(void);
};

#endif