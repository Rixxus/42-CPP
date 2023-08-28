/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:29:57 by rmount            #+#    #+#             */
/*   Updated: 2023/08/07 14:51:56 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    
    int N = 4;
    string name = "Zombifer";


    Zombie *horde = zombieHorde(N, name);
    
    for (int i = 0; i < N; i++){
        cout << "Speak, zombie number " << i+1 << endl;
        horde[i].announce();
        cout << endl;
    }

    cout << "Don't forget to clean up the zombies when you're done!" << endl;
    delete[] horde;
    cout << "Horde deleted." << endl;
    cout << endl;
}