#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "created" <<std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name<<": "<<"BraiiiiiiinnnzzzZ..." << std::endl;
}


