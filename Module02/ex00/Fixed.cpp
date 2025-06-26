#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &other) : value(other.value){
    std::cout << "Copy constructor called " << std::endl;
} //creation d'un nvl objet qui va etre copie

Fixed&Fixed::operator=(const Fixed &other){
    std::cout << "Copy assignement is called " << std::endl;
    if(this != &other)
        this->value = other.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function called " << std::endl;
    return this->value;
}//retourne la valeur stocke dans fixed (si value = 256 alors le resultat sera 1.0 (8bits en partie fractionnaire))

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called " << std::endl;
    this->value = raw;
}//meme chose que au dessus si value = 512 alors le resultat sera 2.0