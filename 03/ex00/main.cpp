/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:00 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 17:12:48 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap night("Night");
    ClapTrap day("Day");
    while (night.getEnergyPoints() > 0 || day.getEnergyPoints() > 0){
        night.attack("Day");
        day.takeDamage(night.getAttackDamage());
        day.attack("Night");
        night.takeDamage(day.getAttackDamage());
    }
}