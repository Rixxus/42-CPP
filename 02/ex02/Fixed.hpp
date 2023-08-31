/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:29 by rmount            #+#    #+#             */
/*   Updated: 2023/08/30 22:03:14 by rmount           ###   ########.fr       */
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

        bool operator==(const Fixed &rhs);
        bool operator!=(const Fixed &rhs);
        bool operator<(const Fixed &rhs);
        bool operator>(const Fixed &rhs);
        bool operator<=(const Fixed &rhs);
        bool operator>=(const Fixed &rhs);
        Fixed operator+(Fixed const &rhs) const;
        Fixed operator-(Fixed const &rhs) const;
        Fixed operator*(Fixed const &rhs) const;
        Fixed operator/(Fixed const &rhs) const;
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        static Fixed &min(Fixed &lhs, Fixed &rhs);
        static const Fixed &min(Fixed const &lhs, Fixed const &rhs);
        static Fixed &max(Fixed &lhs, Fixed &rhs);
        static const Fixed &max(Fixed const &lhs, Fixed const &rhs);
    };

ostream &operator << (ostream &output, const Fixed &fpNumber);

#endif