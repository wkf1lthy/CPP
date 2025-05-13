#include "Harl.hpp"

Harl::Harl(){
    return ;
}

Harl::~Harl(){
    return ;
}

void Harl::debug(){
    std::cout << "DEBUG FUNCTION CALLED" << std::endl;
    return ;
}

void Harl::info(){
    std::cout << "INFO FUNCTION CALLED" << std::endl;
    return ;
}

void Harl::warning(){
    std::cout << "WARNING FUNCTION CALLED" << std::endl;
    return ;
}

void Harl::error(){
    std::cout << "ERROR FUNCTION CALLED" << std::endl;
    return;
}

void Harl::complain(std::string level)
{
    void (Harl::*fn[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string levels[] = {
        "debug",
        "info",
        "warning",
        "error",
    };

    for(int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
        {
            (this->*fn[i])();
            return;
        }
    }
}