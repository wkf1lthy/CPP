#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
    if(N < 1){
        std::cout <<"A horde can not contain less than 1 zombie" << std::endl;
        return NULL;
    }
    Zombie *zombieHorde = new Zombie[N];
    if(zombieHorde == NULL){
        std::cout << "Memory allocation failed" << std::endl;
        return NULL;
    }
    for(int i = 0; i < N; i++){
        zombieHorde[i].setName(name);
    }
    return zombieHorde;
}