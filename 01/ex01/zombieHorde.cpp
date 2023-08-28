/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:45:07 by rmount            #+#    #+#             */
/*   Updated: 2023/08/07 14:52:55 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name){
    Zombie  *horde = new Zombie[N];

    cout << endl;
    cout << "We're making a horde of zombies! Yay!" << endl;
    cout << "Their names will all be " << name << " and we're making " << N << " of them." << endl;
    cout << "Let's go make some zombies!" << endl;
    cout << endl;
    for (int i = 0; i < N; i++){
        horde[i].setName(name);
        cout << "Zombie " << i+1 << " created!" << endl;
    }
    cout << endl;
    return (horde);
}