/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:42:41 by rmount            #+#    #+#             */
/*   Updated: 2023/07/27 22:09:18 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::endl;

// Constructor and destructor
Contact::Contact(){}
Contact::~Contact(){}

// Setters
void    Contact::set_first_name(string first_name){
    while (first_name.empty() || no_letters(first_name)){
        blank_error();
        getline(cin, first_name);
    }
    this->first_name = first_name;
}
void    Contact::set_last_name(string last_name){
     while (last_name.empty() || no_letters(last_name)){
        blank_error();
        getline(cin, last_name);
    }
    this->last_name = last_name;
}
void    Contact::set_nickname(string nickname){
     while (nickname.empty() || no_letters(nickname)){
        blank_error();
        getline(cin, nickname);
    }
    this->nickname = nickname;
}
void    Contact::set_number(string number){
     while (number.empty() || no_letters(number)){
        blank_error();
        getline(cin, number);
    }
    this->number = number;
}
void    Contact::set_secret(string secret){
     while (secret.empty() || no_letters(secret)){
        blank_error();
        getline(cin, secret);
    }
    this->secret = secret;
}
// Getters
string  Contact::get_first_name(){
    return first_name;
}
string  Contact::get_last_name(){
    return last_name;
}
string  Contact::get_nickname(){
    return nickname;
}
string  Contact::get_number(){
    return number;
}
string  Contact::get_secret(){
    return secret;
}
// Contact methods
bool Contact::no_letters(string str){
    int i = 0;
    while (str[i]){
        if (str[i] != ' '){
            return false;
        }
        i++;
    }
    return true;
}
void Contact::blank_error(void){
    cout << "Input cannot be blank." << endl;
    cout << "Please enter valid data: " << endl;
}