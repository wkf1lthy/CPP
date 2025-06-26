#include "Fixed.hpp"

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int para){
    std::cout << "Int constructor called " << std::endl;
    this->value = para << Fixed::fractionnal_bits;
}

Fixed::Fixed(const float para){
    std::cout << "Float constructor called " << std::endl;
    this->value = roundf(para * (1 << Fixed::fractionnal_bits));
}

Fixed::Fixed(const Fixed &other) : value(other.value){
    std::cout << "Copy constructor called " << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits(void)const{
    std::cout << "getRawBits member function called " << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called " << std::endl;
    this->value = raw;
}

int Fixed::toInt(void) const {
    return this->value >> Fixed::fractionnal_bits;
}

float Fixed::toFloat(void) const {
    return (float)this->value / (1 << Fixed::fractionnal_bits);
}
std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->value < other.value;
}

bool Fixed::operator>(const Fixed &other) const {
    return this->value > other.value;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->value <= other.value;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->value >= other.value;
}

bool Fixed::operator==(const Fixed &other) const {
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->value != other.value;
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.value = this->value + other.value;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.value = this->value - other.value;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.value = (this->value * other.value) >> Fixed::fractionnal_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    result.value = (this->value << Fixed::fractionnal_bits) / other.value;
    return result;
}

Fixed &Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->value++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->value--;
    return temp;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}
