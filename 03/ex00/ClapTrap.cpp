/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:34:04 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 17:21:51 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap():name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0){
    cout << "ClapTrap default constructor called." << endl;
}

// Constructor taking name parametre
ClapTrap::ClapTrap(string name):name(name), hitPoints(10), energyPoints(10), attackDamage(0){
    cout << "ClapTrap " << this->name << " has been created." << endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &copy):name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage){
    cout << "ClapTrap copy constructor called." << endl;
}

// Destructor
ClapTrap::~ClapTrap(){
    cout << "ClapTrap " << this->name << " destroyed." << endl;
}

// Assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    cout << "Overloaded assignment operator called." << endl;
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    return (*this);
}

// Attack function
void    ClapTrap::attack(const string &target){
    if (this->hitPoints <= 0){
        cout << "ClapTrap " << this->name << " is damaged and cannot attack." << endl;
    }
    else if (this->energyPoints <= 0){
        cout << "ClapTrap" << this->name << " has no energy and cannot attack." << endl;
    }
    else{
        cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " damage." << endl;
        this->energyPoints--;
        cout << "ClapTrap " << this->name << " has " << this->energyPoints << " energy points left" << endl;
    }
}

// Take damage function
void    ClapTrap::takeDamage(unsigned int amount){
    if (this->hitPoints <= 0){
        cout << "ClapTrap " << this->name << " is already dead! So, I guess now, it's super dead." << endl;
    }
    else{
        this->hitPoints = this->hitPoints - amount;
    }
    if (this->hitPoints <= 0){
        cout << "ClapTrap " << this->name << " has broken." << endl;
    }
    else{
        cout << "ClapTrap " << this->name << " has " << this->hitPoints << " hit points left." << endl;
    }
    cout << endl;
}

// Getter for energy points for running from main
int     ClapTrap::getEnergyPoints(){
    return (this->energyPoints);
}

// Getter for hit points for running from main
int     ClapTrap::getHitPoints(){
    return (this->hitPoints);
}

// Getter for energy points for running from main
int     ClapTrap::getAttackDamage(){
    return (this->attackDamage);
}

// BeRepaired function
void    ClapTrap::beRepaired(unsigned int amount){
    if (this->hitPoints <= 0){
        cout << "ClapTrap " << this->name << " is broken and cannot be repaired." << endl;
    }
    else if (this->energyPoints <= 0){
        cout << "ClapTrap " << this->name << " has run out of steam and cannot repair itself." << endl;
    }
    else{
        this->hitPoints = this->hitPoints + amount;
        cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points. It now has " << this->hitPoints << "hit points." << endl;
        this->energyPoints--;
    }
}