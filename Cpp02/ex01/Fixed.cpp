#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nemo)
{
    std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(float const nemo)
{
    std::cout << "Float constructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& nemo, const Fixed& fixed)
{
    nemo << fixed.getRawBits();
    return nemo;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->fixedpoint) / (1 << this->fixedbit);
}

int Fixed::toInt(void) const
{
    return this->fixedpoint >> this->fixedbit;
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

