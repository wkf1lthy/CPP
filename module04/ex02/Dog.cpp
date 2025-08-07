#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other){
    std::cout << "Dog assignment operator called" << std::endl;
    if(this != &other){
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

void Dog::setBrainIdea(int index, const std::string &idea){
    this->brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const {
    return this->brain->getIdea(index);
}