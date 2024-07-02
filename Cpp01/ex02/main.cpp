#include <iostream>

int main()
{
	std::string zombi = "HI THIS IS BRAIN";
	std::string* stringPTR = &zombi;
	std::string& stringREF = zombi;

	std::cout << &zombi << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << zombi << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}