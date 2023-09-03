/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:24:55 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 21:22:29 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap{
        public:
            FragTrap();
            FragTrap(string name);
            FragTrap(const FragTrap &copy);
            ~FragTrap();
            FragTrap &operator=(const FragTrap &copy);
            void attack(const string &target);
            void highFivesGuys(void);
};

#endif