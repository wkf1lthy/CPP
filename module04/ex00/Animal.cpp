#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Default animal constructor called" << std::endl;
    this->type = "Unknow";
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "Animal constructor with type called: " << type << std::endl;
}

Animal::Animal(const Animal &other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::setType(const std::string new_type){
    std::cout << "Setting animal type to: " << new_type <<std::endl;
    this->type = new_type;
}

void Animal::makeSound() const{
    std::cout << "Animal makes a sound" << std::endl;
}