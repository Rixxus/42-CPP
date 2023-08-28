/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:31:30 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 10:52:18 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
Weapon::Weapon(string type){
    this->type = type;
}

// Destructor with message
Weapon::~Weapon() {
    cout << this->type << " has been destroyed!" << endl;
}

// Setter method for weapon type
void    Weapon::setType(string type){
    this->type = type;
}

// Getter method for weapon type
const string &Weapon::getType(){
    return this->type;
}