/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:54:27 by rmount            #+#    #+#             */
/*   Updated: 2023/09/04 16:04:53 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal(){
    cout << "Dog default constructor called." << endl;
    this->type = "Dog";
}

Dog::~Dog(){
    cout << "Dog has been destroyed." << endl;
}

Dog::Dog(const Dog &copy):Animal(copy.type){
    cout << "Dog copy constructor called." << endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy){
    cout << "Dog copy assignment operator called." << endl;
    this->type = copy.type;
    return (*this);
}

void Dog::makeSound() const{
    cout << this->type << " says woof woof." << endl;
}