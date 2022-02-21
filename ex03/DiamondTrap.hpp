/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#ifndef DIAMONDTRAP_HPP
#define DIAMONGTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include "string"

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
    DiamondTrap(void);
    DiamondTrap(DiamondTrap const &src);
    ~DiamondTrap(void);
    DiamondTrap &operator=(DiamondTrap const &rhs);
    DiamondTrap(std::string name);
    void whoAmI(void);
    void attack(const std::string &target);
    void print(void);
 private:
    std::string name;
};

#endif
