#include "Harl.hpp"

int main()
{
	Harl nemo;
	std::string level;
	std::cout << "enter a level : ";
	std::cin >> level;
	nemo.complain(level);
}