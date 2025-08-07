#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal{
    private:
        Brain *brain; // Assuming Dog also has a Brain like Cat
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();

        void makeSound() const;
        void setBrainIdea(int index, const std::string &idea);
        std::string getBrainIdea(int index) const;
};

#endif