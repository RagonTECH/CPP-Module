#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &cpy);
    ScavTrap& operator=(const ScavTrap& other);

    void guardGate();
    void attack(const std::string& target);
};
#endif