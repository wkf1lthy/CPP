#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int para);
    Fixed(const float para);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;

        bool operator<(const Fixed &other)const;
        bool operator>(const Fixed &other)const;
        bool operator>=(const Fixed &other)const;
        bool operator<=(const Fixed &other)const;
        bool operator==(const Fixed &other)const;
        bool operator!=(const Fixed &other)const;

        Fixed operator+(const Fixed &other)const;
        Fixed operator-(const Fixed &other)const;
        Fixed operator*(const Fixed &other)const;
        Fixed operator/(const Fixed &other)const;
        Fixed &operator++();
        Fixed operator++( int );
        Fixed &operator--();
        Fixed operator--( int );
        
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);


private:
    int value;
    static const int fractionnal_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif