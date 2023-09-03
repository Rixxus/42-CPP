/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:00 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 21:28:14 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    ScavTrap summer("Summer");
    FragTrap winter("Winter");
    while (summer.getHitPoints() > 0 || winter.getHitPoints() > 0){
        if (winter.getEnergyPoints() % 3 == 0){
            winter.highFivesGuys();
        }
        summer.attack("Winter");
        winter.takeDamage(summer.getAttackDamage());
        winter.attack("Winter");
        summer.takeDamage(winter.getAttackDamage());
    }
}