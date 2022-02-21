/* Copyright (c) 2022 Caio Souza. All rights reserved. */
/* 42 */

#include <iostream>

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() {
    DiamondTrap::name = ClapTrap::name + "_clap_name";
    DiamondTrap::hp = FragTrap::presetHp;
    DiamondTrap::energyPoints = ScavTrap::presetEnergyPoints;
    DiamondTrap::attackDamage = FragTrap::presetAttackDamage;
    std::cout << "DiamondTrap: default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) {
    DiamondTrap::name = _name + "_clap_name";
    DiamondTrap::hp = FragTrap::presetHp;
    DiamondTrap::energyPoints = ScavTrap::presetEnergyPoints;
    DiamondTrap::attackDamage = FragTrap::presetAttackDamage;
    std::cout << "DiamondTrap: default parametrized constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap: default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): 
    ClapTrap(src), FragTrap(src), ScavTrap(src) {
    *this = src; 
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
    this->name = rhs.name;
    this->hp = rhs.hp;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return (*this);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << DiamondTrap::name << ". But, ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
    
void DiamondTrap::print(void) {
    std::cout << "hitPoints: " << this->hp << std::endl;
    std::cout << "energyPoints: " << this->energyPoints << std::endl;
    std::cout << "attackDamage: " << this->attackDamage << std::endl;
}
