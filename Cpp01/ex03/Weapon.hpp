#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
private:
	std::string type;
public:
	Weapon();
	Weapon(const std::string& newType) : type(newType) {}
	const std::string& getType() const {return type;} 
	void setType(std::string newType);
};

#endif