/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:14:41 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 21:28:58 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap():ClapTrap(){
    this->name = "FragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    cout << "Default FragTrap constructor called." << endl;
}

// Constructor passing name in
FragTrap::FragTrap(string name):ClapTrap(name){
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    cout << "FragTrap " << this->name << " has been built." << endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &copy):ClapTrap(copy.name){
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    cout << "FragTrap copy constructor called." << endl;
}

// Destructor
FragTrap::~FragTrap(){
    cout << "FragTrap " << this->name << " has been destroyed." << endl;
}

// Assignment operator override
FragTrap &FragTrap::operator=(const FragTrap &copy){
    ClapTrap::operator=(copy);
    return (*this);
}

void    FragTrap::attack(const string &target){
    if (this->hitPoints <= 0){
        cout << "FragTrap " << this->name << " is damaged and cannot attack." << endl;
    }
    else if (this->energyPoints <= 0){
        cout << "FragTrap" << this->name << " has no energy and cannot attack." << endl;
    }
    else{
        cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " damage." << endl;
        this->energyPoints--;
        cout << "FragTrap " << this->name << " has " << this->energyPoints << " energy points left" << endl;
    }
}

void    FragTrap::highFivesGuys(){
    cout << "Guys! I love you! High fives all round!" << endl;
}
