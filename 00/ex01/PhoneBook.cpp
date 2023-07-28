/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:42:47 by rmount            #+#    #+#             */
/*   Updated: 2023/07/28 15:04:46 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::isdigit;

// Constructor and destructor
PhoneBook::PhoneBook(){
    number_of_contacts = 0;
    oldest_contact_index = 0;
    display_index = 0;
}
PhoneBook::~PhoneBook(){}
// Functions
void PhoneBook::add_contact(){
    Contact new_contact;
    string first_name;
    string last_name;
    string nickname;
    string number;
    string secret;

    if (oldest_contact_index >= 8){
        oldest_contact_index = 0;
    }
    // First name
    cout << "Enter Contact's First Name: " << endl;
    getline(cin, first_name);
    new_contact.set_first_name(first_name);
    // Last name
    cout << "Enter Contact's Last Name: " << endl;
    getline(cin, last_name);
    new_contact.set_last_name(last_name);
    // Nickname
    cout << "Enter Contact's Nickname: " << endl;
    getline(cin, nickname);
    new_contact.set_nickname(nickname);
    // Number
    cout << "Enter Contact's Number: " << endl;
    getline(cin, number);
    new_contact.set_number(number);
    // Secret
    cout << "Enter Contact's Darkest Secret: " << endl;
    getline(cin, secret);
    new_contact.set_secret(secret);
    // Add the contact to the array
    contacts[oldest_contact_index] = new_contact;
    cout << "Contact added!" << endl;
    oldest_contact_index++;
    if (number_of_contacts < 8){
        number_of_contacts++;
    }
}

void PhoneBook::search_contacts(){
    string index;
    char cindex;
    if (number_of_contacts == 0){
        cout << "\nSorry, there are no contacts yet." << endl;
        cout << "Please ADD a contact first." << endl;
        return ;
    }
    print_table();  
    cout << "Please enter the contact Index number to view: " << endl;
    while (display_index < 1 || display_index > number_of_contacts){
        getline(cin, index);
        cindex = index[0];
        index = cindex;
        if (isdigit(cindex)){
            if (stoi(index) > 0 && stoi(index) <= number_of_contacts)
            {
                display_index = stoi(index);
                display_contact(display_index);
            }
            else {
                cout << "Invalid contact Index." << endl;
                print_table();  
                cout << "Please enter the contact Index number to view: " << endl;
            }
        }
        else{
            cout << "Invalid contact Index." << endl;
            print_table();
            cout << "Please enter a valid contact Index." << endl;
        }
    }
    display_index = 0;
}

void PhoneBook::check_truncate(string str){
    if (str.length() > 10){
        str = str.substr(0, 9);
        str.append(".");
    }
    cout << std::setw(10) << str << "|";
}

void PhoneBook::display_contact(int index){
    index--;
    std::cout << "\nCONTACT NO: " << index + 1 << endl;
    std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].get_number() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].get_secret() << std::endl;
}

void PhoneBook::print_table()
{
    cout << "\n|     Index|First Name| Last Name|  Nickname|" << endl;
    cout << "|-------------------------------------------|" << endl;
    for (int i = 0; i < number_of_contacts; i++){
        cout << "|" << std::setw(10) << std::right << i + 1 << "|";
        check_truncate(contacts[i].get_first_name());
        check_truncate(contacts[i].get_last_name());
        check_truncate(contacts[i].get_nickname());
        cout << endl;
    }
}