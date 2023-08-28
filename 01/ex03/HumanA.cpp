/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:31:14 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 12:10:17 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

// Here we are directly initialising our member variables outside of the 
// constructor body, more efficient than initialising them inside.
// This is also necessary here because weapon is a reference and not a
// pointer, so initialising the variables in this way allows the human
// and the weapon to be created at the same time.
HumanA::HumanA(string name, Weapon &weapon):name(name), weapon(weapon){};

// Destructor with message
HumanA::~HumanA(){
    cout << this->name << " has been destroyed!" << endl;
};

// Attack function with message
void HumanA::attack() const{
    cout << this->name << " attacks with their " << this->weapon.getType() << endl;
}