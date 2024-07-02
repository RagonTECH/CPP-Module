#include "HumanA.hpp"

HumanA::HumanA(const std::string name1, Weapon& weapon1)
{
	name = name1;
	weapon = &weapon1;
}

void HumanA::attack()
{
	std::cout << name <<" "<< weapon->getType() << "ile saldırdı." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "sattacker died"<< std::endl;
}