#ifndef ANİMAL_HPP
#define ANİMAL_HPP
#include <iostream>

class Animal{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();

    Animal(const Animal &cpy);
    Animal &operator=(const Animal &nemo);

    virtual void makeSound() const;
    virtual std::string getType() const;
};

#endif