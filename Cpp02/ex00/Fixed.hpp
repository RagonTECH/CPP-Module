#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
    int fixedpoint;
    static const int fixedbit = 8;
public:
    Fixed();
    Fixed(const Fixed &nemo);
    Fixed& operator=(const Fixed &nemo);
    ~Fixed();

    int getRawBits(void) const ;
    void setRawBits(int const raw);
};

#endif