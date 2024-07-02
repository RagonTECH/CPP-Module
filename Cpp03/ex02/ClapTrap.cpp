#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Default";
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "Dedault constructer called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->attackDamage = 0;
    this->energyPoints = 10;
    this->hitPoints = 10;
    std::cout << "Dedault constructer called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destroyer" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ClapTrap"<< this->name << "attacks" << target<<", causing"<< this->attackDamage<< "points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
        std::cout << this->name << "no energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hitPoints > amount)
        this->hitPoints -= amount;
    else if(this->hitPoints > 0 && this->energyPoints > 0)
    {
        std::cout << "ClapTrap" << this->name << this->attackDamage<<"took damage"<< std::endl;
    }
    else if(this->hitPoints = 0)
        std::cout << "ClapTrap" << this->name <<"died"; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints  > 0 && this->hitPoints > 0 && this->hitPoints + amount <= 10)
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "Claptrap " << this->name << "'s health is " << this->hitPoints << " becaus it took " << amount <<" of health." << std::endl;
    }
    else if ( this->hitPoints + amount > 10)
        std::cout << "Claptrap " << this->name << "health limit exceeded" << std::endl;
    else
        std::cout << "Claptrap " << this->name << "has been slain" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& nemo ) {
    this->name = nemo.name;
    this->hitPoints = nemo.hitPoints;
    this->energyPoints = nemo.energyPoints;
    this->attackDamage = nemo.attackDamage;
    return *this;
}