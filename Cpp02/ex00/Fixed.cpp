#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedpoint = 0 ;
}

Fixed::Fixed(const Fixed &nemo)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedpoint = nemo.fixedpoint;
}

Fixed &Fixed::operator=(const Fixed &nemo)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedpoint = nemo.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called"<< std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" <<std::endl;
    return this->fixedpoint;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedpoint = raw;
}
