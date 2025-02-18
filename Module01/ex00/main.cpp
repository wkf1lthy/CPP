#include "zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void){
    Zombie *z = newZombie("jean");
    z->annonce();
    randomChump("Jean-Yves");
    delete z;
}