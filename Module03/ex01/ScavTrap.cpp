#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->gateKeeperMode = false;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->gateKeeperMode = false;
    std::cout << "ScavTrap constructor called" << std::endl;
}