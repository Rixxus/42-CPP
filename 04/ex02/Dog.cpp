/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:54:27 by rmount            #+#    #+#             */
/*   Updated: 2023/09/08 11:09:29 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal(), brain(new Brain()){
    cout << "Dog default constructor called." << endl;
    this->type = "Dog";
}

Dog::~Dog(){
    delete this->brain;
    cout << "Dog has been destroyed, along with its brain." << endl;
}

Dog::Dog(const Dog &copy):Animal(copy.type), brain(nullptr){
    cout << "Dog copy constructor called." << endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy){
    cout << "Dog copy assignment operator called." << endl;
    this->type = copy.type;
    this->brain = copy.brain;
    return (*this);
}

void Dog::makeSound() const{
    cout << this->type << " says woof woof." << endl;
}

Brain *Dog::getBrain() const{
    return this->brain;
}