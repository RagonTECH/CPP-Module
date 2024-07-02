#include "Dog.hpp"
Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog escaped" << std::endl;
}

Dog::Dog(const Dog &cpy) {
    *this = cpy;
}

Dog &Dog::operator=(const Dog &other) {
    this->type = other.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "hav hav" << std::endl;
}

std::string Dog::getType() const {
    return this->type;
}