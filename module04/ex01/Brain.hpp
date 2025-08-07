#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain{

    private:
        std::string Ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
};



#endif