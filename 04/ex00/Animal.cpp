/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:39:07 by rmount            #+#    #+#             */
/*   Updated: 2023/09/04 15:50:47 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal"){
    cout << "Default Animal constructor called." << endl;
}

Animal::Animal(string type):type(type){
    cout << "Animal constructor with a type passed in called." << endl;
}

Animal::Animal(const Animal &copy){
    cout << "Animal copy constructor called." << endl;
    *this = copy;
}

Animal::~Animal(){
    cout << "Animal " << this->type << "has been destroyed." << endl;
}

Animal &Animal::operator=(Animal const &copy){
    cout << "Animal assignment operator overload called." << endl;
    this->type = copy.type;
    return (*this);
}

string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    cout << this->type << " says <generic sound>" << endl;
}