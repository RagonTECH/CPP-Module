#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
    int fixedpoint = 0;
    static const int fixedbit = 8;
public:
    Fixed();
    Fixed(int const nemo);
    Fixed(float const nemo);
    Fixed(const Fixed &nemo);
    Fixed& operator=(const Fixed &nemo);
    ~Fixed();

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits(void) const ;
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif