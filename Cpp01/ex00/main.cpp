#include "Zombie.hpp"

int main()
{
	Zombie* zombi = newZombie("Ali");
	zombi->announce();
	randomChump("Halis");
	delete zombi;
	return 0;
}