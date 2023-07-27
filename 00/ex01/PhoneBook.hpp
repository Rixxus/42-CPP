/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:42:53 by rmount            #+#    #+#             */
/*   Updated: 2023/07/27 22:09:51 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

using std::string;

class PhoneBook {
    private:
        // Attributes
        Contact contacts[8];
        int number_of_contacts;
        int oldest_contact_index;
        int display_index;
    public:
        // Constructor and destructor
        PhoneBook();
        ~PhoneBook();
        // Functions
        void add_contact();
        void search_contacts();
        void print_table();
        void check_truncate(string str);
        void display_contact(int index);
};

#endif