/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:42:44 by rmount            #+#    #+#             */
/*   Updated: 2023/07/27 22:09:18 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

using std::string;

class Contact {
    private:
        // Attributes of Contact
        string  first_name;
        string  last_name;
        string  nickname;
        string  number;
        string  secret;
    public:
        // Constructor and desructor
        Contact();
        ~Contact();
        // Setters
        void  set_first_name(string first_name);
        void  set_last_name(string last_name);
        void  set_nickname(string nickname);
        void  set_number(string number);
        void  set_secret(string secret);
        // Getters
        string  get_first_name();
        string  get_last_name();
        string  get_nickname();
        string  get_number();
        string  get_secret();
        // Class methods
        bool no_letters(string str);
        void blank_error(void);
        };

        #endif