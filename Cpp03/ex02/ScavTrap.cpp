#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    this->name = "Default scavT-Rap";
    std::cout << "Default ScavT-Rap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "Created scavT-Rap "  << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavTrap " << this->name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "scavTrap " << this->name << " guards the gate" << std::endl;

}

void ScavTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name 
        << " attacks " << target<< " causing " << this->attackDamage<<  " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << this->name << " has no energy left" << std::endl;
    
}