/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:47:00 by rmount            #+#    #+#             */
/*   Updated: 2023/09/03 21:01:01 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap dawn("Dawn");
    ScavTrap dusk("Dusk");
    while (dawn.getHitPoints() > 0 || dusk.getHitPoints() > 0){
        if (dusk.getHitPoints() < 30 ){
            dusk.guardGate();
        }
        dawn.attack("Dusk");
        dusk.takeDamage(dawn.getAttackDamage());
        dusk.attack("Dawn");
        dawn.takeDamage(dusk.getAttackDamage());
    }
}