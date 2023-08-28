/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:31:23 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 11:29:23 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB // Class definition
{
    private:
        string name; // Human B's name
        Weapon *weapon; // Pointer to Human B's weapon
    public:   
        HumanB(string name); // Constructor
        ~HumanB(); // Destructor
        void attack() const; // Attack method
        void setWeapon(Weapon &weapon); // Setter method for weapon
};

#endif
