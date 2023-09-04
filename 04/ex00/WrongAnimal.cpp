/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:39:07 by rmount            #+#    #+#             */
/*   Updated: 2023/09/04 15:50:47 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal"){
    cout << "Default WrongAnimal constructor called." << endl;
}

WrongAnimal::WrongAnimal(string type):type(type){
    cout << "WrongAnimal constructor with a type passed in called." << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    cout << "WrongAnimal copy constructor called." << endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    cout << "WrongAnimal " << this->type << " has been destroyed." << endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy){
    cout << "WrongAnimal assignment operator overload called." << endl;
    this->type = copy.type;
    return (*this);
}

string WrongAnimal::getType() const{
    return (this->type);
}

void WrongAnimal::makeSound() const{
    cout << this->type << " says <wrong generic sound>" << endl;
}