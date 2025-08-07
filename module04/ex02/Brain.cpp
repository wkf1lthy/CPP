#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other){
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; ++i){
        Ideas[i] = other.Ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other){
    std::cout << "Brain assignement operator called" << std::endl;
    if(this != &other){
        for(int i = 0; i < 100; ++i){
            Ideas[i] = other.Ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea){
    if(index >= 0 && index < 100)
        this->Ideas[index] = idea;
}

std::string Brain::getIdea(int index) const{
    if(index >= 0 && index < 100)
        return this->Ideas[index];
    return "";
}