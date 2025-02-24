#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(NULL){
    this->name = name;
    std::cout << "HumanB " << name << " created with no weapon " << std::endl;
}

HumanB::~HumanB(void){
    std::cout << "HumanB " << name << " destroyed" << std::endl;
}

void HumanB::attack(void) {
    if (this->weapon){
        std::cout << this->name << " attacks with his " 
                 << this->weapon->getType() << std::endl;    
    } else {
        std::cout << this->name << " has no weapon to attack" << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

