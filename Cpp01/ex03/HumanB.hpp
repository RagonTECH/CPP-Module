#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
	std::string name;
	Weapon* weapon;
public:
	void attack();
	HumanB(std::string name1);
	~HumanB();
	void setWeapon(Weapon& weapon1);
};

#endif