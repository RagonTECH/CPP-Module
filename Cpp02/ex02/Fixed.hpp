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

    bool operator>(const Fixed &nemo) const;
    bool operator<(const Fixed &nemo) const;
    bool operator>=(const Fixed &nemo) const;
    bool operator<=(const Fixed &nemo) const;
    bool operator==(const Fixed &nemo) const;
    bool operator!=(const Fixed &nemo) const;

    Fixed operator+(const Fixed &nemo) const;
    Fixed operator-(const Fixed &nemo) const;
    Fixed operator*(const Fixed &nemo) const;
    Fixed operator/(const Fixed &nemo) const;

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits(void) const ;
    void setRawBits(int const raw);

    static Fixed &min(Fixed &num1, Fixed &num2);
    static const Fixed &min(const Fixed &num1,const Fixed &num2);
    static Fixed &max(Fixed &num1, Fixed &num2);
    static const Fixed &max(const Fixed &num1,const Fixed &num2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif