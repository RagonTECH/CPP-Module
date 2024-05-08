#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	std::cout << name1 << " is destroyed!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name1<<": "<<"BraiiiiiiinnnzzzZ..." << std::endl;
}


void Zombie::set_name(std::string name)
{
	name1 = name;
}