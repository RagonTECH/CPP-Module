#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{	
		Harl nemo;
		std::string level;
		level = argv[1];
		nemo.complain(level);
	}
}