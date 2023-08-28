/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:29:57 by rmount            #+#    #+#             */
/*   Updated: 2023/08/07 13:40:02 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    string name;

    // Creating a zombie on the stack
    cout << endl;
    cout << "Let's create a zombie on the stack." << endl;
    cout << "Enter a name for the zombie: " << endl;
    cin >> name;
    Zombie zombie1(name);
    cout  << endl;

    // Creating a zombie on the heap
    cout << "Now let's make a zombie on the heap." << endl;
    cout << "What should we call the little guy? " << endl;
    cin >> name;
    Zombie *zombie2 = newZombie(name);
    cout << endl;


    // Using announce function with zombie2
    cout << "Hello " << zombie2->getName() << endl;
    zombie2 ->announce();
    cout << endl;


    // We're done with zombie2 now, because it was made on the heap 
    // we need to delete him, as there is no auto-deallocation of memory.
    cout << "Because we made " << zombie2->getName() << " on the heap" << 
        " the destructor won't work." << endl;
    cout << "Let's delete " << zombie2->getName() << "." << endl;
    cout << "Deleting zombie2, aka " + zombie2->getName() << "." << endl;
    delete(zombie2);
    cout << "Bye little fella. Have a nice unlife." << endl;
    cout << endl;

    // Using randomChump function
    cout << "Lastly, let's make a randomChump." << endl;
    cout << "What should we call little randy?" << endl;
    cin >> name;
    randomChump(name);
    cout << endl;
}