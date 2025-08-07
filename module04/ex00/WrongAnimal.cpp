#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "Wrong Default Animal";
}

WrongAnimal::WrongAnimal(std::string type){
    std::cout << "WrongAnimal parameterized constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal destructor called " << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes a sound" << std::endl;
}