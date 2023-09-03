/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:14:41 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 20:43:35 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap():ClapTrap(){
    this->name = "ScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    cout << "Default ScavTrap constructor called." << endl;
}

// Constructor passing name in
ScavTrap::ScavTrap(string name):ClapTrap(name){
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    cout << "ScavTrap " << this->name << " has been built." << endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &copy):ClapTrap(copy.name){
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    cout << "ScavTrap copy constructor called." << endl;
}

// Destructor
ScavTrap::~ScavTrap(){
    cout << "ScavTrap " << this->name << " has been destroyed." << endl;
}

// Assignment operator override
ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    ClapTrap::operator=(copy);
    return (*this);
}

void    ScavTrap::attack(const string &target){
    if (this->hitPoints <= 0){
        cout << "ScavTrap " << this->name << " is damaged and cannot attack." << endl;
    }
    else if (this->energyPoints <= 0){
        cout << "ScavTrap" << this->name << " has no energy and cannot attack." << endl;
    }
    else{
        cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " damage." << endl;
        this->energyPoints--;
        cout << "ScavTrap " << this->name << " has " << this->energyPoints << " energy points left" << endl;
    }
}

void    ScavTrap::guardGate(){
    cout << "ScavTrap " << this->name << " is now in Gatekeeper mode!" << endl;
}
