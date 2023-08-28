/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:30:12 by rmount            #+#    #+#             */
/*   Updated: 2023/08/07 13:10:55 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name){
    this->name = name;
}

Zombie::~Zombie(){
    cout << "Zombie " << this->name << " has been destroyed." << endl;
}

void    Zombie::announce(){
    cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void    Zombie::setName(string name){
    this->name = name;
}

string    Zombie::getName(){
    return (this->name);
}