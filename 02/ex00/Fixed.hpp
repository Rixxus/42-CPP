/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:29 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 16:35:55 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Fixed
{
    private:
        int raw;
        static const int bits = 8;
    public:
        Fixed(); // Default constructor
        Fixed(const Fixed &copy); // Copy constructor
        ~Fixed(); // Destructor
        Fixed &operator = (const Fixed &copy); // Copy assignment operator overload 
        int getRawBits() const; // getter function for raw bits
        void setRawBits(int const raw); // setter function for raw bits
    };

#endif