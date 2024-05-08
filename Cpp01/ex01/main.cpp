#include "Zombie.hpp"

int main()
{
	int numZom = 5;
	std::string nameZom = "Aliii";
	Zombie* zombi = zombieHorde(numZom,nameZom);
	for(int i=0;i < 5;i++)
	{
		zombi[i].announce();
	}
	delete[] zombi;
	return 0;
}