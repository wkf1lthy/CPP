#include "Zombie.hpp"

Zombie::Zombie() {
    // Implémentation du constructeur par défaut
    std::cout << "Zombie object Created" << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie object " << this->name << " Created " << std::endl;
}

Zombie::~Zombie(){
    std::cout << "Zombie object " << this->name << " Destroyed " << std::endl;
}

void Zombie::annonce(){
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}