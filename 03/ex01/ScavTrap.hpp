/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:24:55 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 20:52:48 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap{
        public:
            ScavTrap();
            ScavTrap(string name);
            ScavTrap(const ScavTrap &copy);
            ~ScavTrap();
            ScavTrap &operator=(const ScavTrap &copy);
            void attack(const string &target);
            void guardGate();
};

#endif