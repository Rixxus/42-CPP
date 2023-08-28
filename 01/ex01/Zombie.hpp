/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:30:04 by rmount            #+#    #+#             */
/*   Updated: 2023/08/07 14:18:48 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::flush;
using std::cin;
using std::endl;

class Zombie
{
    private:
        string  name;
    public:
        Zombie();
        Zombie(string name);
        ~Zombie();
        void    announce();
        string  getName();
        void    setName(string name);
};

Zombie  *newZombie(string name);
void    randomChump(string name);
Zombie  *zombieHorde(int N, string name);

#endif