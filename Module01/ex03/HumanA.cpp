#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
    std::cout << "HumanA " << name << " created ";
    std::cout << "with weapon " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void){
    std::cout << "HumanA " << name << " destroyed" << std::endl;
}

void HumanA::attack(void){
    std::cout << this->name << " attacks with his " << \
        this->weapon.getType() << std::endl;    
}

void HumanA::setWeapon(Weapon &weapon){
    this->weapon = weapon;
}
