#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog &cpy);
    Dog &operator=(const Dog &other);

    void makeSound() const;
    std::string getType() const;
};