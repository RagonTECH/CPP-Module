#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    this->name = "Default FragTrap";
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    this->name = name;
    std::cout << "Created FragTrap "  << name << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
    *this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &nemo)
{
    this->name = nemo.name;
	this->hitPoints = nemo.hitPoints;
	this->energyPoints = nemo.energyPoints;
	this->attackDamage = nemo.attackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " says high five guys "<< std::endl;
}