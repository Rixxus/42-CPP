/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:29:55 by rmount            #+#    #+#             */
/*   Updated: 2023/07/27 23:01:41 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <chrono>

using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::cin;

int main()
{
    // Variables
    string command;
    PhoneBook phonebook;

    // Startup
    cout << "LOADING..." << endl;
    cout << "PHONEBOOK READY" << endl;
    cout << "You may use the following commands:" << endl;
    cout << "ADD: Add a new contact" << endl;
    cout << "SEARCH: Search for a contact" << endl;
    cout << "EXIT: Close the phone book" << endl;
    // Program loop
    while (1){
        cout << "PHONEBOOK READY: ADD, SEARCH or EXIT?" << endl;
        getline(cin, command);
        if (command == "ADD"){
            phonebook.add_contact();
        }
        else if (command == "SEARCH"){
            phonebook.search_contacts();
        }
        else if (command == "EXIT"){
            return 0;
        }
        else{
            cout << "Invalid command. Please enter ADD, SEARCH or EXIT." << endl;
        }
    }   
}