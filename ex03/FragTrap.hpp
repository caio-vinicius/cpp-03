/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include "string"

class FragTrap : virtual public ClapTrap {
 protected:
    int presetHp;
    int presetEnergyPoints;
    int presetAttackDamage;
 public:
    FragTrap(void);
    FragTrap(FragTrap const &src);
    ~FragTrap(void);
    FragTrap &operator=(FragTrap const &rhs);
    FragTrap(std::string name);
    void highFivesGuys(void);
};

#endif
