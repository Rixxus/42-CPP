/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:54:27 by rmount            #+#    #+#             */
/*   Updated: 2023/09/08 09:56:15 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal(), brain(new Brain()){
    cout << "Cat default constructor called." << endl;
    this->type = "Cat";
}

Cat::~Cat(){
    delete this->brain;
    cout << "Cat has been destroyed, along with its brain." << endl;
}

Cat::Cat(const Cat &copy):Animal(copy.type), brain(nullptr){
    cout << "Cat copy constructor called." << endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy){
    cout << "Cat copy assignment operator called." << endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    return (*this);
}

void Cat::makeSound() const{
    cout << this->type << " says meooooooww." << endl;
}

Brain *Cat::getBrain() const{
    return (this->brain);
}