/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:31:17 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 10:50:50 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA // class definition
{
    private:
        string name; // Human A's name
        Weapon &weapon; // Reference to Human A's weapon
    public:   
        HumanA(string name, Weapon &weapon); // Constructor
        ~HumanA(); // Destructor
        void attack() const; // Attack method
};

#endif