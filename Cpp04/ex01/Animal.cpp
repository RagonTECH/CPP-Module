#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal consturctor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal disappeared" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
    *this = cpy;
}

Animal &Animal::operator=(const Animal &nemo)
{
    this->type = nemo.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "There are animal sounds" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}
