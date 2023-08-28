/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:31:20 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 11:46:51 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

// Here we are directly initialising our member variables outside of the 
// constructor body, more efficient than initialising them inside.
// Because Human B's constructor uses a pointer, we are able to set it to NULL
// during initialisation here, allowing us to test if they have a weapon later.
HumanB::HumanB(string name):name(name), weapon(NULL){};

// Destructor with message
HumanB::~HumanB(){
    cout << this->name << " has been destroyed!" << endl;
};

// Attack function with message
void    HumanB::attack() const{
    if (this->weapon){
        cout << this->name << " attacks with their " << this->weapon->getType() << endl;
    } else {
        cout << this->name << " attacks with their nails!" << endl;
    }
}

// Setter function for Human B's weapon
void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}