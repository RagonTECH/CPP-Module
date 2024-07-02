#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name <<" "<< weapon->getType() << "ile saldırdı." << std::endl;
}

HumanB::HumanB(std::string name1)
{
	name = name1;
}

void HumanB::setWeapon(Weapon& weapon1)
{
	weapon = &weapon1;
}

HumanB::~HumanB()
{
	std::cout << "sattacker died"<< std::endl;
}
