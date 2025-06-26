#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
    private:
        bool gateKeeperMode;
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string &target);
};

#endif