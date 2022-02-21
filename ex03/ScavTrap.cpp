/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): 
    presetHp(100), presetEnergyPoints(50), presetAttackDamage(20) {
    ScavTrap::name = "lenz";
    ScavTrap::hp = 100;
    ScavTrap::energyPoints = 50;
    ScavTrap::attackDamage = 20;
    std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): 
    presetHp(100), presetEnergyPoints(50), presetAttackDamage(20) {
    ScavTrap::name = _name;
    ScavTrap::hp = 100;
    ScavTrap::energyPoints = 50;
    ScavTrap::attackDamage = 20;
    std::cout << "ScavTrap: default parametrized constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap: default destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src) {
    *this = src; 
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
    this->name = rhs.name;
    this->hp = rhs.hp;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode.." << std::endl;
}
