#include "ClapTrap.hpp"

int main(void){
    ClapTrap ct("CT");

    ct.attack("TARGET");

    ct.takeDamage(3);
    ct.takeDamage(6);

    ct.beRepaired(3);
    ct.beRepaired(6);

    std::cout << "TEST WHEN NO ENERGY POINTS OR HIT POINTS LEFT" << std::endl;
    ct.takeDamage(10);

    ct.attack("TARGET2");
    ct.beRepaired(10);
}