/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:31:34 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 12:10:17 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Weapon // Class definition
{
    private:
        string type; // The weapon's type
    public:   
        Weapon(string type); // Constructor
        ~Weapon(); // Destructor
        const string &getType(); // Getter method for weapon type
        void setType(string const type); // Setter method for weapon type
};

#endif