/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:54:27 by rmount            #+#    #+#             */
/*   Updated: 2023/09/04 16:04:59 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal(){
    cout << "Cat default constructor called." << endl;
    this->type = "Cat";
}

Cat::~Cat(){
    cout << "Cat has been destroyed." << endl;
}

Cat::Cat(const Cat &copy):Animal(copy.type){
    cout << "Cat copy constructor called." << endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy){
    cout << "Cat copy assignment operator called." << endl;
    this->type = copy.type;
    return (*this);
}

void Cat::makeSound() const{
    cout << this->type << " says meooooooww." << endl;
}