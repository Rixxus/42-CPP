/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:32 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 20:21:44 by rmount           ###   ########.fr       */
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

// Int constructor which converts the int into a fixed point number.
Fixed::Fixed(int const nbr):raw(nbr << bits){
    cout << "Int constructor called" << endl;
}

// Float constructor which converts the float into a fixed point number.
Fixed::Fixed(float const f):raw(roundf(f *(1 << bits))){
    cout << "Float constructor called" << endl;
}

// Destructor
Fixed::~Fixed(){
    cout << "Destructor called" << endl;
}

// Overloading the assignment operator. Any Fixed object which is
// assigned '=' to another Fixed object will be given the copy's
// raw value.
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

// Converts the raw bits into a float using the 
// opposite method to the float constructor
float Fixed::toFloat() const{
    return ((float)this->raw / (1 << bits));
}

// Converts the raw bits into an int by using the
// opposite method to the int constructor
int Fixed::toInt() const{
    return (this->raw >> bits);
}

// Overloading the output stream operator '<<' so that whenever
// a Fixed object is used in an output stream it is converted
// to a float.
ostream &operator << (ostream &output, const Fixed &fpNumber){
    output << fpNumber.toFloat();
    return (output);
}