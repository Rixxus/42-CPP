/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:42:47 by rmount            #+#    #+#             */
/*   Updated: 2023/07/27 23:06:51 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

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
    cout << "Contacted added!" << endl;
    oldest_contact_index++;
    if (number_of_contacts < 8){
        number_of_contacts++;
    }
}

void PhoneBook::search_contacts(){
    if (number_of_contacts == 0){
        cout << "Sorry, there are no contacts yet." << endl;
        cout << "Please ADD a contact first." << endl;
        return ;
    }
    print_table();
    cout << "Please enter the contact number to view: " << endl;
    cin >> display_index;
    if (cin.fail()){
        cout << "Error, input must be an number." << endl;
        cin.clear();
        cin.ignore();
        return ;
    }
    if (display_index >= 1 && display_index <= number_of_contacts){
        display_contact(display_index);
    }
    else {
        cout << "We don't have a contact matching that number" << endl;
    }
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
    std::cout << "INDEX CARD\n";
    std::cout << "first name: " << contacts[index].get_first_name() << std::endl;
    std::cout << "last name: " << contacts[index].get_last_name() << std::endl;
    std::cout << "nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "ph number: " << contacts[index].get_number() << std::endl;
    std::cout << "darkest secret: " << contacts[index].get_secret() << std::endl;
}

void PhoneBook::print_table()
{
    cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
    cout << "|-------------------------------------------|" << endl;
    for (int i = 0; i < number_of_contacts; i++){
        cout << "|" << std::setw(10) << std::right << i + 1 << "|";
        check_truncate(contacts[i].get_first_name());
        check_truncate(contacts[i].get_last_name());
        check_truncate(contacts[i].get_nickname());
        cout << endl;
    }
}