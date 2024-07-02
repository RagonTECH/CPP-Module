#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat escaped" << std::endl;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miyav" << std::endl;
}

std::string Cat::getType() const {
    return this->type;
}