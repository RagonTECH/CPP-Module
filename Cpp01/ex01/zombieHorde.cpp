#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombii = new Zombie[N];
	for(int i = 0;i<N;i++)
	{
		zombii[i].set_name(name);
	}
	return zombii;
}