/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:29 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 20:17:49 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Fixed
{
    private:
        int raw;
        static const int bits = 8;
    public:
        Fixed(); // Default constructor
        Fixed(const Fixed &copy); // Copy constructor
        Fixed(int const nbr);
        Fixed(float const f);
        ~Fixed(); // Destructor
        Fixed &operator = (const Fixed &copy); // Copy assignment operator overload 
        int getRawBits() const; // getter function for raw bits
        void setRawBits(int const raw); // setter function for raw bits
        float toFloat() const;
        int toInt() const;
    };

ostream &operator << (ostream &output, const Fixed &fpNumber);

#endif