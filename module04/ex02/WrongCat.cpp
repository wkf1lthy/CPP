#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Dog"){
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}


WrongCat &WrongCat::operator=(const WrongCat &other){
    if(this != &other){
        this->type = other.type;
    }
    std::cout << "WrongCat assignment operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}


void WrongCat::makeSound() const{
    std::cout << "WrongCat makes a sound: wouf wouf" << std::endl;
}