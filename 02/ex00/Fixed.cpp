/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:32 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 19:52:06 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed():raw(0){
    cout << "Default constructor called" << endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &copy){
    cout << "Copy constructor called" << endl;
    *this = copy; // Assigning the original object to the copy
}

// Destructor
Fixed::~Fixed(){
    cout << "Destructor called" << endl;
}

// Overloading the assignment operator
Fixed &Fixed::operator=(const Fixed &copy){
    cout << "Copy assignment operator called" << endl;
    this->raw = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits() const{
    cout << "getRawBits member function called" << endl;
    return this->raw;
}

void Fixed::setRawBits(int const raw){
    cout << "setRawBits member function called" << endl;
    this->raw = raw;
}