#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed
{
    private:
        int value;
        static const int fractionnal_bits = 8;
    public:
        Fixed();
        Fixed &operator=(const Fixed &other);
        Fixed(const Fixed &other);
        ~Fixed();


    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif

