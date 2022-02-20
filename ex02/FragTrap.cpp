/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    FragTrap::name = "lenz";
    FragTrap::hp = 100;
    FragTrap::energyPoints = 100;
    FragTrap::attackDamage = 30;
    std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
    FragTrap::name = name;
    FragTrap::hp = 100;
    FragTrap::energyPoints = 100;
    FragTrap::attackDamage = 30;
    std::cout << "FragTrap: default parametrized constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap: default destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src) {
    *this = src; 
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
    this->name = rhs.name;
    this->hp = rhs.hp;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return (*this);
}
    
void FragTrap::highFivesGuys(void) {
    std::cout << "HIGH FIVES GUYS!" << std::endl;
}
