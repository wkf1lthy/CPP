#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void){
    Weapon club = Weapon("crude spiked club");
    Weapon sword = Weapon("long sword");
    HumanA humanA = HumanA("beub", club);
    HumanB humanB = HumanB("patrick nolech");
    humanB.setWeapon(sword);
    humanA.attack();
    humanB.attack();
    return (0);
}
