#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed{
    private:
        int value;
        static const int fractionnal_bits = 8;
    public:
        Fixed();
        Fixed &operator=(const Fixed &other);
        Fixed(const Fixed &other);
        ~Fixed();
        int toInt( void ) const;
        float toFloat( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed(const int para);
        Fixed(const float para);
};

std::ostream &operator<<( std::ostream &op, Fixed const &f);

#endif 