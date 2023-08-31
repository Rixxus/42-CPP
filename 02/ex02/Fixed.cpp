/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:32 by rmount            #+#    #+#             */
/*   Updated: 2023/08/31 18:28:20 by rmount           ###   ########.fr       */
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

// Equality operator overload - when comparing two Fixed objects
// the comparison will be based on their bits being equal
bool Fixed::operator==(const Fixed &rhs){
    if (this->raw == rhs.getRawBits()){
        return (true);
    }
    return (false);
}

// Not equal operator overload - when comparing two Fixed objects
// the comparison will be based on their bits not being equal
bool Fixed::operator!=(const Fixed &rhs){
    if (this->raw != rhs.getRawBits()){
        return (true);
    }
    return (false);
}

// Less than operator overload - when comparing two Fixed objects
// the comparison will be based on the bits of the current (left hand) 
// object's bits being less than the right hand side's bits
bool Fixed::operator<(const Fixed &rhs){
    if (this->raw < rhs.getRawBits()){
        return (true);
    }
    return (false);
}

// Greater than operator overload - when comparing two Fixed objects
// the comparison will be based on the bits of the current (left hand) 
// object's bits being greater than the right hand side's bits
bool Fixed::operator>(const Fixed &rhs){
    if (this->raw > rhs.getRawBits()){
        return (true);
    }
    return (false);
}

// Less than or equal to operator overload - when comparing two Fixed objects
// the comparison will be based on the bits of the current (left hand) 
// object's bits being less than or equal to the right hand side's bits
bool Fixed::operator<=(const Fixed &rhs){
    if (this->raw <= rhs.getRawBits()){
        return (true);
    }
    return (false);
}

// Greater than or equal to operator overload - when comparing two Fixed objects
// the comparison will be based on the bits of the current (left hand) 
// object's bits being greater than or equal to the right hand side's bits
bool Fixed::operator>=(const Fixed &rhs){
    if (this->raw >= rhs.getRawBits()){
        return (true);
    }
    return (false);
}

// Addition operator overload - when adding two Fixed objects together
// the toFloat() function will be used on the left hand and right hand side objects,
// and they will be added together and the total passed to a Fixed constructor and assigned to temp.
Fixed Fixed::operator+(Fixed const &rhs) const{
    Fixed temp;
    temp = (Fixed(this->toFloat() + rhs.toFloat()));
    return (temp);
}

// Minus operator overload - when minusing one Fixed object from another,
// the toFloat() function will be used on the left hand and right hand side objects,
// and the right hand side will be taken away from the left hand side and
// the total passed to a Fixed constructor and assigned to temp.
Fixed Fixed::operator-(Fixed const &rhs) const{
    Fixed temp;
    temp = (Fixed(this->toFloat() - rhs.toFloat()));
    return (temp);
}

// Multiplication operator overload - when multiplying two Fixed objects together
// the toFloat() function will be used on the left hand and right hand side objects,
// and they will be multiplied and the total passed to a Fixed constructor and assigned to temp.
Fixed Fixed::operator*(Fixed const &rhs) const{
    Fixed temp;
    temp = (Fixed(this->toFloat() * rhs.toFloat()));
    return (temp);
}

// Division operator overload - when dividing one Fixed objects by another Fixed object
// the toFloat() function will be used on the left hand and right hand side objects,
// and the left hand side will be divided by the right hand side and the total
// passed to a Fixed constructor and assigned to temp.
Fixed Fixed::operator/(Fixed const &rhs) const{
    Fixed temp;
    temp = (Fixed(this->toFloat() / rhs.toFloat()));
    return (temp);
}

// Pre-increment operator overload - when pre-incrementing a Fixed object the 
// increment will occur on the raw attribute
Fixed Fixed::operator++(){
    this->raw++;
    return (*this);
}

// Pre-decrecrement operator overload - when pre-decrementing a Fixed object
Fixed Fixed::operator--(){
    this->raw--;
    return (*this);
}

// Post-increment operator overload - when post-incrementing a Fixed object
// As the 'operator++' is used for both pre and post incrementing, the post
// version passes a dummy int to the function which the compiler understands
// to mean increment postfix. This is defined in c++ itself.
Fixed Fixed::operator++(int){
    Fixed temp;
    temp.raw = raw++;
    return (temp);
}

// Post-decrement operator overload - when post-decrementing a Fixed object
// As the 'operator--' is used for both pre and post decrementing, the post
// version passes a dummy int to the function which the compiler understands 
// to mean decrement postfix. This is defined in c++ itself.
Fixed Fixed::operator--(int){
    Fixed temp;
    temp.raw = raw--;
    return (temp);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs){
    if(lhs.getRawBits() > rhs.getRawBits()){
        return (lhs);
    }
    return (rhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs){
    if (lhs.getRawBits() > rhs.getRawBits()){
        return (lhs);
    }
    return (rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs){
    if (lhs.getRawBits() < rhs.getRawBits()){
        return(rhs);
    }
    return (lhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs){
    if (lhs.getRawBits() < rhs.getRawBits()){
        return (rhs);
    }
    return (lhs);
}